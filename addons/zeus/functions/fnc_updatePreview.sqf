/*
 * Author: Brett
 * Upadtes the object Preview
 *
 * Public: No
 */

#include "script_component.hpp"

private _pos = AGLtoASL screenToWorld getMousePosition;
private _class = call FUNC(getSelectedClass);

private _bb = {
  _bbx = [_this select 0 select 0, _this select 1 select 0];
  _bby = [_this select 0 select 1, _this select 1 select 1];
  _bbz = [_this select 0 select 2, _this select 1 select 2];
  _arr = [];
  0 = {
    _y = _x;
    0 = {
      _z = _x;
      0 = {
          0 = _arr pushBack (GVAR(placementPreview) modelToWorld [_x,_y,_z]);
      } count _bbx;
    } count _bbz;
    reverse _bbz;
  } count _bby;
  _arr pushBack (_arr select 0);
  _arr pushBack (_arr select 1);
  _arr
};

if !(_class isEqualTo "") then {
  private _intersections = lineIntersectsSurfaces [getPosASL curatorCamera, _pos, GVAR(placementPreview)];
  if !(_class isEqualTo (typeOf GVAR(placementPreview))) then {
    deleteVehicle GVAR(placementPreview);
    GVAR(placementPreview) = objNull;
  };
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
  //Set vectorUP to surfaceNormal
  GVAR(placementPreview) setVectorUp surfaceNormal position GVAR(placementPreview);
  private _counter = 0;
  if (player getVariable [QGVAR(visibilityIndicator), false]) then {
    {
      private _color = player getVariable [QGVAR(visibilityColor), [1,1,1,1]];
      GVAR(placementPreview) setObjectTexture [_counter, format ["#(rgb,8,8,3)color(%1,%2,%3,%4)", _color select 0, _color select 1, _color select 2, _color select 3]];
      _counter = _counter + 1;
    } forEach (getObjectTextures GVAR(placementPreview));
  };
  //Draw Bounding Box
  private _bbox = boundingBoxReal GVAR(placementPreview) call _bb;
  for "_i" from 0 to 7 step 2 do {
    drawLine3D [
      _bbox select _i,
      _bbox select (_i + 2),
      player getVariable [QGVAR(visibilityColor), [1,1,1,1]]
    ];
    drawLine3D [
      _bbox select (_i + 2),
      _bbox select (_i + 3),
      player getVariable [QGVAR(visibilityColor), [1,1,1,1]]
    ];
    drawLine3D [
      _bbox select (_i + 3),
      _bbox select (_i + 1),
      player getVariable [QGVAR(visibilityColor), [1,1,1,1]]
    ];
};
} else {
  if !(GVAR(placementPreview) isEqualTo objNull) then {
    deleteVehicle GVAR(placementPreview);
    GVAR(placementPreview) = objNull;
  };
};
