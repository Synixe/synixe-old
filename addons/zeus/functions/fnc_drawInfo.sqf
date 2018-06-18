/*
 * Author: Brett
 * Draw info over a unit
 *
 * Arguments:
 * _unit <UNIT>
 * _text <STRING>
 * _color <ARRAY> (optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "Current Player"] call synixe_zeus_fnc_drawInfo
 *
 * Public: No
 */

#include "script_component.hpp"

params ["_unit", "_text", ["_color", [1,1,1,1]]];

if (call synixe_common_fnc_inZeus) then {

  if (_unit getVariable [QGVAR(spectator), false]) then {
    _unit = _unit getVariable [QGVAR(corspe), _unit];
  };

  private _offset = _unit getVariable [QGVAR(offset), -10];
  if (isNil "_text") exitWith {};
  drawIcon3D
  [
    "",//Path to image displayed near text
    _color,
    ASLToAGL getPosASL _unit,
    1,//Width
    _offset,//height from position, below
    0,//angle
    _text,//text to be displayed
    2,//shadow on text, 0=none,1=shadow,2=outline
    0.05,//text size
    "PuristaMedium",//text font
    "center"//align text left, right, or center
  ];
  _offset = _offset + 1.5;
  _unit setVariable [QGVAR(offset), _offset];

};
