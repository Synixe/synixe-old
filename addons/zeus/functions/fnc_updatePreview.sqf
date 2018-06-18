/*
 * Author: Brett
 * Upadtes the object Preview
 *
 * Public: No
 */

#include "script_component.hpp"

private _pos = AGLtoASL screenToWorld getMousePosition;
private _class = call FUNC(getSelectedClass);

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
  private _counter = 0;
  if (player getVariable [QGVAR(visibilityIndicator), false]) then {
    {
      private _color = player getVariable [QGVAR(visibilityColor), [1,1,1,1]];
      GVAR(placementPreview) setObjectTexture [_counter, format ["#(rgb,8,8,3)color(%1,%2,%3,%4)", _color select 0, _color select 1, _color select 2, _color select 3]];
      _counter = _counter + 1;
    } forEach (getObjectTextures GVAR(placementPreview));
  };
} else {
  if !(GVAR(placementPreview) isEqualTo objNull) then {
    deleteVehicle GVAR(placementPreview);
    GVAR(placementPreview) = objNull;
  };
};
