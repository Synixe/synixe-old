/*
 * Author: Brett
 * Adds a visibility indicator
 *
 * Public: No
 */

#include "script_component.hpp"

if (call EFUNC(common,inZeusScreenshot)) exitWith {};

private _pos = AGLtoASL screenToWorld getMousePosition;

private _intersections = lineIntersectsSurfaces [getPosASL curatorCamera, _pos];
if((count _intersections) != 0) then {
  _pos = ((_intersections select 0) select 0);
};

private _posHigh = [_pos select 0, _pos select 1, (_pos select 2) + 1];
private _players = 0;
private _highest = 0;
{
  if (side _x != sideLogic) then {
    private _dir = (_x getRelDir _posHigh) + 90;
    if (_dir >= 360) then {
      _dir = _dir - 360;
    };
    if (_dir < 180) then {
      if (_players == 0 && {count lineIntersectsSurfaces [eyePos _x, _pos, _x, GVAR(placementPreview)] == 0 || count lineIntersectsSurfaces [eyePos _x, _posHigh, _x, GVAR(placementPreview)] == 0}) then {
        _players = _players + 1;
        private _visibility = [objNull, "VIEW"] checkVisibility [eyePos _x, _posHigh];
        drawLine3D [ASLToAGL eyePos _x, ASLToAGL _pos, [1, 0, 0, _visibility]];
        if (_visibility > _highest) then {
          _highest = _visibility;
        };
      };
    };
  };
} forEach allPlayers;

player setVariable [QGVAR(visibilityColor), [0,1,0,1]];
if !(_players == 0) then {
  player setVariable [QGVAR(visibilityColor), [1,0,0, _highest + 0.2]];
  drawIcon3D
  [
    "",//Path to image displayed near text
    player getVariable [QGVAR(visibilityColor), [0,1,0,1]],//color of the text using RGBA
    ASLToAGL _pos,//position of the text _x referring to the player in 'allPlayers'
    1,//Width
    3,//height from position, below
    0,//angle
    "VISIBLE",//text to be displayed
    2,//shadow on text, 0=none,1=shadow,2=outline
    0.04,//text size
    "PuristaMedium",//text font
    "center"//align text left, right, or center
  ];
};
