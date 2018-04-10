#include "script_component.hpp"

[] spawn {
  private _dialogResult = [
    "Select Faction",
    [
      //["Faction",["NATO (Vanilla)","Canadian Woodland","Canadian Arid","Canadian Arctic","USAF Woodland","USAF Desert"]]
      ["Faction", ["NATO (Vanilla)", "Police", "Canada (Woodland)", "Canada (Arid)", "USAF Woodland"]]
    ]
  ] call Ares_fnc_showChooseDialog;

  if (_dialogResult isEqualTo []) exitWith {};
  _faction = _dialogResult select 0;

  if (missionName == "SZTv2") then {
    missionNamespace setVariable ["SZT_FACTION", _faction, true];
    {
      [_x, _faction] call FUNC(loadout);
    } forEach allUnits;
  };
};
