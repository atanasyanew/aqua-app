/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/c/Users/atana/Desktop/src-mcu/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_mbedtls_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_sys_config.yaml /c/Users/atana/Desktop/src-mcu/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_debug {
  char *udp_log_addr;
  int mbedtls_level;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  char *stdout_topic;
  char *stderr_topic;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
  struct mgos_config_sys_atca atca;
};

struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_mqtt {
  int enable;
  char *server;
  char *client_id;
  char *user;
  char *pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *ssl_cipher_suites;
  char *ssl_psk_identity;
  char *ssl_psk_key;
  int clean_session;
  int keep_alive;
  char *will_topic;
  char *will_message;
  int max_qos;
  int recv_mbuf_limit;
};

struct mgos_config_mqtt1 {
  int enable;
  char *server;
  char *client_id;
  char *user;
  char *pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *ssl_cipher_suites;
  char *ssl_psk_identity;
  char *ssl_psk_key;
  int clean_session;
  int keep_alive;
  char *will_topic;
  char *will_message;
  int max_qos;
  int recv_mbuf_limit;
};

struct mgos_config_shadow {
  int enable;
  char *lib;
  int ota_enable;
  int autocommit;
};

struct mgos_config_aws_greengrass {
  int enable;
  int reconnect_timeout_min;
  int reconnect_timeout_max;
};

struct mgos_config_aws {
  char *thing_name;
  struct mgos_config_aws_greengrass greengrass;
};

struct mgos_config_sntp {
  int enable;
  char *server;
  int retry_min;
  int retry_max;
  int update_interval;
};

struct mgos_config_azure {
  int enable;
  char *cs;
  int token_ttl;
  char *host_name;
  char *device_id;
  char *cert;
  char *key;
  int enable_cm;
  int enable_dm;
};

struct mgos_config_update {
  int timeout;
  int commit_timeout;
  char *url;
  int interval;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
  char *ssl_server_name;
  int enable_post;
};

struct mgos_config_rpc_ws {
  int enable;
  char *server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  char *ssl_server_name;
  char *ssl_ca_file;
  char *ssl_client_cert_file;
};

struct mgos_config_rpc_azure {
};

struct mgos_config_rpc_mqtt {
  int enable;
  char *pub_topic;
  char *sub_topic;
  int sub_wc;
  int qos;
};

struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  char *acl_file;
  char *auth_domain;
  char *auth_file;
  struct mgos_config_rpc_ws ws;
  struct mgos_config_rpc_azure azure;
  int enable_dm;
  struct mgos_config_rpc_mqtt mqtt;
  struct mgos_config_rpc_uart uart;
};

struct mgos_config_dash {
  int enable;
  char *token;
  char *server;
  char *ca_file;
  int send_logs;
  int stats_interval;
  int ota_chunk_size;
};

struct mgos_config_http {
  int enable;
  char *listen_addr;
  char *document_root;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *upload_acl;
  char *hidden_files;
  char *auth_domain;
  char *auth_file;
};

struct mgos_config_dns_sd {
  int enable;
  char *host_name;
  char *txt;
  int ttl;
};

struct mgos_config_gcp {
  int enable;
  char *project;
  char *region;
  char *registry;
  char *device;
  char *key;
  int token_ttl;
};

struct mgos_config_provision_button {
  int pin;
  int pull;
  int hold_ms;
};

struct mgos_config_provision {
  struct mgos_config_provision_button button;
};

struct mgos_config_wifi_ap {
  int enable;
  char *ssid;
  char *pass;
  int hidden;
  int channel;
  int max_connections;
  char *ip;
  char *netmask;
  char *gw;
  char *dhcp_start;
  char *dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  char *hostname;
  int keep_enabled;
};

