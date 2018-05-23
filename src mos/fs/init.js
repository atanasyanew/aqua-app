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
let btn_1 = 14; /* d5 */
let btn_2 = 12; /* d6 */
let btn_3 = 13; /* d7 */
let btn_4 = 15; /* d8 */
let relay_1 = 16; /* d1 */
let relay_2 = 5; /* d2 */
let relay_3 = 4; /* d3 */
let relay_4 = 0; /* d4 */
let tempSensor = 2; /* tx */

/* INIT GPIO MODES */
GPIO.set_mode(btn_1, GPIO.MODE_INPUT);
GPIO.set_mode(btn_2, GPIO.MODE_INPUT);
GPIO.set_mode(btn_3, GPIO.MODE_INPUT);
GPIO.set_mode(btn_4, GPIO.MODE_INPUT);

GPIO.set_mode(relay_1, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_2, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_3, GPIO.MODE_OUTPUT);
GPIO.set_mode(relay_4, GPIO.MODE_OUTPUT);

/* GPIOs should be stop at the begining */
GPIO.write(relay_1, 1);
GPIO.write(relay_2, 1);
GPIO.write(relay_3, 1);
GPIO.write(relay_4, 1);

/* MQTT topics */
let topic = '/aqua/';

/* CORE FUNCTIONS */

/* Toggle led and publish topic */
let buttonLogic = function (buttonPin, pinToToggle) {
    let value = GPIO.toggle(pinToToggle);
    let message = JSON.stringify({
        pin_in: buttonPin,
        pin_out: pinToToggle,
        pin_value: value
    });
    let topicToPublish = topic;
    let ok = MQTT.pub(topicToPublish, message, 1);
    print('Published:', ok, topicToPublish, '->', message);
    return message;
};


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

/* On a button press. btn_1 -> relay_1 */
GPIO.set_button_handler(btn_1, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 20, function () { buttonLogic(btn_1, relay_1) }, null);
GPIO.set_button_handler(btn_2, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 20, function () { buttonLogic(btn_2, relay_2) }, null);
GPIO.set_button_handler(btn_3, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 20, function () { buttonLogic(btn_3, relay_3) }, null);
GPIO.set_button_handler(btn_4, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 20, function () { buttonLogic(btn_4, relay_4) }, null);

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

/* Publish temp every 5min, for 24H = 480 chart points */
Timer.set((1000 * 60 * 5), Timer.REPEAT, function () {
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

