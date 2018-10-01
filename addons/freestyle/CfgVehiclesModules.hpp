class CfgVehicles {
  class Logic;
  class Module_F: Logic {
    class ModuleDescription {
      class AnyPlayer;
      class AnyBrain;
      class EmptyDetector;
    };
  };

  class Synixe_Freestyle_Module_Base: Module_F {
    mapSize = 1;
    author = "Brett";
    vehicleClass = "Modules";
    category = "SYNIXE_FREESTYLE";

    scope = 1;
    scopeCurator = 1;

    displayName = "Synixe Freestyle Module Base";

    function = "";
    functionPriority = 1;
    isGlobal = 2;
    isTriggerActivated = 0;
    isDisposable = 0;

    class Arguments {};
    class ModuleDescription: ModuleDescription {
      description = "Synixe Freestyle Module Base";
    };
  };

  class Synixe_Freestyle_Module_LimitedArsenal: Synixe_Freestyle_Module_Base {
    scopeCurator = 2;
    function = QUOTE(FUNC(limitedArsenal));
    displayName = "Limited Arsenal";
  };
};