struct mgos_config_wifi_sta {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi_sta1 {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi_sta2 {
  int enable;
  char *ssid;
  char *pass;
  char *user;
  char *anon_identity;
  char *cert;
  char *key;
  char *ca_cert;
  char *ip;
  char *netmask;
  char *gw;
  char *nameserver;
  char *dhcp_hostname;
};

struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta1 sta1;
  struct mgos_config_wifi_sta2 sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
};

struct mgos_config_spi {
  int enable;
  int debug;
  int miso_gpio;
  int mosi_gpio;
  int sclk_gpio;
  int cs0_gpio;
  int cs1_gpio;
  int cs2_gpio;
};

struct mgos_config_watson {
  int enable;
  char *host_name;
  char *client_id;
  char *token;
  char *cert;
  char *key;
  char *ca_cert;
};

struct mgos_config_pins {
  int led;
  int button;
  int button_pull_up;
};

struct mgos_config_mjs {
  int generate_jsc;
};

struct mgos_config {
  struct mgos_config_device device;
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_i2c i2c;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_mqtt1 mqtt1;
  struct mgos_config_shadow shadow;
  struct mgos_config_aws aws;
  struct mgos_config_sntp sntp;
  struct mgos_config_azure azure;
  struct mgos_config_update update;
  struct mgos_config_rpc rpc;
  struct mgos_config_dash dash;
  struct mgos_config_http http;
  struct mgos_config_dns_sd dns_sd;
  struct mgos_config_gcp gcp;
  struct mgos_config_provision provision;
  struct mgos_config_wifi wifi;
  struct mgos_config_spi spi;
  struct mgos_config_watson watson;
  struct mgos_config_pins pins;
  struct mgos_config_mjs mjs;
};


const struct mgos_conf_entry *mgos_config_schema();

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg);
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg);
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg);
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg);
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg);
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg);
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg);
const struct mgos_config_mqtt1 *mgos_config_get_mqtt1(struct mgos_config *cfg);
int         mgos_config_get_mqtt1_enable(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_server(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_client_id(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_user(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_pass(struct mgos_config *cfg);
double      mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg);
double      mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg);
int         mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg);
int         mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg);
const char *mgos_config_get_mqtt1_will_message(struct mgos_config *cfg);
int         mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg);
int         mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg);
const struct mgos_config_shadow *mgos_config_get_shadow(struct mgos_config *cfg);
int         mgos_config_get_shadow_enable(struct mgos_config *cfg);
const char *mgos_config_get_shadow_lib(struct mgos_config *cfg);
int         mgos_config_get_shadow_ota_enable(struct mgos_config *cfg);
int         mgos_config_get_shadow_autocommit(struct mgos_config *cfg);
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg);
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg);
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg);
const struct mgos_config_sntp *mgos_config_get_sntp(struct mgos_config *cfg);
int         mgos_config_get_sntp_enable(struct mgos_config *cfg);
const char *mgos_config_get_sntp_server(struct mgos_config *cfg);
int         mgos_config_get_sntp_retry_min(struct mgos_config *cfg);
int         mgos_config_get_sntp_retry_max(struct mgos_config *cfg);
int         mgos_config_get_sntp_update_interval(struct mgos_config *cfg);
const struct mgos_config_azure *mgos_config_get_azure(struct mgos_config *cfg);
int         mgos_config_get_azure_enable(struct mgos_config *cfg);
const char *mgos_config_get_azure_cs(struct mgos_config *cfg);
int         mgos_config_get_azure_token_ttl(struct mgos_config *cfg);
const char *mgos_config_get_azure_host_name(struct mgos_config *cfg);
const char *mgos_config_get_azure_device_id(struct mgos_config *cfg);
const char *mgos_config_get_azure_cert(struct mgos_config *cfg);
const char *mgos_config_get_azure_key(struct mgos_config *cfg);
int         mgos_config_get_azure_enable_cm(struct mgos_config *cfg);
int         mgos_config_get_azure_enable_dm(struct mgos_config *cfg);
const struct mgos_config_update *mgos_config_get_update(struct mgos_config *cfg);
int         mgos_config_get_update_timeout(struct mgos_config *cfg);
int         mgos_config_get_update_commit_timeout(struct mgos_config *cfg);
const char *mgos_config_get_update_url(struct mgos_config *cfg);
int         mgos_config_get_update_interval(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_client_cert_file(struct mgos_config *cfg);
const char *mgos_config_get_update_ssl_server_name(struct mgos_config *cfg);
int         mgos_config_get_update_enable_post(struct mgos_config *cfg);
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg);
int         mgos_config_get_rpc_enable(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg);
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg);
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg);
const struct mgos_config_rpc_azure *mgos_config_get_rpc_azure(struct mgos_config *cfg);
int         mgos_config_get_rpc_enable_dm(struct mgos_config *cfg);
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(struct mgos_config *cfg);
int         mgos_config_get_rpc_mqtt_enable(struct mgos_config *cfg);
const char *mgos_config_get_rpc_mqtt_pub_topic(struct mgos_config *cfg);
const char *mgos_config_get_rpc_mqtt_sub_topic(struct mgos_config *cfg);
int         mgos_config_get_rpc_mqtt_sub_wc(struct mgos_config *cfg);
int         mgos_config_get_rpc_mqtt_qos(struct mgos_config *cfg);
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg);
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg);
const struct mgos_config_dash *mgos_config_get_dash(struct mgos_config *cfg);
int         mgos_config_get_dash_enable(struct mgos_config *cfg);
const char *mgos_config_get_dash_token(struct mgos_config *cfg);
const char *mgos_config_get_dash_server(struct mgos_config *cfg);
const char *mgos_config_get_dash_ca_file(struct mgos_config *cfg);
int         mgos_config_get_dash_send_logs(struct mgos_config *cfg);
int         mgos_config_get_dash_stats_interval(struct mgos_config *cfg);
int         mgos_config_get_dash_ota_chunk_size(struct mgos_config *cfg);
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg);
int         mgos_config_get_http_enable(struct mgos_config *cfg);
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg);
const char *mgos_config_get_http_document_root(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg);
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg);
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg);
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg);
const struct mgos_config_dns_sd *mgos_config_get_dns_sd(struct mgos_config *cfg);
int         mgos_config_get_dns_sd_enable(struct mgos_config *cfg);
const char *mgos_config_get_dns_sd_host_name(struct mgos_config *cfg);
const char *mgos_config_get_dns_sd_txt(struct mgos_config *cfg);
int         mgos_config_get_dns_sd_ttl(struct mgos_config *cfg);
const struct mgos_config_gcp *mgos_config_get_gcp(struct mgos_config *cfg);
int         mgos_config_get_gcp_enable(struct mgos_config *cfg);
const char *mgos_config_get_gcp_project(struct mgos_config *cfg);
const char *mgos_config_get_gcp_region(struct mgos_config *cfg);
const char *mgos_config_get_gcp_registry(struct mgos_config *cfg);
const char *mgos_config_get_gcp_device(struct mgos_config *cfg);
const char *mgos_config_get_gcp_key(struct mgos_config *cfg);
int         mgos_config_get_gcp_token_ttl(struct mgos_config *cfg);
const struct mgos_config_provision *mgos_config_get_provision(struct mgos_config *cfg);
const struct mgos_config_provision_button *mgos_config_get_provision_button(struct mgos_config *cfg);
int         mgos_config_get_provision_button_pin(struct mgos_config *cfg);
int         mgos_config_get_provision_button_pull(struct mgos_config *cfg);
int         mgos_config_get_provision_button_hold_ms(struct mgos_config *cfg);
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg);
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg);
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg);
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg);
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg);
const struct mgos_config_wifi_sta1 *mgos_config_get_wifi_sta1(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_user(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_key(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg);
const struct mgos_config_wifi_sta2 *mgos_config_get_wifi_sta2(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_user(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_key(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg);
const char *mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg);
int         mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg);
const struct mgos_config_spi *mgos_config_get_spi(struct mgos_config *cfg);
int         mgos_config_get_spi_enable(struct mgos_config *cfg);
int         mgos_config_get_spi_debug(struct mgos_config *cfg);
int         mgos_config_get_spi_miso_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg);
const struct mgos_config_watson *mgos_config_get_watson(struct mgos_config *cfg);
int         mgos_config_get_watson_enable(struct mgos_config *cfg);
const char *mgos_config_get_watson_host_name(struct mgos_config *cfg);
const char *mgos_config_get_watson_client_id(struct mgos_config *cfg);
const char *mgos_config_get_watson_token(struct mgos_config *cfg);
const char *mgos_config_get_watson_cert(struct mgos_config *cfg);
const char *mgos_config_get_watson_key(struct mgos_config *cfg);
const char *mgos_config_get_watson_ca_cert(struct mgos_config *cfg);
const struct mgos_config_pins *mgos_config_get_pins(struct mgos_config *cfg);
int         mgos_config_get_pins_led(struct mgos_config *cfg);
int         mgos_config_get_pins_button(struct mgos_config *cfg);
int         mgos_config_get_pins_button_pull_up(struct mgos_config *cfg);
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg);
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg);

