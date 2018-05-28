/*
 * Author: Brett
 * Add a marker to a map on the server
 *
 * Public: No
 */

#include "script_component.hpp"

params ["_markerData"];

[0, {
  params ["_markerData", "_map"];
  private _markers = missionNamespace getVariable [MARKERS(_map), []];
  _markers pushBack _markerData;
  missionNamespace setVariable [MARKERS(_map), _markers, true];
}, [_markerData, (assignedItems player) select 0]] call CBA_fnc_globalExecute;
