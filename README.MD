Aquarium app
======

### Description

my fish tank controler using esp8266 nodeMCU

Motivation
the app allows me to control and monitoring my fish tank

for the esp i am using mongoose OS
where i wrote simple logic and implement basic Msg protocol with MQTT
The ESP8266 controls

the big picture
esp -> MQTT -> Nodered

### Screenshots

![aqua-dashboard-ui](/docs/aqua-dashboard-ui.PNG "dashboard")

#### Build a copy

repo structure organization

First of all you will need a place where to deploy the project. I am using raspberry pi, but it can be whatever else.

#### Parts
| n | Description  | Qty | Price (eur)
| --- | --- | --- |--- |
| 1 | ESP82666 NodeMCU | 1 | 2.00 |
| 2 | 4 channel Relay Shield | 1 | 2 |
| 3 | 5 vdc power supply | 1 | 4 |
| 4 | DS18B20 waterproof tempreture sensor | 1 | 1 |
| 5 | Buttons | 5 | 0.50 |
| 6 | 4.7 kOhm resistor | 1 | 0.05 |
| 7 | 10 kOhm resistor | 4 | 0.05 |
| 5 | Others (wires, connectors, case etc..) |  | 5 |

Okay, after we have all the parts we can continue i.e wiring all together.

#### Hardware

Wiring circuit of the interface for controlling the aquarium
![wiring-circuit](/docs/wiring-circuit.PNG "wiring circuit")

#### Software

##### Setup nodered and the ui

##### Setup the device software

Code timee... mmm not really just deploy

configs you may want to change
nodered on port :1880

MQTT port server :1883

MQTT WS port :1884

Additional information

Device topics

##### subscribe

/aqua/controls/ - toggle outlets

##### Publish

/aqua/deviceInfo/ - every min device info
/aqua/temp/ - every 5 min temp from the sensor
/aqua/btn/ - each time when device btn is press





















```

/aquarium/temperature/interval/5min

```json
{
    "temperature" : 24,
}
```

/aquarium/temperature/interval/60min

```json
{
    "dht_temp" : 24,
}
```

/aquarium/info/
every 5 sec

``` json
  "app": "demo-js",
  "fw_version": "1.0",
  "fw_id": "20171229-091640/???",
  "mac": "2E3AE82F7F70",
  "arch": "esp8266",
  "uptime": 295,
  "ram_size": 52032,
  "ram_free": 34436,
  "ram_min_free": 25616,
  "fs_size": 233681,
  "fs_free": 104416,
  "wifi": {
    "sta_ip": "192.168.0.102",
    "ap_ip": "",
    "status": "got ip",
    "ssid": "TP-LINK_44AC"
  }
```



### TODOS

https://github.com/mongoose-os-apps/example-arduino-onewire-js

https://startingelectronics.org/articles/arduino/switch-and-web-page-button-LED-control/


mongoose-os-libs
https://github.com/mongoose-os-libs


TODOS:
init server controls on startup
create mongoose project with mos.yml file
fix readme
add btn events
change wiring diagram
