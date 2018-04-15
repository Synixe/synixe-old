//In the future it would be nice to automatically track who comes to missions.
//"synixe" callExtension ["setup", [getPlayerUID player]];
if (hasInterface) then {
  "synixe" callExtension "setup";
  _role = "http://synixe.com";
  _mission = "";
  if (isServer) then {
    _mission = "Editing Missions";
  } else {
    if (roleDescription player != "") then {
      _role = roleDescription player;
    };
    _mission = missionName;
    if (_mission == "tempMissionSP") then {
      _mission = "Editing Missions";
    } else {
      _mission = briefingName;
    };
  };
  _map = worldName;
  _worldName = getText (configfile >> "CfgWorlds" >> worldname >> "description");
  "synixe" callExtension ["update", [_mission, _role, toLower(_map), _worldName]];
};
