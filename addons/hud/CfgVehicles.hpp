class CfgVehicles {
  class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      class ACE_TeamManagement {
        class Synixe_TeamMembers {
          displayName = "Members";
          condition = QUOTE(true);
          insertChildren = QUOTE(call FUNC(addTeamMembers));
          statement = QUOTE(true);
          showDisabled = 1;
        };
      };
    };
  };
};
