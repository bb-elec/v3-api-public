#ifndef _MODULE_H_
#define _MODULE_H_

#include <string>

// Module title
const std::string MODULE_TITLE=      "Configuration Example App";

// Module name
const std::string MODULE_NAME=       "ConfigExample";

// Prefix parameter module
const std::string MODULE_PREFIX=     "MOD_CONFIGEXAMPLE_";

// Configuration file name
const std::string MODULE_SETTINGS=   "/opt/" + MODULE_NAME + "/etc/settings";

// The initialization script
const std::string MODULE_INIT=       "/opt/" + MODULE_NAME + "/etc/init";

#endif
