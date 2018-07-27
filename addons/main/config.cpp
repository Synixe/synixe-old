#include "script_component.hpp"

enableDebugConsole[] = {"76561198076832016"};

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {};
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
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class SynixeServer
		{
			text = "Synixe";
			textIsQuote = 0;
			picture = "\z\synixe\addons\main\media\synixe.paa";
			video = "\z\synixe\addons\main\media\synixe.ogv";
			action = "0 = [_this, 'arma.synixe.com', '2302', 'space'] execVM '\z\synixe\addons\common\functions\fnc_joinServer.sqf';";
			actionText = "Connect to Synixe";
			condition = "true";
		};
	};
};

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
