#include "script_component.hpp"

enableDebugConsole[] = {"76561198076832016"};

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {"Synixe_Brett_M4A1"};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_common"};
    author = "";
    authors[] = {"Brett"};
    authorUrl = "http://synixe.com";
    VERSION_CONFIG;
  };
};

class Extended_DisplayLoad_EventHandlers {
  class RscCustomInfoMiniMap {
    synixe_nogps = "params ['_display']; { if (isNull objectParent ACE_player) then { _x ctrlShow false; } } forEach allControls _display;";
  };
};

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscDisplayStart: RscStandardDisplay {
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text = "\z\synixe\addons\main\media\synixe_logo_transparent_ca.paa";
          onLoad = "";
        };
      };
    };
  };
};

class CfgWeapons {
  class rhs_weap_m4a1_carryhandle;
  class Synixe_Brett_M4A1: rhs_weap_m4a1_carryhandle {
    displayName = "Brett's M4A1";
    hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10"};
    hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat","\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat","\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat","\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual.rvmat"};
    hiddenSelectionsTextures[] = {"\z\synixe\addons\main\media\m4a1_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa","\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa","\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa"};
  };
};

class CfgUnitInsignia
{
	class Synixe
	{
		displayName = "Synixe";
		author = "Brett the Benevolent";
		texture = "\z\synixe\addons\main\media\synixe_logo_transparent_ca.paa";
		textureVehicle = "";
	};
};
