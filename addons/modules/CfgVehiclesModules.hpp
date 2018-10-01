class CfgVehicles {
  class Logic;
  class Module_F: Logic {
    class ModuleDescription {
      class AnyPlayer;
      class AnyBrain;
      class EmptyDetector;
    };
  };

  class Synixe_Module_Base: Module_F {
    mapSize = 1;
    author = "Brett";
    vehicleClass = "Modules";
    category = "SYNIXE";

    scope = 1;
    scopeCurator = 1;

    displayName = "Synixe Module Base";

    function = "";
    functionPriority = 1;
    isGlobal = 2;
    isTriggerActivated = 0;
    isDisposable = 0;

    class Arguments {};
    class ModuleDescription: ModuleDescription {
      description = "Synixe Module Base";
    };
  };

  class Synixe_Module_Wreck: Synixe_Module_Base {
    scopeCurator = 2;
    function = QUOTE(FUNC(wreck));
    displayName = "Make Wreck";
  };

  class Synixe_Module_Earplugs: Synixe_Module_Base {
    scopeCurator = 2;
    function = QUOTE(FUNC(earplugs));
    displayName = "Give Earplugs";
  };
};
