#include "script_component.hpp"

{
  //Default
  [_x, "default", 1, "description", "ALPHA"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 2, "description", "BRAVO"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 3, "description", "CHARLIE"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 4, "description", "DELTA"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 5, "description", "ECHO"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 6, "description", "FOXTROT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 7, "description", "COMMAND"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 8, "description", "INTEL"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 9, "description", "AIR TRANSPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 10, "description", "LAND TRANSPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 11, "description", "NAVAL TRANSPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 12, "description", "AIR SUPPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 13, "description", "LAND SUPPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 14, "description", "NAVAL SUPPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 15, "description", "ARTILLERY SUPPORT"] call acre_api_fnc_setPresetChannelField;
  [_x, "default", 16, "description", "MEDICAL"] call acre_api_fnc_setPresetChannelField;

  //Police
  [_x, "default", "police"] call acre_api_fnc_copyPreset;
  [_x, "police", 1, "description", "DISPATCH"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 2, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 3, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 4, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 5, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 6, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 7, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 8, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 9, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 10, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 11, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 12, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 13, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 14, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 15, "description", "--"] call acre_api_fnc_setPresetChannelField;
  [_x, "police", 16, "description", "--"] call acre_api_fnc_setPresetChannelField;
} forEach [SQUAD_RADIO, LONGRANGE_RADIO];

if (isMultiplayer && { hasInterface }) then {
  if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
    [] spawn {
      [{time > 0 && !(isNull player)},
        FUNC(tfar_init)
      ] call CBA_fnc_waitUntilAndExecute;
    };
  } else {
    if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
      [] spawn {
        [{time > 0 && !(isNull player)},
          FUNC(acre_init)
        ] call CBA_fnc_waitUntilAndExecute;
      };
    };
  };
};
