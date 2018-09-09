#include "script_component.hpp"

params ["_unit"];

[
  //Consider Dead
  [
    [
      format ["dead-%1", _unit],
      "Consider Dead",
      "",
      { _target setVariable [QGVAR(considerDead), true] }, //Statement
      { !(_target getVariable [QGVAR(considerDead), false]) }, //Condition
      {}, //Children
      [_unit]
    ] call ace_interact_menu_fnc_createAction,
    [],
    _unit
  ],
  //Consider Alive
  [
    [
      format ["alive-%1", _unit],
      "Consider Alive",
      "",
      { _target setVariable [QGVAR(considerDead), false] }, //Statement
      { _target getVariable [QGVAR(considerDead), false] }, //Condition
      {}, //Children
      [_unit]
    ] call ace_interact_menu_fnc_createAction,
    [],
    _unit
  ]
]
