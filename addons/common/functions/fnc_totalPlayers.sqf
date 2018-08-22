/*
 * Author: Brett
 * Gets the number of players slotted
 *
 * Example:
 * call synixe_common_fnc_totalPlayers
 *
 * Public: Yes
 */

private _slotted = 0;
_slotted = _slotted + (playersNumber west);
_slotted = _slotted + (playersNumber east);
_slotted = _slotted + (playersNumber independent);
_slotted = _slotted + (playersNumber civilian);
_slotted = _slotted + (playersNumber sideLogic);

private _ai = 0;

{
  if !(isPlayer _x) then {
    _ai = _ai + 1;
  };
} forEach playableUnits;

_slotted - _ai
