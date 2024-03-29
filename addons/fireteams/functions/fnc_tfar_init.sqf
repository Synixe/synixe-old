/*
 * Author: Brett
 * Setup the client for Fireteam scenarios
 *
 * Arguments:
 * 0: player <UNIT>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call synixe_fireteams_fnc_init;
 *
 * Public: No
 */

#include "script_component.hpp"

if (isMultiplayer) then {
  disableUserInput true;
  0 spawn {
    sleep 5;
    disableUserInput false;
  };
};

["TFAR_event_OnRadiosReceived", {
  if (player getVariable [QGVAR(setup), false]) exitWith {};
  0 spawn {
    player setVariable [QGVAR(setup), true];
    //Set fireteam variables
    private _position = parseNumber(([[str player, count(toArray(str group player))+1] call BIS_fnc_trimString, " "] call BIS_fnc_splitString) select 0);
    private _parentSquad = (groupId group player) splitString "-" select 0;
    private _team = parseNumber ((groupId group player) splitString "-" select 1);

    if (_parentSquad find " " == -1) then {
      if (_position == 1) then {
        if ((groupId group player) find "-" == -1) then {
          //Squad Leader
          player setVariable [QGVAR(role), "SL", true];
          [QGVAR(squadLeader), [group player]] call CBA_fnc_globalEvent;
        } else {
          //Team Leader
          private _parent = [side player, _parentSquad] call FUNC(squadExists);
          if !(_parent isEqualTo grpNull) then {
            [player] joinSilent _parent;
          };
          player setVariable [QGVAR(role), "TL", true];
          player assignTeam (_team call FUNC(teamColor));
        };
      } else {
        private _parent = [side player, _parentSquad] call FUNC(squadExists);
        if (_parent isEqualTo (group player)) then {
          //Squad Level Member
        } else {
          //Team Member
          if !(_parent isEqualTo grpNull) then {
            [player] joinSilent _parent;
          };
          player assignTeam (_team call FUNC(teamColor));
        };
      };
    };

    player spawn FUNC(tfar);

    player setVariable [QGVAR(group), group player, true];
    player setVariable [QGVAR(ready), true];

    //Update the radio after switching groups
    [{
      if !((player getVariable [QGVAR(group), grpNull]) isEqualTo (group player)) then {
        0 spawn FUNC(tfar);
        player setVariable [QGVAR(group), group player, true];
      };
    }, 2] call CBA_fnc_addPerFrameHandler;

    //Update the radio after switching teams
    ["CBA_teamColorChanged", {
      params ["_unit"];
      if (_unit == player) then {
        0 spawn FUNC(tfar);
      };
    }] call CBA_fnc_addEventHandler;
    disableUserInput false;

    //Join the MEGASQUAD if a Squad Leader JIPs
    [QGVAR(squadLeader), {
      params ["_group"];
      if !(player getVariable [QGVAR(ready), false]) exitWith {};
      if ((groupId _group) == (groupId group player) splitString "-" select 0) then {
        private _color = assignedTeam player;
        [player] joinSilent _group;
        _color spawn {
          sleep 1;
          player assignTeam _this;
        };
      };
    }] call CBA_fnc_addEventHandler;
  };
}] call CBA_fnc_addEventHandlerArgs;