void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_shadow_ota_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_autocommit(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int         val);
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_azure_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_azure_cs(struct mgos_config *cfg, const char *val);
void mgos_config_set_azure_token_ttl(struct mgos_config *cfg, int         val);
void mgos_config_set_azure_host_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_azure_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_azure_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_azure_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_azure_enable_cm(struct mgos_config *cfg, int         val);
void mgos_config_set_azure_enable_dm(struct mgos_config *cfg, int         val);
void mgos_config_set_update_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_update_url(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_enable_dm(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val);
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_token(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_ca_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_stats_interval(struct mgos_config *cfg, int         val);
void mgos_config_set_dash_ota_chunk_size(struct mgos_config *cfg, int         val);
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val);
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char *val);
void mgos_config_set_dns_sd_ttl(struct mgos_config *cfg, int         val);
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int         val);
void mgos_config_set_provision_button_pin(struct mgos_config *cfg, int         val);
void mgos_config_set_provision_button_pull(struct mgos_config *cfg, int         val);
void mgos_config_set_provision_button_hold_ms(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char *val);
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int         val);
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_watson_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_watson_host_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_watson_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_watson_token(struct mgos_config *cfg, const char *val);
void mgos_config_set_watson_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_watson_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_watson_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_pins_led(struct mgos_config *cfg, int         val);
void mgos_config_set_pins_button(struct mgos_config *cfg, int         val);
void mgos_config_set_pins_button_pull_up(struct mgos_config *cfg, int         val);
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema()); }
static inline bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings); }

