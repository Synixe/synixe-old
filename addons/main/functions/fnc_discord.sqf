"synixe" callExtension ["setup", [getPlayerUID player]];
_role = roleDescription player;
_mission = missionName;
if (_mission == "tempMissionSP") then {
  _mission = "Editing Missions";
};
_map = worldName;
_worldName = getText (configfile >> "CfgWorlds" >> worldname >> "description");
"synixe" callExtension ["update", [_mission, _role, toLower(_map), _worldName]];
