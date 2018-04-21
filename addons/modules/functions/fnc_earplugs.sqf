#include "\achilles\modules_f_ares\module_header.hpp"

private _unitUnderCursor = [_logic, false] call Ares_fnc_GetUnitUnderCursor;
private _units = [];

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
      allPlayers select {(alive _x) and (side _x == [east,west,independent,civilian] select (_side_index - 1))};
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
} else {
  _units pushBack _unitUnderCursor;
};

if (isNil "_units") exitWith {};
if (_units isEqualTo []) exitWith {};

while {count _units > 0} do
{
  private _unit = _units select 0;
  [_unit] call synixe_main_fnc_earplugs;
  _units = _units - [_unit];
};

#include "\achilles\modules_f_ares\module_footer.hpp"
