#include "script_component.hpp"

if (player == curator) then { //Let Zeus select faction
  [] spawn FUNC(factionSelect);
};

if (player isKindOf "B_Soldier_F") then {
  player setVariable ["SZT_ROLE", "Rifleman", true];
};

switch (typeOf player) do {
  case "B_Soldier_SL_F":  {player setVariable ["SZT_ROLE", "Squad Leader"];};
  case "B_Solider_TL_F":  {player setVariable ["SZT_ROLE", "2iC"];};
  case "B_Soldier_F":     {player setVariable ["SZT_ROLE", "Rifleman"];};
};

if (missionNamespace getVariable "SZT_FACTION" != -1) then {
  [player, missionNamespace getVariable "SZT_FACTION"] call FUNC(loadout);
};

player addEventHandler ["Respawn", {
  [] spawn {
    sleep 1;
    [true] call ace_spectator_fnc_setSpectator;
  };
}];

if (player isKindOf "B_Soldier_F") then { //Let Soldiers choose their role
  _action = [
    "RoleSelect",
    "Select Role",
    "",
    {
      player call FUNC(roleSelect);
    },
    {(missionNamespace getVariable "SZT_FACTION") != -1}
  ] call ace_interact_menu_fnc_createAction;
  [setup_flag, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
}
