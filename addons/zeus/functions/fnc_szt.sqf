#include "script_component.hpp"

if (player == curator) then { //Let Zeus select faction
  [] spawn FUNC(factionSelect);
};

if (player isKindOf "B_Soldier_F") then {
  player setVariable [QGVAR(role), "Rifleman", true];
};

switch (typeOf player) do {
  case "B_Soldier_SL_F":  {player setVariable [QGVAR(role), "Squad Leader"];};
  case "B_Solider_TL_F":  {player setVariable [QGVAR(role), "2iC"];};
  case "B_Soldier_F":     {player setVariable [QGVAR(role), "Rifleman"];};
};

if (missionNamespace getVariable QGVAR(faction) != -1) then {
  [player, missionNamespace getVariable QGVAR(faction)] call FUNC(loadout);
};

if (player isKindOf "B_Soldier_F") then { //Let Soldiers choose their role
  private _action = [
    "RoleSelect",
    "Select Role",
    "",
    {
      player call FUNC(roleSelect);
    },
    {(missionNamespace getVariable QGVAR(faction)) != -1}
  ] call ace_interact_menu_fnc_createAction;
  [setup_flag, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
};
