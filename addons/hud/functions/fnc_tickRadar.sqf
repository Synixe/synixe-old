#include "script_component.hpp"

params ["_script"];
private _display = ctrlParent _script;

private _control = _display getVariable QGVAR(radar);
private _markers = _control getVariable QGVAR(radarMarkers);

if (!GVAR(showRadar) || { call EFUNC(common,inZeus) } ) then {
  _control ctrlShow false;
  {
    _x ctrlShow false;
  } forEach _markers;
} else {
  _control ctrlShow true;

  private _radius = 40;
  private _nearUnits = nearestObjects [ace_player, [], _radius];// select {ace_player knowsAbout _x >= 4};

  // show or hide cardinal directions if unit owns compass
  private _view = AGLToASL positionCameraToWorld [0, 0, 0] vectorFromTo AGLToASL positionCameraToWorld [0, 0, 1];
  private _viewHorizontal = vectorNormalized (_view vectorCrossProduct [0, 0, 1]);
  private _eyeDir = acos (_viewHorizontal select 0);
  if (_viewHorizontal select 1 > 0) then {
    _eyeDir = 360 - _eyeDir;
  };
  if ("ItemCompass" in assignedItems ace_player) then {
    _control ctrlSetText "\z\synixe\addons\hud\images\RadarCompass" + GVAR(radarBackground) + "_ca.paa";
    _control ctrlSetAngle [-_eyeDir, 0.5, 0.5];
  } else {
    _control ctrlSetText "\z\synixe\addons\hud\images\Radar" + GVAR(radarBackground) + "_ca.paa";
  };

  // update positions of squad members
  ctrlPosition _control params ["_left", "_top", "_width", "_height"];
  private _center = [_left + _width / 2, _top + _height / 2];

  {
    private _target = _nearUnits param [_forEachIndex, objNull];
    if (isNull _target) then {
      _x ctrlShow false;
    } else {
      if (_target getVariable [QGVAR(tracking), false] || {side _target == side ace_player}) then {
        //Is the unit visible
        _target setVariable [QGVAR(tracking), true];
        if (count lineIntersectsSurfaces [eyePos ace_player, eyePos _target, ace_player, _target] == 0) then {
          private _dir = ace_player getRelDir _target;
          private _dist = (ace_player distance2D _target) / (_radius * 2);

          _x ctrlSetText ((vehicle _target) call FUNC(getIcon));

          _x ctrlSetAngle [getDir _target - _eyeDir, 0.5, 0.5];
          _x ctrlSetScale GVAR(radarIconSize);
          if (group ace_player isEqualTo group _target) then {
            if (_target getVariable [QGVAR(considerDead), false]) then {
              _x ctrlSetTextColor [0, 0, 0, 1];
            } else {
              _x ctrlSetTextColor (((assignedTeam _target) call EFUNC(fireteams,teamNumber)) call EFUNC(fireteams,teamColorValues));
            }
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
        };
      } else {
        _x ctrlShow false;
      };
    };
  } forEach _markers;
};
