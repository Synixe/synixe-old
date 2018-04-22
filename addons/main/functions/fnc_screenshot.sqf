#include "script_component.hpp"

0 spawn {
  private _before = [] call ace_common_fnc_showHud;
  private _stui = STHud_UIMode;
  ["hideHud", [false, false, false, false, false, false, false, false]] call ace_common_fnc_showHud;
  STHud_UIMode = 0;

  sleep 0.1;

  "synixe" callExtension "screenshot";

  sleep 0.5;

  STHud_UIMode = _stui;
  ["hideHud", _before] call ace_common_fnc_showHud;
};
