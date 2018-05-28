#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

[
  "synixe_zeus_name",
  "CHECKBOX",
  "Display Name",
  "Synixe Zeus",
  false,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayName), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_role",
  "CHECKBOX",
  "Display Role",
  "Synixe Zeus",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayRole), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_fps",
  "CHECKBOX",
  "Display FPS",
  "Synixe Zeus",
  false,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayFps), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_team",
  "CHECKBOX",
  "Display Team",
  "Synixe Zeus",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayTeam), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_tfar",
  "CHECKBOX",
  "Display TFAR Frequencies",
  "Synixe Zeus",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayTFAR), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_medical",
  "CHECKBOX",
  "Display ACE Medical",
  "Synixe Zeus",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(displayMedical), _this];
    };
  }
] call CBA_Settings_fnc_init;

ADDON = true;
