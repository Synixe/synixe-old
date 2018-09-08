/*
 * Author: Brett
 * Get the members of a fireteam
 *
 * Arguments:
 * 0: _squad <GROUP>
 * 1: _team <STRING>
 *
 * Return Value:
 * Members [<UNIT>]
 *
 * Example:
 * [group player, "MAIN"] call synixe_fireteams_fnc_teamMembers
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [
  ["_squad", grpNull],
  ["_team", "MAIN"]
];

private _members = [];

{
  if (assignedTeam _x == _team) then {
    _members pushBack _x;
  }
} forEach units _squad;

_members;
