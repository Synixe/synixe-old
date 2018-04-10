//In the future it would be nice to automatically track who comes to missions.
//"synixe" callExtension ["setup", [getPlayerUID player]];
"synixe" callExtension "setup";
_role = roleDescription player;
_mission = missionName;
if (_mission == "tempMissionSP") then {
  _mission = "Editing Missions";
} else {
  _mission = briefingName;
};
_map = worldName;
_worldName = getText (configfile >> "CfgWorlds" >> worldname >> "description");
"synixe" callExtension ["update", [_mission, _role, toLower(_map), _worldName]];
