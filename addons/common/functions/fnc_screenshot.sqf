#include "script_component.hpp"

0 spawn {
  private _before = [] call ace_common_fnc_showHud;
  ["hideHud", [false, false, false, false, false, false, false, false]] call ace_common_fnc_showHud;
  private _showRadar = EGVAR(hud,showRadar);
  EGVAR(hud,showRadar) = false;

  sleep 0.1;

  "synixe" callExtension "screenshot";

  sleep 0.5;

  EGVAR(hud,showRadar) = _showRadar;
  ["hideHud", _before] call ace_common_fnc_showHud;
};
