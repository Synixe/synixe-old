#define COMPONENT weather
#define COMPONENT_BEAUTIFIED Weather
#include "\z\synixe\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WEATHER
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WEATHER
  #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\z\synixe\addons\main\script_macros.hpp"
