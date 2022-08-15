# Aqua-app, Node-RED server

You may use provided docker compose

```bash
docker-compose up -d
```

or the following image - [hub.docker.com/r/ayanew/aqualinks](https://hub.docker.com/r/ayanew/aqualinks)

```bash
docker run -p 1880:1880 -e MQTT_URL="yourIp" ayanew/aqualinks
```

Or build locally

```bash
docker build -t aqualinks-test1 .
docker run -p 1880:1880 -e MQTT_URL="yourIp" aqualinks-test1
```

**OBSOLETE!**

Node-RED app to interacts with the MCU and provides user interface
The folder ```data``` folder is shared between the host machine and the container.

```shell
docker-compose up
```

docs: https://nodered.org/docs/platforms/docker

The container uses the directory /data as the user configuration directory. To add additional nodes you can open shell into the container and run the appropriate npm install commands:

```shell
# Open a shell in the container
docker exec -it mynodered /bin/bash

# Once inside the container, npm install the nodes in /data
cd /data
npm install node-red-node-smooth
exit

# Restart the container to load the new nodes
docker stop mynodered
docker start mynodered
```

Storing data outside of the container
It is possible to mount the /data path on an external volume:

```shell
docker run -it -p 1880:1880 -v ~/node-red-data:/data --name mynodered nodered/node-red-docker
```

This command mounts the host’s ~/node-red-data directory as the user configuration directory inside the container.

Adding extra nodes to the container can then be accomplished by running npm install on the host machine:

```shell
cd ~/node-red-data
npm install node-red-node-smooth
docker stop mynodered
docker start mynodered
```

> Note : Modules with a native dependencies will be compiled on the host machine's architecture. These modules will not work inside the Node-RED container unless the architecture matches the container's base image. For native modules, it is recommended to install using a local shell or update the package.json and re-build.