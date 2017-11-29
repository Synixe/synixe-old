if (isServer) then {
  //Spawn ACE Revive
  if (isNil "SynixeCur_group") then {SynixeCur_group = creategroup sideLogic;};
  publicVariable "SynixeCur_group";
  if (isNil "SynixeCurRestrict") then {
    SynixeCurRestrict = SynixeCur_group createunit["ModuleCuratorAddEditingAreaPlayer_F",[0,90,90],[],0.5,"NONE"];
    publicVariable "SynixeCurRestrict";
    SynixeCurRestrict setVariable ["assignedZeus","zeus"];
  };
};