static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
static inline const struct mgos_config_mqtt1 *mgos_sys_config_get_mqtt1(void) { return mgos_config_get_mqtt1(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt1_enable(void) { return mgos_config_get_mqtt1_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_server(void) { return mgos_config_get_mqtt1_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_client_id(void) { return mgos_config_get_mqtt1_client_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_user(void) { return mgos_config_get_mqtt1_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_pass(void) { return mgos_config_get_mqtt1_pass(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_mqtt1_reconnect_timeout_min(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_mqtt1_reconnect_timeout_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_cert(void) { return mgos_config_get_mqtt1_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_key(void) { return mgos_config_get_mqtt1_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_ca_cert(void) { return mgos_config_get_mqtt1_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_mqtt1_ssl_cipher_suites(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_psk_identity(void) { return mgos_config_get_mqtt1_ssl_psk_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_ssl_psk_key(void) { return mgos_config_get_mqtt1_ssl_psk_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt1_clean_session(void) { return mgos_config_get_mqtt1_clean_session(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt1_keep_alive(void) { return mgos_config_get_mqtt1_keep_alive(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_will_topic(void) { return mgos_config_get_mqtt1_will_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt1_will_message(void) { return mgos_config_get_mqtt1_will_message(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt1_max_qos(void) { return mgos_config_get_mqtt1_max_qos(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_mqtt1_recv_mbuf_limit(&mgos_sys_config); }
static inline const struct mgos_config_shadow *mgos_sys_config_get_shadow(void) { return mgos_config_get_shadow(&mgos_sys_config); }
static inline int         mgos_sys_config_get_shadow_enable(void) { return mgos_config_get_shadow_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_shadow_lib(void) { return mgos_config_get_shadow_lib(&mgos_sys_config); }
static inline int         mgos_sys_config_get_shadow_ota_enable(void) { return mgos_config_get_shadow_ota_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_shadow_autocommit(void) { return mgos_config_get_shadow_autocommit(&mgos_sys_config); }
static inline const struct mgos_config_aws *mgos_sys_config_get_aws(void) { return mgos_config_get_aws(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_aws_thing_name(void) { return mgos_config_get_aws_thing_name(&mgos_sys_config); }
static inline const struct mgos_config_aws_greengrass *mgos_sys_config_get_aws_greengrass(void) { return mgos_config_get_aws_greengrass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_enable(void) { return mgos_config_get_aws_greengrass_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_min(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_max(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_max(&mgos_sys_config); }
static inline const struct mgos_config_sntp *mgos_sys_config_get_sntp(void) { return mgos_config_get_sntp(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_enable(void) { return mgos_config_get_sntp_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sntp_server(void) { return mgos_config_get_sntp_server(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_retry_min(void) { return mgos_config_get_sntp_retry_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_retry_max(void) { return mgos_config_get_sntp_retry_max(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sntp_update_interval(void) { return mgos_config_get_sntp_update_interval(&mgos_sys_config); }
static inline const struct mgos_config_azure *mgos_sys_config_get_azure(void) { return mgos_config_get_azure(&mgos_sys_config); }
static inline int         mgos_sys_config_get_azure_enable(void) { return mgos_config_get_azure_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_azure_cs(void) { return mgos_config_get_azure_cs(&mgos_sys_config); }
static inline int         mgos_sys_config_get_azure_token_ttl(void) { return mgos_config_get_azure_token_ttl(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_azure_host_name(void) { return mgos_config_get_azure_host_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_azure_device_id(void) { return mgos_config_get_azure_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_azure_cert(void) { return mgos_config_get_azure_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_azure_key(void) { return mgos_config_get_azure_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_azure_enable_cm(void) { return mgos_config_get_azure_enable_cm(&mgos_sys_config); }
static inline int         mgos_sys_config_get_azure_enable_dm(void) { return mgos_config_get_azure_enable_dm(&mgos_sys_config); }
static inline const struct mgos_config_update *mgos_sys_config_get_update(void) { return mgos_config_get_update(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_timeout(void) { return mgos_config_get_update_timeout(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_commit_timeout(void) { return mgos_config_get_update_commit_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_url(void) { return mgos_config_get_update_url(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_interval(void) { return mgos_config_get_update_interval(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_ca_file(void) { return mgos_config_get_update_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_client_cert_file(void) { return mgos_config_get_update_ssl_client_cert_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_update_ssl_server_name(void) { return mgos_config_get_update_ssl_server_name(&mgos_sys_config); }
static inline int         mgos_sys_config_get_update_enable_post(void) { return mgos_config_get_update_enable_post(&mgos_sys_config); }
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_ws *mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_ca_file(void) { return mgos_config_get_rpc_ws_ssl_ca_file(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_ws_ssl_client_cert_file(void) { return mgos_config_get_rpc_ws_ssl_client_cert_file(&mgos_sys_config); }
static inline const struct mgos_config_rpc_azure *mgos_sys_config_get_rpc_azure(void) { return mgos_config_get_rpc_azure(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_enable_dm(void) { return mgos_config_get_rpc_enable_dm(&mgos_sys_config); }
static inline const struct mgos_config_rpc_mqtt *mgos_sys_config_get_rpc_mqtt(void) { return mgos_config_get_rpc_mqtt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_mqtt_enable(void) { return mgos_config_get_rpc_mqtt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_mqtt_pub_topic(void) { return mgos_config_get_rpc_mqtt_pub_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_rpc_mqtt_sub_topic(void) { return mgos_config_get_rpc_mqtt_sub_topic(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_mqtt_sub_wc(void) { return mgos_config_get_rpc_mqtt_sub_wc(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_mqtt_qos(void) { return mgos_config_get_rpc_mqtt_qos(&mgos_sys_config); }
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int         mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline const struct mgos_config_dash *mgos_sys_config_get_dash(void) { return mgos_config_get_dash(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_enable(void) { return mgos_config_get_dash_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_token(void) { return mgos_config_get_dash_token(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_server(void) { return mgos_config_get_dash_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dash_ca_file(void) { return mgos_config_get_dash_ca_file(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_send_logs(void) { return mgos_config_get_dash_send_logs(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_stats_interval(void) { return mgos_config_get_dash_stats_interval(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dash_ota_chunk_size(void) { return mgos_config_get_dash_ota_chunk_size(&mgos_sys_config); }
static inline const struct mgos_config_http *mgos_sys_config_get_http(void) { return mgos_config_get_http(&mgos_sys_config); }
static inline int         mgos_sys_config_get_http_enable(void) { return mgos_config_get_http_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_listen_addr(void) { return mgos_config_get_http_listen_addr(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_document_root(void) { return mgos_config_get_http_document_root(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_cert(void) { return mgos_config_get_http_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_key(void) { return mgos_config_get_http_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_ssl_ca_cert(void) { return mgos_config_get_http_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_upload_acl(void) { return mgos_config_get_http_upload_acl(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_hidden_files(void) { return mgos_config_get_http_hidden_files(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_auth_domain(void) { return mgos_config_get_http_auth_domain(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_http_auth_file(void) { return mgos_config_get_http_auth_file(&mgos_sys_config); }
static inline const struct mgos_config_dns_sd *mgos_sys_config_get_dns_sd(void) { return mgos_config_get_dns_sd(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dns_sd_enable(void) { return mgos_config_get_dns_sd_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dns_sd_host_name(void) { return mgos_config_get_dns_sd_host_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_dns_sd_txt(void) { return mgos_config_get_dns_sd_txt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_dns_sd_ttl(void) { return mgos_config_get_dns_sd_ttl(&mgos_sys_config); }
static inline const struct mgos_config_gcp *mgos_sys_config_get_gcp(void) { return mgos_config_get_gcp(&mgos_sys_config); }
static inline int         mgos_sys_config_get_gcp_enable(void) { return mgos_config_get_gcp_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_project(void) { return mgos_config_get_gcp_project(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_region(void) { return mgos_config_get_gcp_region(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_registry(void) { return mgos_config_get_gcp_registry(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_device(void) { return mgos_config_get_gcp_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_gcp_key(void) { return mgos_config_get_gcp_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_gcp_token_ttl(void) { return mgos_config_get_gcp_token_ttl(&mgos_sys_config); }
static inline const struct mgos_config_provision *mgos_sys_config_get_provision(void) { return mgos_config_get_provision(&mgos_sys_config); }
static inline const struct mgos_config_provision_button *mgos_sys_config_get_provision_button(void) { return mgos_config_get_provision_button(&mgos_sys_config); }
static inline int         mgos_sys_config_get_provision_button_pin(void) { return mgos_config_get_provision_button_pin(&mgos_sys_config); }
static inline int         mgos_sys_config_get_provision_button_pull(void) { return mgos_config_get_provision_button_pull(&mgos_sys_config); }
static inline int         mgos_sys_config_get_provision_button_hold_ms(void) { return mgos_config_get_provision_button_hold_ms(&mgos_sys_config); }
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const struct mgos_config_wifi_sta1 *mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
static inline const struct mgos_config_wifi_sta2 *mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
static inline int         mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
static inline const struct mgos_config_spi *mgos_sys_config_get_spi(void) { return mgos_config_get_spi(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_enable(void) { return mgos_config_get_spi_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_debug(void) { return mgos_config_get_spi_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_miso_gpio(void) { return mgos_config_get_spi_miso_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_mosi_gpio(void) { return mgos_config_get_spi_mosi_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_sclk_gpio(void) { return mgos_config_get_spi_sclk_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs0_gpio(void) { return mgos_config_get_spi_cs0_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs1_gpio(void) { return mgos_config_get_spi_cs1_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs2_gpio(void) { return mgos_config_get_spi_cs2_gpio(&mgos_sys_config); }
static inline const struct mgos_config_watson *mgos_sys_config_get_watson(void) { return mgos_config_get_watson(&mgos_sys_config); }
static inline int         mgos_sys_config_get_watson_enable(void) { return mgos_config_get_watson_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_host_name(void) { return mgos_config_get_watson_host_name(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_client_id(void) { return mgos_config_get_watson_client_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_token(void) { return mgos_config_get_watson_token(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_cert(void) { return mgos_config_get_watson_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_key(void) { return mgos_config_get_watson_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_watson_ca_cert(void) { return mgos_config_get_watson_ca_cert(&mgos_sys_config); }
static inline const struct mgos_config_pins *mgos_sys_config_get_pins(void) { return mgos_config_get_pins(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pins_led(void) { return mgos_config_get_pins_led(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pins_button(void) { return mgos_config_get_pins_button(&mgos_sys_config); }
static inline int         mgos_sys_config_get_pins_button_pull_up(void) { return mgos_config_get_pins_button_pull_up(&mgos_sys_config); }
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }

static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_topic(const char *val) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_topic(const char *val) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_enable(int         val) { mgos_config_set_sys_atca_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int         val) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int         val) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_enable(int         val) { mgos_config_set_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_server(const char *val) { mgos_config_set_mqtt_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_client_id(const char *val) { mgos_config_set_mqtt_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_user(const char *val) { mgos_config_set_mqtt_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_pass(const char *val) { mgos_config_set_mqtt_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double      val) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double      val) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char *val) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_key(const char *val) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char *val) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char *val) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char *val) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_clean_session(int         val) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_keep_alive(int         val) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_topic(const char *val) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_message(const char *val) { mgos_config_set_mqtt_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_max_qos(int         val) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int         val) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_enable(int         val) { mgos_config_set_mqtt1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_server(const char *val) { mgos_config_set_mqtt1_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_client_id(const char *val) { mgos_config_set_mqtt1_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_user(const char *val) { mgos_config_set_mqtt1_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_pass(const char *val) { mgos_config_set_mqtt1_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_min(double      val) { mgos_config_set_mqtt1_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_max(double      val) { mgos_config_set_mqtt1_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_cert(const char *val) { mgos_config_set_mqtt1_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_key(const char *val) { mgos_config_set_mqtt1_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_ca_cert(const char *val) { mgos_config_set_mqtt1_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt1_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_psk_identity(const char *val) { mgos_config_set_mqtt1_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_ssl_psk_key(const char *val) { mgos_config_set_mqtt1_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_clean_session(int         val) { mgos_config_set_mqtt1_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_keep_alive(int         val) { mgos_config_set_mqtt1_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_will_topic(const char *val) { mgos_config_set_mqtt1_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_will_message(const char *val) { mgos_config_set_mqtt1_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_max_qos(int         val) { mgos_config_set_mqtt1_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt1_recv_mbuf_limit(int         val) { mgos_config_set_mqtt1_recv_mbuf_limit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_enable(int         val) { mgos_config_set_shadow_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_lib(const char *val) { mgos_config_set_shadow_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_ota_enable(int         val) { mgos_config_set_shadow_ota_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_autocommit(int         val) { mgos_config_set_shadow_autocommit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_thing_name(const char *val) { mgos_config_set_aws_thing_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_enable(int         val) { mgos_config_set_aws_greengrass_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_min(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_max(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_enable(int         val) { mgos_config_set_sntp_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_server(const char *val) { mgos_config_set_sntp_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_retry_min(int         val) { mgos_config_set_sntp_retry_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_retry_max(int         val) { mgos_config_set_sntp_retry_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sntp_update_interval(int         val) { mgos_config_set_sntp_update_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_enable(int         val) { mgos_config_set_azure_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_cs(const char *val) { mgos_config_set_azure_cs(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_token_ttl(int         val) { mgos_config_set_azure_token_ttl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_host_name(const char *val) { mgos_config_set_azure_host_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_device_id(const char *val) { mgos_config_set_azure_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_cert(const char *val) { mgos_config_set_azure_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_key(const char *val) { mgos_config_set_azure_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_enable_cm(int         val) { mgos_config_set_azure_enable_cm(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_azure_enable_dm(int         val) { mgos_config_set_azure_enable_dm(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_timeout(int         val) { mgos_config_set_update_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_commit_timeout(int         val) { mgos_config_set_update_commit_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_url(const char *val) { mgos_config_set_update_url(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_interval(int         val) { mgos_config_set_update_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_ca_file(const char *val) { mgos_config_set_update_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_client_cert_file(const char *val) { mgos_config_set_update_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_ssl_server_name(const char *val) { mgos_config_set_update_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_update_enable_post(int         val) { mgos_config_set_update_enable_post(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable(int         val) { mgos_config_set_rpc_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_frame_size(int         val) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_max_queue_length(int         val) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int         val) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_acl_file(const char *val) { mgos_config_set_rpc_acl_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_domain(const char *val) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_auth_file(const char *val) { mgos_config_set_rpc_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_enable(int         val) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_server_address(const char *val) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int         val) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int         val) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char *val) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_file(const char *val) { mgos_config_set_rpc_ws_ssl_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_ws_ssl_client_cert_file(const char *val) { mgos_config_set_rpc_ws_ssl_client_cert_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_enable_dm(int         val) { mgos_config_set_rpc_enable_dm(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_enable(int         val) { mgos_config_set_rpc_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_pub_topic(const char *val) { mgos_config_set_rpc_mqtt_pub_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_sub_topic(const char *val) { mgos_config_set_rpc_mqtt_sub_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_sub_wc(int         val) { mgos_config_set_rpc_mqtt_sub_wc(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_mqtt_qos(int         val) { mgos_config_set_rpc_mqtt_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_uart_no(int         val) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int         val) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_rpc_uart_fc_type(int         val) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_enable(int         val) { mgos_config_set_dash_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_token(const char *val) { mgos_config_set_dash_token(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_server(const char *val) { mgos_config_set_dash_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_ca_file(const char *val) { mgos_config_set_dash_ca_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_send_logs(int         val) { mgos_config_set_dash_send_logs(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_stats_interval(int         val) { mgos_config_set_dash_stats_interval(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dash_ota_chunk_size(int         val) { mgos_config_set_dash_ota_chunk_size(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_enable(int         val) { mgos_config_set_http_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_listen_addr(const char *val) { mgos_config_set_http_listen_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_document_root(const char *val) { mgos_config_set_http_document_root(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_cert(const char *val) { mgos_config_set_http_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_key(const char *val) { mgos_config_set_http_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_ssl_ca_cert(const char *val) { mgos_config_set_http_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_upload_acl(const char *val) { mgos_config_set_http_upload_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_hidden_files(const char *val) { mgos_config_set_http_hidden_files(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_domain(const char *val) { mgos_config_set_http_auth_domain(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_http_auth_file(const char *val) { mgos_config_set_http_auth_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_enable(int         val) { mgos_config_set_dns_sd_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_host_name(const char *val) { mgos_config_set_dns_sd_host_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_txt(const char *val) { mgos_config_set_dns_sd_txt(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_dns_sd_ttl(int         val) { mgos_config_set_dns_sd_ttl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_enable(int         val) { mgos_config_set_gcp_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_project(const char *val) { mgos_config_set_gcp_project(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_region(const char *val) { mgos_config_set_gcp_region(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_registry(const char *val) { mgos_config_set_gcp_registry(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_device(const char *val) { mgos_config_set_gcp_device(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_key(const char *val) { mgos_config_set_gcp_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_gcp_token_ttl(int         val) { mgos_config_set_gcp_token_ttl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_provision_button_pin(int         val) { mgos_config_set_provision_button_pin(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_provision_button_pull(int         val) { mgos_config_set_provision_button_pull(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_provision_button_hold_ms(int         val) { mgos_config_set_provision_button_hold_ms(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_enable(int         val) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ssid(const char *val) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_pass(const char *val) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hidden(int         val) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_channel(int         val) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_max_connections(int         val) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_ip(const char *val) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_netmask(const char *val) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_gw(const char *val) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char *val) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char *val) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int         val) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_disable_after(int         val) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_hostname(const char *val) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int         val) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_enable(int         val) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ssid(const char *val) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_pass(const char *val) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_user(const char *val) { mgos_config_set_wifi_sta_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char *val) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cert(const char *val) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_key(const char *val) { mgos_config_set_wifi_sta_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char *val) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_ip(const char *val) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_netmask(const char *val) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_gw(const char *val) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char *val) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_enable(int         val) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char *val) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_pass(const char *val) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_user(const char *val) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char *val) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_cert(const char *val) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_key(const char *val) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char *val) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_ip(const char *val) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char *val) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_gw(const char *val) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char *val) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_enable(int         val) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char *val) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_pass(const char *val) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_user(const char *val) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char *val) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_cert(const char *val) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_key(const char *val) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char *val) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_ip(const char *val) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char *val) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_gw(const char *val) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char *val) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char *val) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int         val) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int         val) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_enable(int         val) { mgos_config_set_spi_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_debug(int         val) { mgos_config_set_spi_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_miso_gpio(int         val) { mgos_config_set_spi_miso_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_mosi_gpio(int         val) { mgos_config_set_spi_mosi_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_sclk_gpio(int         val) { mgos_config_set_spi_sclk_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs0_gpio(int         val) { mgos_config_set_spi_cs0_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs1_gpio(int         val) { mgos_config_set_spi_cs1_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs2_gpio(int         val) { mgos_config_set_spi_cs2_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_enable(int         val) { mgos_config_set_watson_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_host_name(const char *val) { mgos_config_set_watson_host_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_client_id(const char *val) { mgos_config_set_watson_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_token(const char *val) { mgos_config_set_watson_token(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_cert(const char *val) { mgos_config_set_watson_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_key(const char *val) { mgos_config_set_watson_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_watson_ca_cert(const char *val) { mgos_config_set_watson_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pins_led(int         val) { mgos_config_set_pins_led(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pins_button(int         val) { mgos_config_set_pins_button(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_pins_button_pull_up(int         val) { mgos_config_set_pins_button_pull_up(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mjs_generate_jsc(int         val) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, val); }


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */
