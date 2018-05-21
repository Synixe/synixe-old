/*
 * Author: Brett
 * Get the members of a fireteam
 *
 * Arguments:
 * 0: _squad <GROUP>
 * 1: _team <NUMBER>
 *
 * Return Value:
 * Members [<UNIT>]
 *
 * Example:
 * [group player, 1] call synixe_fireteams_fnc_teamMembers
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [
  ["_squad", grpNull],
  ["_team", 0]
];

private _members = [];

{
  if (_x call FUNC(team) == _team) then {
    _members pushBack _x;
  }
} forEach units _squad;

_members;
