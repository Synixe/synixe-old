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

    icon = "\achilles\data_f_achilles\icons\icon_default_unit.paa";
  	picture = "\achilles\data_f_achilles\icons\icon_default_unit.paa";
  	portrait = "\achilles\data_f_achilles\icons\icon_default_unit.paa";

    class Arguments {};
    class ModuleDescription: ModuleDescription {
      description = "Synixe Module Base";
    };
  };

  class Synixe_Module_Loadout: Synixe_Module_Base {
    Category = "SYNIXE";
    scopeCurator = 2;
    function = "synixe_modules_fnc_loadout";
    displayName = "Change Loadout";
    icon = "\achilles\data_f_achilles\icons\icon_default_unit.paa"
  };

  class Synixe_Module_Earplugs: Synixe_Module_Base {
    Category = "SYNIXE";
    scopeCurator = 2;
    function = "synixe_modules_fnc_earplugs";
    displayName = "Give Earplugs";
    icon = "\achilles\data_f_achilles\icons\icon_default_unit.paa"
  };
};
