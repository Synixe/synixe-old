#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

[
  "synixe_zeus_placement",
  "CHECKBOX",
  "Proper Placement",
  "Synixe Zeus Placement",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(properPlacement), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_preview",
  "CHECKBOX",
  "Object Preview",
  "Synixe Zeus Placement",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(objectPreview), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_visibility",
  "CHECKBOX",
  "Visibility Indicator",
  "Synixe Zeus Placement",
  true,
  false,
  {
    params ["_value"];
    _value spawn {
      waitUntil {time > 0 && !(isNull player)};
      player setVariable [QGVAR(visibilityIndicator), _this];
    };
  }
] call CBA_Settings_fnc_init;

[
  "synixe_zeus_name",
  "CHECKBOX",
  "Display Name",
  "Synixe Zeus Player Info",
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
  "Synixe Zeus Player Info",
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
  "Synixe Zeus Player Info",
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
  "Synixe Zeus Player Info",
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
  "Synixe Zeus Player Info",
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
  "Synixe Zeus Player Info",
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
