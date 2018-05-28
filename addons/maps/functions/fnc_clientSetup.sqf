#include "script_component.hpp"

[QGVAR(received), {
  params ["_map"];
  _map call FUNC(initMap);
  systemChat (MARKERS(_map));
}] call CBA_fnc_addEventHandler;

["created", {
  params ["_m"];
  if !(missionNamespace getVariable [QGVAR(skipNext), false]) then {
    private _x = _m call FUNC(getMarkerData);
    deleteMarker _m;
    missionNamespace setVariable [QGVAR(skipNext), true];
    createMarkerLocal [_m, _x select 1];
    [_x] call FUNC(setMarkerData);
    [_x] call FUNC(createMarker);
  };
  missionNamespace setVariable [QGVAR(skipNext), false];
}] call CBA_fnc_addMarkerEventHandler;

player addEventHandler ["InventoryOpened", {
  player setVariable [QGVAR(oldMap), (assignedItems player) select 0];
}];

player addEventHandler ["InventoryClosed", {
  private _map = (assignedItems player) select 0;
	if (player getVariable [QGVAR(oldMap), ""] != _map) then {
    {
      deleteMarker _x;
    } forEach allMapMarkers;
    {
      missionNamespace setVariable [QGVAR(skipNext), true];
      createMarkerLocal [_x select 0, _x select 1];
      [_x] call FUNC(setMarkerData);
    } forEach (missionNamespace getVariable [MARKERS(_map), []]);
  };
}];

call FUNC(request);
