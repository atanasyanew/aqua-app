load('api_config.js');
load('api_events.js');
load('api_gpio.js');
load('api_mqtt.js');
load('api_net.js');
load('api_sys.js');
load('api_timer.js');
load('api_rpc.js');
load('api_arduino_onewire.js');
load('ds18b20.js');

/* INIT GPIO PINS */
let relay_1 = 16; /* d1 */
let relay_2 = 5; /* d2 */
let relay_3 = 4; /* d3 */
let relay_4 = 0; /* d4 */
let tempSensor = 2; /* tx */

GPIO.set_mode(relay_1, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_2, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_3, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_4, GPIO.MODE_OUTPUT);

/* Init GPIOs states at the begining */
GPIO.write(relay_1, 0);
GPIO.write(relay_2, 0);
GPIO.write(relay_3, 0);
GPIO.write(relay_4, 0);

/* MQTT topics */
let topic = '/aqua/';

/* GET TEMPRETURE FROM DS18B20 using api_arduino_onewire.js and ds18b20.js*/
// Initialize OneWire library
let ow = OneWire.create(tempSensor /* pin */);

// Number of sensors found on the 1-Wire bus
let n = 0;
// Sensors addresses
let rom = ['01234567'];

// Search for sensors
let searchSens = function () {
    let i = 0;
    // Setup the search to find the device type on the next call
    // to search() if it is present.
    ow.target_search(DEVICE_FAMILY.DS18B20);

    while (ow.search(rom[i], 0/* Normal search mode */) === 1) {
        // If no devices of the desired family are currently on the bus, 
        // then another type will be found. We should check it.
        if (rom[i][0].charCodeAt(0) !== DEVICE_FAMILY.DS18B20) {
            break;
        }
        // Sensor found
        print('Sensor#', i, 'address:', toHexStr(rom[i]));
        rom[++i] = '01234567';
    }
    return i;
};




/* PROGRAM EXECUTION */

/* MQTT subscribe for toggle the relays. btn_1 -> relay_1 */
MQTT.sub((topic + 'controls/'), function (conn, topic, responseMsg) {

    let msg = JSON.parse(responseMsg);

    if (msg.SW_1 === 1 || msg.SW_1 === 0) { GPIO.write(relay_1, (msg.SW_1 + 0)) }
    if (msg.SW_2 === 1 || msg.SW_2 === 0) { GPIO.write(relay_2, (msg.SW_2 + 0)) }
    if (msg.SW_3 === 1 || msg.SW_3 === 0) { GPIO.write(relay_3, (msg.SW_3 + 0)) }
    if (msg.SW_4 === 1 || msg.SW_4 === 0) { GPIO.write(relay_4, (msg.SW_4 + 0)) }

    print('Topic:', topic, 'message:', responseMsg);

}, null);

/* Get device info */
Timer.set((1000 * 60), Timer.REPEAT, function () {
    RPC.call(RPC.LOCAL, 'Sys.GetInfo', null, function (resp, ud) {
        let msgDeviceInfo = JSON.stringify(resp);
        let topicToPublish = topic + 'deviceInfo/';
        let ok = MQTT.pub(topicToPublish, msgDeviceInfo, 1);
        print('Published:', ok, topicToPublish, '->', msgDeviceInfo);
    }, null);
}, null);


/* Publish temp every 3min, for 24H = 480 chart points */
Timer.set((1000 * 5), Timer.REPEAT, function () {
    if (n === 0) {
        if ((n = searchSens()) === 0) { print('No device found'); }
    }

    let t = getTemp(ow, rom[0]);

    if (isNaN(t)) {
        print('No device found or temp is NaN');
    } else {
        let msgTempAqua = JSON.stringify({ temperature: t });
        let topicToPublish = topic + 'temp/';
        let ok = MQTT.pub(topicToPublish, msgTempAqua, 1);
        print('Published:', ok, topicToPublish, '->', msgTempAqua);
    }
}, null);