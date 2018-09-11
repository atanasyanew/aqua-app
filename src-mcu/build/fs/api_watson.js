load('api_events.js');

let Watson = {
  EVENT_GRP: Event.baseNumber('IBM'),
  _sejp: ffi('bool mgos_watson_send_event_jsonp(struct mg_str *, struct mg_str *)'),

  sendEventJSON: function(id, obj) { return Watson._sejp(id, JSON.stringify(obj)) },
};

Watson.EV_CONNECT = Watson.EVENT_GRP + 0;
Watson.EV_CLOSE   = Watson.EVENT_GRP + 3;
