# Aqua-app, microcontroller

## Deploy

Notes for deploying the application logic to the microcontroller (ESP8266 NodeMCU).
This is short guide, feel free to read more about - [mongoose os docs](https://mongoose-os.com/docs/userguide/build.md)

### Setup the environment

Install and start [Mmoongose OS tool](https://mongoose-os.com/software.html)

### Build

Build the source code, Locally or Remote

```shell
# To build remotely (the default):
mos build --platform PLATFORM

# To build locally (requires Docker):
mos build --platform esp8266 --local --verbose
```

### Flash

Connect the microcontroller and flash it with the following command

```shell
mos flash
```

### Watch device output

```shell
mos console
```

TODO: build process is not working, when project folder is located in long directories (folder should be placed on desktop)

NOTES:

- ```mos.yml``` does not include WIFI connect credentials, in order to accomplish connection to the home network execute in the terminal ```mos``` witch will open the user interface in the browser and follow the steps
- in order to change the MQTT broker edit ```mos.yml``` or use mos tool and configure the connection from the ui
