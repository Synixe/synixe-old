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
        waitUntil {time > 10 && !(isNull player)};
        [(call TFAR_fnc_activeSWRadio), _this] call TFAR_fnc_setSwStereo;
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
