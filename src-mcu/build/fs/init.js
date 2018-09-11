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
let RELAY_1 = 16; /* d1 */
let RELAY_2 = 5; /* d2 */
let RELAY_3 = 4; /* d3 */
let RELAY_4 = 0; /* d4 */
let TEMPERATURE_SENSOR_PIN = 2; /* tx */

/* MQTT topics and publish frequency in milliseconds  */
let CONTROLS_TOPIC_SUBS = '/aqua/controls/';
let DEVICE_INFO_TOPIC_PUB = '/aqua/deviceInfo/';
let DEVICE_INFO_TOPIC_PUB_FREQ = (1000 * 60);
let TEMPERATURE_TOPIC_PUB = '/aqua/temp/';
let TEMPERATURE_TOPIC_PUB_FREQ = (1000 * 5);

GPIO.set_mode(RELAY_1, GPIO.MODE_OUTPUT);
GPIO.set_mode(RELAY_2, GPIO.MODE_OUTPUT);
GPIO.set_mode(RELAY_3, GPIO.MODE_OUTPUT);
GPIO.set_mode(RELAY_4, GPIO.MODE_OUTPUT);

/* Init GPIOs states at the begining */
GPIO.write(RELAY_1, 0);
GPIO.write(RELAY_2, 0);
GPIO.write(RELAY_3, 0);
GPIO.write(RELAY_4, 0);


/* GET TEMPRETURE FROM DS18B20 using api_arduino_onewire.js and ds18b20.js*/
// Initialize OneWire library
let ow = OneWire.create(TEMPERATURE_SENSOR_PIN /* pin */);

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


/* GPIO switching. */
MQTT.sub(CONTROLS_TOPIC_SUBS, function (conn, topic, message) {

    let msg = JSON.parse(message);

    if (msg.SW_1 === 1 || msg.SW_1 === 0) { GPIO.write(RELAY_1, (msg.SW_1 + 0)) }
    if (msg.SW_2 === 1 || msg.SW_2 === 0) { GPIO.write(RELAY_2, (msg.SW_2 + 0)) }
    if (msg.SW_3 === 1 || msg.SW_3 === 0) { GPIO.write(RELAY_3, (msg.SW_3 + 0)) }
    if (msg.SW_4 === 1 || msg.SW_4 === 0) { GPIO.write(RELAY_4, (msg.SW_4 + 0)) }

    print('Subscribe, Topic:', topic, 'message:', msg);

}, null);

/* Publish device info */
Timer.set(DEVICE_INFO_TOPIC_PUB_FREQ, Timer.REPEAT, function () {

    RPC.call(RPC.LOCAL, 'Sys.GetInfo', null, function (res) {
        let ok = MQTT.pub(DEVICE_INFO_TOPIC_PUB, JSON.stringify(res), 0);
        print('Publish: ', ok, 'Topic:', DEVICE_INFO_TOPIC_PUB, 'message:', JSON.stringify(res));
    }, null);

}, null);


/* Publish temp every
 3min, for 24H = 480 chart points */
Timer.set(TEMPERATURE_TOPIC_PUB_FREQ, Timer.REPEAT, function () {
    if (n === 0) {
        if ((n = searchSens()) === 0) { print('No device found'); }
    }

    let t = getTemp(ow, rom[0]);

    if (!isNaN(t)) {
        let ok = MQTT.pub(TEMPERATURE_TOPIC_PUB, JSON.stringify({ temperature: t }), 0);
        // print('Publish: ', ok, 'Topic:', TEMPERATURE_TOPIC_PUB, 'message:', t);
    }
}, null);