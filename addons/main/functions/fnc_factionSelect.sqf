#include "script_component.hpp"

private _dialogResult = [
  "Select Faction",
  [
    ["Faction",["NATO (Vanilla)","Canadian Woodland","Canadian Arid","Canadian Arctic","USAF Woodland","USAF Desert"]]
  ]
] call Ares_fnc_showChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};
_faction = _dialogResult select 0;

{
  [_x, _faction] call FUNC(loadout);
} forEach allUnits;
