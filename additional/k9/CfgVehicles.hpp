class CfgVehicles {
  class B_Soldier_base_F;
  class K9_Dog: B_Soldier_base_F {
    author = "Synixe Brett";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "K9 Dog";
    faction = "K9";
    side = 1;
    editorSubcategory = "K9_Animals";

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};

    vegetation0[] = {"",0,0,0};
    vegetation01[] = {"",0,0,0};
    vegetation02[] = {"",0,0,0};
    vegetation03[] = {"",0,0,0};
    vegetation04[] = {"",0,0,0};
    vegetation05[] = {"",0,0,0};
    vegetation06[] = {"",0,0,0};
    vegetation07[] = {"",0,0,0};
    vegetation08[] = {"",0,0,0};
    vegetation09[] = {"",0,0,0};
    vegetation1[] = {"",0,0,0};
    vegetation10[] = {"",0,0,0};
    vegetation11[] = {"",0,0,0};
    vegetation12[] = {"",0,0,0};
    vegetation13[] = {"",0,0,0};
    vegetation14[] = {"",0,0,0};
    vegetation15[] = {"",0,0,0};
    vegetation16[] = {"",0,0,0};
    vegetation2[] = {"",0,0,0};
    vegetation3[] = {"",0,0,0};
    vegetation4[] = {"",0,0,0};
    vegetation5[] = {"",0,0,0};
    vegetation6[] = {"",0,0,0};
    vegetation7[] = {"",0,0,0};
    vegetation8[] = {"",0,0,0};
    vegetation9[] = {"",0,0,0};
    vegetationSounds[] = {};

    class EventHandlers {
    	class K9 {
    		init = "_this call synixe_k9_fnc_init";
    	};
    };
  };

  class Fin_blackwhite_F;
  class K9_Dog_2: Fin_blackwhite_F {
    _generalMacro = "B_Soldier_base_F";
    author = "Synixe Brett";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "K9 Dog 2";
    faction = "K9";
    side = 1;
    editorSubcategory = "K9_Animals";
    vehicleClass = "Men";

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};

    role = "Rifleman";
    isMan = 1;
    simulation = "soldier";
    aiBrainType = "DefaultSoldierBrain";
    canCarryBackPack = 1;
    canHideDriver = -1;
    canUseScanners = 1;
    identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
    faceType = "Man_A3";
  };
};
