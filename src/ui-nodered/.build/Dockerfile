FROM nodered/node-red

# Copy package.json to the WORKDIR so npm builds all
# of your added nodes modules for Node-RED
# COPY package.json .
# RUN npm install --unsafe-perm --no-update-notifier --no-fund --only=production

RUN for addonnodes in \
node-red-dashboard \
node-red-contrib-os \
# node-red-contrib-ui-time-scheduler \
; do \
npm install ${addonnodes} ;\
done;

# Temporary, check packages folder readme file for more information.
ADD packages/node-red-contrib-ui-time-scheduler.zip node-red-contrib-ui-time-scheduler.zip
RUN unzip node-red-contrib-ui-time-scheduler.zip
RUN npm install ./node-red-contrib-ui-time-scheduler

# COPY node-red-contrib-example node-red-contrib-example
# RUN npm install ./node-red-contrib-example
# FROM nodered/node-red:latest
# USER root
# RUN apk update && apk add --no-cache eudev-dev
# USER node-red


# Copy _your_ Node-RED project files into place
# NOTE: This will only work if you DO NOT later mount /data as an external volume.
#       If you need to use an external volume for persistence then
#       copy your settings and flows files to that volume instead.
COPY settings.js /data/settings.js
# COPY flows_cred.json /data/flows_cred.json
COPY flows.json /data/flows.json
COPY aqualinks-theme.txt /data/aqualinks-theme.txt

# You should add extra nodes via your package.json file but you can also add them here:
#WORKDIR /usr/src/node-red
#RUN npm install node-red-node-smooth

# expect a build-time variable
ARG MQTT_URL="mosquitto"
ARG MQTT_PORT=1883

# use the value to set the ENV var default
ENV MQTT_URL=$MQTT_URL
ENV MQTT_PORT=$MQTT_PORT
