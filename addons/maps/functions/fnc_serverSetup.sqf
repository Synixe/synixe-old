#include "script_component.hpp"

private _markers = [];
{
  _markers pushBack [
    _x,
    markerPos _x,
    markerDir _x,
    markerAlpha _x,
    markerBrush _x,
    markerColor _x,
    markerShape _x,
    markerSize _x,
    markerText _x,
    markerType _x
  ];
  deleteMarker _x;
} forEach allMapMarkers;
missionNamespace setVariable [QGVAR(briefingMarkers), _markers, true];
