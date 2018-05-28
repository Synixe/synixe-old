/*
 * Author: Brett
 * Adds a visibility indicator
 *
 * Public: No
 */

#include "script_component.hpp"

private _pos = AGLtoASL screenToWorld getMousePosition;
private _posHigh = [_pos select 0, _pos select 1, (_pos select 2) + 1];
private _players = 0;
private _highest = 0;
{
  if (_players == 0 && {count lineIntersectsSurfaces [eyePos _x, _pos, _x] == 0 || count lineIntersectsSurfaces [eyePos _x, _posHigh, _x] == 0}) then {
    _players = _players + 1;
    private _visibility = [objNull, "VIEW"] checkVisibility [eyePos _x, _posHigh];
    //If I can find a way to detect the hidden zeus interface, I will bring in the 3D line
    //drawLine3D [ASLToAGL eyePos _x, ASLToAGL _pos, [1,0,0,_visibility]];
    if (_visibility > _highest) then {
      _highest = _visibility;
    }
  }
} forEach allPlayers;

if !(_players == 0) then {
  drawIcon3D
  [
    "",//Path to image displayed near text
    [1,0,0, _highest + 0.2],//color of the text using RGBA
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
