/*
 * Author: Brett
 * Turns a vehicle into a wreck with no smoke or fire
 *
 * Arguments:
 * _vehicle (OBJECT)
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
  ["_veh", objNull]
];

_veh spawn {
  _this setVariable ["ace_cookoff_enable", false, true];
  sleep 0.5;
  _this setDamage 1;
  _this setDamage 0;
  sleep 0.5;
  _this setDamage 1;
}
