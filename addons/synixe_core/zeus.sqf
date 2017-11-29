//Zeus
if (!isNil "zeus") then {
  if (!isNil "SynixeCur") then {
  deleteVehicle SynixeCur;
  missionNamespace setVariable ["SynixeCur", nil, true];
  };
  if (isNil "SynixeCur") then {
    if (isNil "SynixeCur_group") then {SynixeCur_group = creategroup sideLogic;};
    publicVariable "SynixeCur_group";
    SynixeCur = SynixeCur_group createunit["ModuleCurator_F", [0, 90, 90], [], 0.5, "NONE"];	//Logic Server
    SynixeCur setVariable ["showNotification",false];
    SynixeCur setVariable ["TFAR_curatorCamEars", true];
    SynixeCur setCuratorEditingAreaType false;
    //SynixeCur allowCuratorLogicIgnoreAreas false;
    unassignCurator SynixeCur;
    publicVariable "SynixeCur";
    _cfg = (configFile >> "CfgPatches");
    _newAddons = [];
    for "_i" from 0 to((count _cfg) - 1) do {
      _name = configName(_cfg select _i);
      _newAddons pushBack _name;
    };
    if (count _newAddons > 0) then {SynixeCur addCuratorAddons _newAddons};
    SynixeCur setcuratorcoef["place", 0];
    SynixeCur setcuratorcoef["delete", 0];
    zeus assignCurator SynixeCur;
    systemChat "Curator Created";
    //No editing around players
  };
};
