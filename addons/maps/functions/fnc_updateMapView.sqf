/*
 * Author: Brett
 * Update the map to show markers from the current map
 *
 * Public: No
 */

#include "script_component.hpp"

private _map = ace_player call FUNC(getMap);

{
  missionNamespace setVariable [QGVAR(skipNextDelete), true];
  deleteMarker _x;
} forEach allMapMarkers;
{
  missionNamespace setVariable [QGVAR(skipNextCreate), true];
  createMarkerLocal [_x select 0, _x select 1];
  [_x] call FUNC(setMarkerData);
} forEach (missionNamespace getVariable [MARKERS(_map), []]);
