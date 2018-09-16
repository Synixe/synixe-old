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
    synixe_nogps = "params ['_display']; { if ((vehicle ace_player) isEqualTo ace_player) then { _x ctrlShow false; } } forEach allControls _display;";
  };
};

#include "display3DEN.hpp"
class Cfg3DEN {
	class Mission {
		class SynixeAttributes {
			displayName = "Synixe";
			display = "Display3DENEditAttributesPreview";
		};
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

#include "CfgWeapons.hpp"
#include "CfgUnitInsignia.hpp"
