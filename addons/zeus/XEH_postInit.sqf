#include "script_component.hpp"

if (missionName == "SZTv2") then {
  if (isServer) then {
    missionNamespace setVariable [QGVAR(faction), -1, true];
  };
  if (hasInterface) then {
    0 spawn FUNC(szt);
  }
};

if (hasInterface) then {
  if (isMultiplayer) then {
    [{
      player setVariable [QGVAR(fps), floor diag_fps, true];
      player setVariable [QGVAR(psw), call TFAR_fnc_currentSwFrequency, true];
      player setVariable [QGVAR(asw), [(call TFAR_fnc_activeSwRadio), ((call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_getChannelFrequency, true];
      player setVariable [QGVAR(spectator), player getVariable ["ace_spectator_isSet",false], true];
    }, 1] call CBA_fnc_addPerFrameHandler;

    addMissionEventHandler ["Draw3D", {
  		{
  			private _distance = curatorCamera distance _x;
        if (_distance < 15 && {[objNull, "VIEW"] checkVisibility [eyePos curatorCamera , aimPos _x] > 0.25}) then {
          private _drawInfo = {
            params ["_color","_text", "_height"];
            drawIcon3D
  					[
  						"",//Path to image displayed near text
  						_color,//color of the text using RGBA
  						ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
  						1,//Width
  						_height,//height from position, below
  						0,//angle
  						_text,//text to be displayed
  						2,//shadow on text, 0=none,1=shadow,2=outline
  						0.05,//text size
  						"PuristaMedium",//text font
  						"center"//align text left, right, or center
  					];
          };
          [[1,1,1,1], format ["FPS: %1", str (_x getVariable [QGVAR(fps), 0])], -10] call _drawInfo;
          if (_x getVariable QGVAR(spectator)) then {
            [[1,1,1,1], "Spectating", -8.5] call _drawInfo;
          } else {
            [((assignedTeam _x) call synixe_fireteams_fnc_teamNumber) call synixe_fireteams_fnc_teamColorValues, assignedTeam _x, -8.5] call _drawInfo;
            private _asw = _x getVariable [QGVAR(asw), ""];
            if (_asw isEqualTo "") then {
              [[1,1,1,1], _x getVariable [QGVAR(psw), "No Radio"], -7] call _drawInfo;
            } else {
              [[1,1,1,1], format ["%1 (%2)", _x getVariable [QGVAR(psw), "NA"], _asw], -7] call _drawInfo;
            };
            if (_x getVariable ["ACE_isUnconscious", false]) then {
              [[1,0.5,0.5,1], "Unconscious", -5.5] call _drawInfo;
            } else {
              if (_x getVariable ["ace_medical_isBleeding", false]) then {
                [[1,0.5,0.5,1], "Injured", -5.5] call _drawInfo;
              } else {
                if (_x getVariable ["ace_medical_hasLostBlood", 0] > 0) then {
                  [[1,0.5,0.5,1], format ["Blood Loss: %1", _x getVariable ["ace_medical_hasLostBlood", 0]] , -5.5] call _drawInfo;
                } else {
                  if (_x getVariable["ace_medical_hasPain", false]) then {
                    [[1,0.5,0.5,1], "In Pain", -5.5] call _drawInfo;
                  } else {
                    [[1,1,1,1], "Healthy", -5.5] call _drawInfo;
                  };
                };
              };
            };
          };
				};
  		} forEach allPlayers;
  	}];
  };
};
