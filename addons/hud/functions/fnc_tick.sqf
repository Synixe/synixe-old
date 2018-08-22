#include "script_component.hpp"

params ["_script"];
private _display = ctrlParent _script;

private _control = _display getVariable QGVAR(radar);
private _markers = _control getVariable QGVAR(radarMarkers);

private _unit = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
private _radius = 40;
private _nearUnits = nearestObjects [_unit, [], _radius] select {_unit knowsAbout _x >= 4};

// show or hide cardinal directions if unit owns compass
if ("ItemCompass" in assignedItems _unit) then {
  _control ctrlSetText "\z\synixe\addons\hud\images\RadarCompass" + GVAR(radarBackground) + "_ca.paa";

  private _view = AGLToASL positionCameraToWorld [0, 0, 0] vectorFromTo AGLToASL positionCameraToWorld [0, 0, 1];
  private _viewHorizontal = vectorNormalized (_view vectorCrossProduct [0, 0, 1]);

  private _dir = acos (_viewHorizontal select 0);

  if (_viewHorizontal select 1 > 0) then {
    _dir = 360 - _dir;
  };

  _control ctrlSetAngle [-_dir, 0.5, 0.5];
} else {
  _control ctrlSetText "\z\synixe\addons\hud\images\Radar" + GVAR(radarBackground) + "_ca.paa";
};

// update positions of squad members
ctrlPosition _control params ["_left", "_top", "_width", "_height"];
private _center = [_left + _width / 2, _top + _height / 2];

private _relDir = getDir _unit;

{
  private _target = _nearUnits param [_forEachIndex, objNull];
  if (isNull _target || {side _target != side _unit}) then {
    _x ctrlShow false;
  } else {
    //Is the unit visible
    if (count lineIntersectsSurfaces [eyePos _unit, eyePos _target, _unit, _target] == 0) then {
      private _dir = _unit getRelDir _target;
      private _dist = (_unit distance2D _target) / (_radius * 2);

      private _icon = getText(configFile >> "CfgVehicles" >> typeOf vehicle _target >> "icon");
      if ((toLower _icon) find "\a3\" == -1) then {
        _x ctrlSetText ("\a3\ui_f\data\map\vehicleicons\" + _icon + "_ca.paa");
      } else {
        _x ctrlSetText (_icon);
      };

      _x ctrlSetAngle [getDir _target - _relDir, 0.5, 0.5];
      _x ctrlSetScale GVAR(radarIconSize);
      if (group _unit == group _target) then {
        _x ctrlSetTextColor (((assignedTeam _target) call EFUNC(fireteams,teamNumber)) call EFUNC(fireteams,teamColorValues));
      } else {
        _x ctrlSetTextColor [1, 0.5, 0, 1];
      };
      _x ctrlSetPosition [
        (_center select 0) +  _width * (sin _dir * _dist) -  _width / (8 / GVAR(radarIconSize)),
        (_center select 1) - _height * (cos _dir * _dist) - _height / (8 / GVAR(radarIconSize)),
        _width / 4,
        _height / 4
      ];
      _x ctrlCommit 0;
      _x ctrlShow true;
    } else {
      _x ctrlShow false;
    }
  };
} forEach _markers;
