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
  if (_players == 0 && {count lineIntersectsSurfaces [eyePos _x, _pos, _x, GVAR(placementPreview)] == 0 || count lineIntersectsSurfaces [eyePos _x, _posHigh, _x, GVAR(placementPreview)] == 0}) then {
    _players = _players + 1;
    private _visibility = [objNull, "VIEW"] checkVisibility [eyePos _x, _posHigh];
    //If I can find a way to detect the hidden zeus interface, I will bring in the 3D line
    //drawLine3D [ASLToAGL eyePos _x, ASLToAGL _pos, [1,0,0,_visibility]];
    if (_visibility > _highest) then {
      _highest = _visibility;
    }
  }
} forEach allPlayers;

private _color = [0,1,0,1];
if !(_players == 0) then {
  _color = [1,0,0, _highest + 0.2];
  drawIcon3D
  [
    "",//Path to image displayed near text
    _color,//color of the text using RGBA
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

private _tree = (findDisplay 312) displayCtrl 270;
private _class = _tree tvData (tvCurSel _tree);
if !(_class isEqualTo "") then {
  private _intersections = lineIntersectsSurfaces [getPosASL curatorCamera, _pos, GVAR(placementPreview)];
  if (GVAR(placementPreview) isEqualTo objNull) then {
    GVAR(placementPreview) = _class createVehicleLocal (ASLtoAGL _pos);
    GVAR(placementPreview) enableSimulationGlobal false;
    GVAR(placementPreview) disableCollisionWith player;
    GVAR(placementPreview) allowDamage false;
  };
  if((count _intersections) != 0) then {
    private _placePos = ((_intersections select 0) select 0);
    GVAR(placementPreview) setPosASL [_placePos select 0, _placePos select 1, (_placePos select 2) + 0.2];
  } else {
    GVAR(placementPreview) setPosASL [_pos select 0, _pos select 1, (_pos select 2) + 0.2];
  };
  private _counter = 0;
  {
    GVAR(placementPreview) setObjectTexture [_counter, format ["#(rgb,8,8,3)color(%1,%2,%3,%4)", _color select 0, _color select 1, _color select 2, _color select 3]];
    _counter = _counter + 1;
  } forEach (getObjectTextures GVAR(placementPreview));
} else {
  if !(GVAR(placementPreview) isEqualTo objNull) then {
    deleteVehicle GVAR(placementPreview);
    GVAR(placementPreview) = objNull;
  }
};
