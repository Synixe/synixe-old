#include "\achilles\modules_f_ares\module_header.hpp"

private _unitUnderCursor = [_logic, false] call Ares_fnc_GetUnitUnderCursor;
private _units = [];

private _faction = 0;
private _role = 0;

//TODO Add Roles

if (isNull _unitUnderCursor) then
{
  private _dialogResult = [
    "Select Players",
    [
      ["Mode",["Zeus", "All", "Selection", "Side", "Players", "Group"]],
      ["", ["..."]],
      ["Side","SIDE"]
    ],
    "Achilles_fnc_RscDisplayAttributes_selectPlayers"
  ] call Ares_fnc_ShowChooseDialog;

  if (_dialogResult isEqualTo []) exitWith {};

  _units = switch (_dialogResult select 0) do
  {
    case 0:
    {
      [player];
    };
    case 1:
    {
      allPlayers select {alive _x};
    };
    case 2:
    {
      private _selection = ["players"] call Achilles_fnc_SelectUnits;
      if (isNil "_selection") exitWith {nil};
      _selection select {isPlayer _x};
    };
    case 3:
    {
      private _side_index = _dialogResult select 2;
      _side = [east,west,independent,civilian] select (_side_index - 1);
      allPlayers select {(alive _x) and (side _x == _side)};
    };
    case 4:
    {
      Ares_var_selectPlayers;
    };
    case 5:
    {
      Ares_var_selectPlayers;
    };
  };
  sleep 1;
  if (isNil "_units") exitWith {};
  if (_units isEqualTo []) exitWith { ["No player in selection!"] call Achilles_fnc_ShowZeusErrorMessage };

  private _dialogResult = [
    "Select Loadout",
    [
      ["Faction",["NATO (Vanilla)","Canadian Woodland","Canadian Arid","Canadian Arctic","USAF Woodland","USAF Desert"]]
      //["Role", ["Squad Leader","2iC","Medic","Autorifleman","Rifleman (AT)","Rifleman (LAT)"]]
    ]
  ] call Ares_fnc_showChooseDialog;

  if (_dialogResult isEqualTo []) exitWith {};

  _faction = _dialogResult select 0;
  //_role = _dialogResult select 1;
} else {
  private _dialogResult = [
    "Select Loadout",
    [
      ["Faction",["NATO (Vanilla)","Canadian Woodland","Canadian Arid","Canadian Arctic","USAF Woodland","USAF Desert"]]
      //["Role", ["Squad Leader","2iC","Medic","Autorifleman","Rifleman (AT)","Rifleman (LAT)"]]
    ]
  ] call Ares_fnc_showChooseDialog;

  if (_dialogResult isEqualTo []) exitWith {};

  _faction = _dialogResult select 0;
  //_role = _dialogResult select 1;
  _units pushBack _unitUnderCursor;
};

if (isNil "_units") exitWith {};
if (_units isEqualTo []) exitWith {};

_count = count _units;

while {count _units > 0} do
{
  private _unit = _units select 0;
  [_unit, _faction, false] call synixe_main_fnc_loadout;
  _units = _units - [_unit];
};

["Changed loadout for %1 players", _count] call Ares_fnc_ShowZeusMessage;

#include "\achilles\modules_f_ares\module_footer.hpp"
