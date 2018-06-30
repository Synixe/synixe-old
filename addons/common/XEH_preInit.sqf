#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

ADDON = false;

#include "XEH_PREP.hpp"

[
  "synixe_radio_stereo",
  "LIST",
  "Default Radio Stereo",
  "Synixe",
  [[0, 1, 2], ["Both", "Left", "Right"], 1],
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 2 && !(isNull player)};
      if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
        [(call TFAR_fnc_activeSWRadio), _this] call TFAR_fnc_setSwStereo;
      };
      if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
        [["ACRE_PRC343"] call acre_api_fnc_getRadioByType, "LEFT" ] call acre_api_fnc_setRadioSpatial;
      };
    };
  }
] call CBA_Settings_fnc_init;

[
  "Synixe",
  "synixe_screenshot",
  "HUD Free Screenshot",
  {call FUNC(screenshot);},
  "",
  [DIK_F11, [false, false, false]]
] call CBA_fnc_addKeybind;

ADDON = true;
