class ctrlMenuStrip;
class display3DEN {
	class Controls {
		class MenuStrip: ctrlMenuStrip {
			class Items {
        // Attributes
				class Attributes {
					items[] += {"SynixeAttributes"};
				};
				class SynixeAttributes {
					text = "Synixe Settings";
					action = "edit3DENMissionAttributes 'SynixeAttributes';";
          picture = "\z\synixe\addons\main\media\synixe_logo_transparent_ca.paa";
				};

        // Tools
        class Tools {
					items[] += {"Synixe_Tools"};
				};
				class Synixe_Tools {
					text = "Synixe";
					items[] = {};
				};
			};
		};
	};
};
