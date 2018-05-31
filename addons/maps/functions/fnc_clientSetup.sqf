#include "script_component.hpp"

[QGVAR(received), {
  params ["_map"];
  _map call FUNC(initMap);
}] call CBA_fnc_addEventHandler;

["created", {
  params ["_m"];
  if (ace_player call FUNC(hasUniqueMap)) then {
    if !(missionNamespace getVariable [QGVAR(skipNextCreate), false]) then {
      private _x = _m call FUNC(getMarkerData);
      deleteMarker _m;
      missionNamespace setVariable [QGVAR(skipNextCreate), true];
      createMarkerLocal [_m, _x select 1];
      [_x] call FUNC(setMarkerData);
      [_x] call FUNC(createMarker);
    };
    missionNamespace setVariable [QGVAR(skipNextCreate), false];
  };
}] call CBA_fnc_addMarkerEventHandler;

["deleted", {
  params ["_m"];
  if !(ace_player getVariable [QGVAR(isPeeking), false]) then {
    if (ace_player call FUNC(hasUniqueMap)) then {
      if !(missionNamespace getVariable [QGVAR(skipNextDelete), false]) then {
        systemChat format ["Marker Deleted: %1", _m];
        _m call FUNC(deleteMarker);
      };
      missionNamespace setVariable [QGVAR(skipNextDelete), false];
    };
  };
}] call CBA_fnc_addMarkerEventHandler;

[QGVAR(mapUpdated), {
  params ["_map"];
  if (_map isEqualTo (ace_player call FUNC(getMap))) then {
    call FUNC(updateMapView);
  };
}] call CBA_fnc_AddEventHandler;

addMissionEventHandler ["Map", {
	params ["_open", "_forced"];
  if (ace_player call FUNC(hasUniqueMap)) then {
    if (_open) then {
      call FUNC(updateMapView);
    };
  };
}];

call FUNC(request);
