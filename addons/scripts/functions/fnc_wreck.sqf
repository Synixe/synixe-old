/*
 * Author: Brett
 * Turns a vehicle into a wreck with no smoke or fire
 *
 * Arguments:
 * _vehicle (OBJECT)
 * _simulation (BOOLEAN)
 *
 * Return Value:
 * None
 *
 * Public: Yes
 *
 * [_veh] call synixe_scripts_fnc_wreck
 *
 */

//TODO I am not sure what will happen to the occupants of the vehicle yet

params [
  ["_veh"],
  ["_sim", true]
];

_veh setVariable ["ace_cookoff_enable", false, true];
_veh setDamage 1;
_veh setDamage 0;
_veh setDamage 1;
if (_sim == false) then {
  _veh enableSimulation false;
};
