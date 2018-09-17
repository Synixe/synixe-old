#include "script_component.hpp"

private _firstrun = profileNamespace getVariable [QGVAR(firstSetup), true];

if (_firstrun) then {

  //Bind Babel cycle to Shift + B
  ["acre2$babelcyclekey", [[48,[true,false,false]]]] call EFUNC(common,setkey);

  //Unbind Default PPT Key
  ["acre2$defaultpttkey", []] call EFUNC(common,setkey);

  //Bind first radio to Caps Lock and Shift + Caps Lock
  ["acre2$altpttkey1", [[58,[false,false,false]],[58,[true,false,false]]]] call EFUNC(common,setkey);

  //Bind second radio to Control + Caps Lock
  ["acre2$allpttkey2", [[58,[false,true,false]]]] call EFUNC(common,setkey);

  //Bind third radio to Alt + Caps Lock
  ["acre2$allpttkey3", [[58,[false,false,true]]]] call EFUNC(common,setkey);

  profileNamespace setVariable [QGVAR(firstSetup), false];
  saveProfileNamespace;

  0 spawn {
    sleep 10;
    systemChat "The recommended ACRE keybinds have been applied for the best use with Synixe.";
    systemChat "You may change any ACRE keybinding to suit your play style.";
  };
};

["en", "English"] call acre_api_fnc_babelAddLanguageType;
["fa", "Farsi"] call acre_api_fnc_babelAddLanguageType;
["ar", "Arabic"] call acre_api_fnc_babelAddLanguageType;
["fr", "French"] call acre_api_fnc_babelAddLanguageType;
["ru", "Russian"] call acre_api_fnc_babelAddLanguageType;
["gr", "Greek"] call acre_api_fnc_babelAddLanguageType;

switch (side player) do {
  case west: {
    ["en"] call acre_api_fnc_babelSetSpokenLanguages;
  };
  case east: {
    ["ru"] call acre_api_fnc_babelSetSpokenLanguages;
  };
  case independent: {
    ["ar"] call acre_api_fnc_babelSetSpokenLanguages;
  };
  case civilian: {
    ["gr"] call acre_api_fnc_babelSetSpokenLanguages;
  };
  case sideLogic: {
    ["en", "fa", "ar", "fr", "ru", "gr"] call acre_api_fnc_babelSetSpokenLanguages;
  };
};

{
  private _preset = (getMissionConfigValue QGVAR(radioPreset));
  systemChat _preset;
  [_x, _preset] call acre_api_fnc_setPreset;
} forEach [SQUAD_RADIO, LONGRANGE_RADIO];

0 spawn {

  private _displayIDD = 46;

  0 spawn {
    sleep 60;
    uiNamespace setVariable [QGVAR(skipLoading), true];
  };

  disableUserInput true;

  waitUntil { !isNull(findDisplay _displayIDD) };
  uiNamespace setVariable [QGVAR(loadingScreen), (findDisplay _displayIDD) createDisplay "RscDisplayLoadMission"];
  uiNamespace setVariable [QGVAR(loadingStatus), uiNamespace getVariable [QGVAR(loadingScreen), 0] displayCtrl 1102];

  uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText "Loading";

  [0, {
    missionNamespace setVariable [QEGVAR(loading,loaded), (missionNamespace getVariable [QEGVAR(loading,loaded), 0]) + 1, true];
  }] call CBA_fnc_globalExecute;

  waitUntil {
    private _loaded = missionNamespace getVariable [QEGVAR(loading,loaded), 0];
    private _time = 15;
    if (is3DENMultiplayer) then {
      _time = 2;
    };
    uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText format [
      "%1 Players Loading",
      _loaded,
      call EFUNC(common,totalPlayers)
    ];
    time > _time
  };

  waitUntil {
    private _loaded = missionNamespace getVariable [QEGVAR(loading,loaded), 0];
    uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText format [
      "%1 / %2 Players Loaded",
      _loaded,
      call EFUNC(common,totalPlayers)
    ];
    private _done = false;
    if (uiNamespace getVariable [QGVAR(skipLoading), false]) then {
      _done = true;
    } else {
      _done = (call EFUNC(common,totalPlayers)) isEqualTo _loaded;
    };
    _done
  };

  private _position = parseNumber(([[str player, count(toArray(str group player))+1] call BIS_fnc_trimString, " "] call BIS_fnc_splitString) select 0);
  private _parentSquad = (groupId group player) splitString "-" select 0;

  player setVariable [QGVAR(originalGroup), groupId group player, true];
  player setVariable [QGVAR(originalTeam), parseNumber ((groupId group player) splitString "-" select 1), true];

  if (_parentSquad find " " == -1) then {
    if (_position == 1) then {
      if ((groupId group player) find "-" == -1) then {
        //Squad Leader
        player setVariable [QGVAR(role), "SL", true];
        [QGVAR(squadLeader), [group player]] call CBA_fnc_globalEvent;
      } else {
        //Team Leader
        private _parent = [side player, _parentSquad] call FUNC(squadExists);
        if !(_parent isEqualTo grpNull) then {
          [player] joinSilent _parent;
        };
        player setVariable [QGVAR(role), "TL", true];
      };
    } else {
      private _parent = [side player, _parentSquad] call FUNC(squadExists);
      if (_parent isEqualTo (group player)) then {
        //Squad Level Member
      } else {
        //Team Member
        if !(_parent isEqualTo grpNull) then {
          [player] joinSilent _parent;
        };
      };
    };
  };

  player spawn FUNC(acre);

  if (side player isEqualTo sideLogic) then {
    disableUserInput false;
    player enableSimulation false;
    0 spawn FUNC(doneLoading);
  };

  player setVariable [QGVAR(group), group player, true];
  player setVariable [QGVAR(ready), true];

  [{
    if !((ace_player getVariable [QGVAR(group), grpNull]) isEqualTo (group ace_player)) then {
      0 spawn FUNC(acre_setup);
      ace_player setVariable [QGVAR(group), group ace_player, true];
    };
  }, 2] call CBA_fnc_addPerFrameHandler;

  ["CBA_teamColorChanged", {
    params ["_unit"];
    if (_unit isEqualTo ace_player) then {
      0 spawn FUNC(acre_setup);
    };
  }] call CBA_fnc_addEventHandler;

  //Join the MEGASQUAD if a Squad Leader JIPs
  [QGVAR(squadLeader), {
    params ["_group"];
    if !(player getVariable [QGVAR(ready), false]) exitWith {};
    if ((groupId _group) isEqualto (groupId group player) splitString "-" select 0) then {
      private _color = assignedTeam player;
      [player] joinSilent _group;
      _color spawn {
        sleep 1;
        player assignTeam _this;
      };
    };
  }] call CBA_fnc_addEventHandler;
};
