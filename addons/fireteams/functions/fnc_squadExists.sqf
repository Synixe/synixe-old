/*
 * Author: Brett
 * Returns true if a squad with the provided name exists
 *
 * Arguments:
 * 0: _side <SIDE>
 * 1: _group <STRING>
 *
 * Return Value:
 * exists <BOOLEAN>
 *
 * Example:
 * [west, "Alpha"] call synixe_fireteams_fnc_squadExists
 *
 * Public: Yes
 */

params [
  ["_side", west],
  ["_group", ""]
];

private _ret_group = grpNull;

{
  if (toLower (groupId _x) == _group) exitWith { _ret_group = _x; };
} forEach allGroups select { side _x isEqualTo _side};

_ret_group
