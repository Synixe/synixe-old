#include "script_component.hpp"

[QGVAR(received), {
  params ["_map"];
  ace_player unlinkItem "ItemMap";
  ace_player linkItem _map;
}] call CBA_fnc_addEventHandler;

["deleted", {
  params ["_m"];
  if !(ace_player getVariable [QGVAR(isPeeking), false]) then {
    if (ace_player call FUNC(hasUniqueMap)) then {
      _m call FUNC(deleteMarker);
    };
  } else {
    call FUNC(updateMapView);
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
  if (_open) then {
    if (ace_player call FUNC(hasUniqueMap)) then {
      call FUNC(updateMapView);
    } else {
      [{openMap false;}] call CBA_fnc_execNextFrame;
    };
  };
}];

call FUNC(request);