/* Generated file - do not edit. */

#include <stddef.h>
#include "mgos_ro_vars.h"

const struct mgos_conf_entry mgos_ro_vars_schema_[7] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 6},
  {.type = CONF_TYPE_STRING, .key = "mac_address", .offset = offsetof(struct mgos_ro_vars, mac_address)},
  {.type = CONF_TYPE_STRING, .key = "arch", .offset = offsetof(struct mgos_ro_vars, arch)},
  {.type = CONF_TYPE_STRING, .key = "app", .offset = offsetof(struct mgos_ro_vars, app)},
  {.type = CONF_TYPE_STRING, .key = "fw_version", .offset = offsetof(struct mgos_ro_vars, fw_version)},
  {.type = CONF_TYPE_STRING, .key = "fw_timestamp", .offset = offsetof(struct mgos_ro_vars, fw_timestamp)},
  {.type = CONF_TYPE_STRING, .key = "fw_id", .offset = offsetof(struct mgos_ro_vars, fw_id)},
};

const struct mgos_conf_entry *mgos_ro_vars_schema() {
  return mgos_ro_vars_schema_;
}

/* Global instance */
struct mgos_ro_vars mgos_sys_ro_vars;

/* Getters {{{ */
const char *mgos_ro_vars_get_mac_address(struct mgos_ro_vars *cfg) {
  return cfg->mac_address;
}
const char *mgos_ro_vars_get_arch(struct mgos_ro_vars *cfg) {
  return cfg->arch;
}
const char *mgos_ro_vars_get_app(struct mgos_ro_vars *cfg) {
  return cfg->app;
}
const char *mgos_ro_vars_get_fw_version(struct mgos_ro_vars *cfg) {
  return cfg->fw_version;
}
const char *mgos_ro_vars_get_fw_timestamp(struct mgos_ro_vars *cfg) {
  return cfg->fw_timestamp;
}
const char *mgos_ro_vars_get_fw_id(struct mgos_ro_vars *cfg) {
  return cfg->fw_id;
}
/* }}} */

/* Setters {{{ */
void mgos_ro_vars_set_mac_address(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mac_address, val);
}
void mgos_ro_vars_set_arch(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->arch, val);
}
void mgos_ro_vars_set_app(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->app, val);
}
void mgos_ro_vars_set_fw_version(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->fw_version, val);
}
void mgos_ro_vars_set_fw_timestamp(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->fw_timestamp, val);
}
void mgos_ro_vars_set_fw_id(struct mgos_ro_vars *cfg, const char *val) {
  mgos_conf_set_str(&cfg->fw_id, val);
}
/* }}} */
