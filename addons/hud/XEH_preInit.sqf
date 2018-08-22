#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

[
  QGVAR(SquadRadarSize),
  "LIST",
  "Squad Radar Size",
  "Synixe HUD",
  [[4, 6, 8], ["Small", "Medium", "Large"], 1],
  nil,
  {
    params ["_value"];
    GVAR(radarSize) = _value;
    _value call FUNC(setRadarSize);
  }
] call CBA_Settings_fnc_init;

[
  QGVAR(SquadRadarBackground),
  "LIST",
  "Squad Radar Background",
  "Synixe HUD",
  [["Clear", "Semi", "Solid"], ["Transparent", "Semi-Transparent", "Solid"], 1],
  nil,
  {
    params ["_value"];
    GVAR(radarBackground) = _value;
  }
] call CBA_Settings_fnc_init;

[
  QGVAR(SquadRadarIconSize),
  "LIST",
  "Squad Radar Icon Size",
  "Synixe HUD",
  [[0.5, 0.6, 0.7, 0.8], ["Small", "Regular", "Large", "Huge"], 1],
  nil,
  {
    params ["_value"];
    GVAR(radarIconSize) = _value;
  }
] call CBA_Settings_fnc_init;

ADDON = true;
