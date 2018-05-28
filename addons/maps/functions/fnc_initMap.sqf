/*
 * Author: Brett
 * Setup a unique map
 *
 * Arguments:
 * 0: Map class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * _map call synixe_maps_fnc_initMap
 *
 * Public: No
 */

#include "script_component.hpp"

params ["_map"];

player unlinkItem "ItemMap";
player linkItem _map;

{
  [_x] call FUNC(setMarkerData);
} forEach (missionNamespace getVariable [QGVAR(briefingMarkers), []]);
