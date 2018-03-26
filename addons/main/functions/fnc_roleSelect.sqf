#include "script_component.hpp"

[] spawn {

  _dialogResult = nil;
  _roles = [];

  switch (missionNamespace getVariable "SZT_FACTION") do {
    case 0: //NATO (Vanilla)
    {
      _roles = ["Rifleman","Rifleman (AT)","Rifleman (LAT)","Autorifleman","Medic"];
    };
    case 1: //Police
    {
      _roles = ["Police Officer","Armed Officer","Police Pilot","SWAT"];
    };
  };

  _dialogResult = [
    "Select Role",
    [
      ["Role", _roles]
    ]
  ] call Ares_fnc_showChooseDialog;

  if (_dialogResult isEqualTo []) exitWith {};
  _role = _roles select (_dialogResult select 0);

  player setVariable ["SZT_ROLE", _role];

  [player, missionNamespace getVariable "SZT_FACTION"] call FUNC(loadout);

  sleep 1;

  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};
