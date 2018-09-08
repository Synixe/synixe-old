class CfgVehicles {
  class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      //class ACE_TeamManagement {
        class Synixe_TeamMembers {
          displayName = "Team Members";
          condition = QUOTE(true);
          insertChildren = QUOTE(call FUNC(addTeamMembers));
          statement = "";
          icon = "";
          showDisabled = 1;
        };
      //};
    };
  };
};
