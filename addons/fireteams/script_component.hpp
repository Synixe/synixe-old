#define COMPONENT fireteams
#define COMPONENT_BEAUTIFIED Fireteams
#include "\z\synixe\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_FIRETEAMS
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_FIRETEAMS
  #define DEBUG_SETTINGS DEBUG_SETTINGS_FIRETEAMS
#endif

#define RIFLEMAN_RADIO QUOTE(ACRE_PRC343)
#define SQUAD_RADIO QUOTE(ACRE_PRC148)
#define LONGRANGE_RADIO QUOTE(ACRE_PRC117F)

#include "\z\synixe\addons\main\script_macros.hpp"
