#define CHEMMIES(COLOR) Chemlight_##COLOR
#define CHEMMIESCOLOR(COLOR) #CHEMMIES(COLOR)
#define STANDARD_ITEMS "ACE_MapTools", "ACE_Flashlight_XL50", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine"
#define STANDARD_MAGS(COLOR) "MiniGrenade", "SmokeShell", "SmokeShell", CHEMMIESCOLOR(COLOR)
class CfgVehicles
 	{
	class Man;
	class CAManBase;
	// --WEST
  class SoldierWB: CAManBase
{
  items[] = {STANDARD_ITEMS};
  magazines[] = {STANDARD_MAGS(blue)};
};
		class B_Soldier_base_F: SoldierWB
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class demian2435_swat_man: B_Soldier_base_F
		{
			respawnmagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
			linkeditems[] = {STANDARD_ITEMS, "demian2435_swat_vest", "demian2435_swat_helmet", "G_Tactical_Clear", "ItemCompass", "ItemMap", "ItemWatch", "ItemRadio"};
			respawnitems[] = {STANDARD_ITEMS};
		};
		class demian2435_swat_leader: B_Soldier_base_F
		{
			respawnmagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
			linkeditems[] = {STANDARD_ITEMS, "demian2435_swat_leader_vest", "demian2435_swat_leader_helmet", "G_Tactical_Clear", "ItemCompass", "ItemGPS", "ItemMap", "ItemWatch", "ItemRadio"};
			respawnitems[] = {STANDARD_ITEMS};
		};
		class B_RangeMaster_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class demian2435_police_man: B_RangeMaster_F
		{
			respawnmagazines[] = {STANDARD_MAGS(blue), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			magazines[] = {STANDARD_MAGS(blue), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			linkeditems[] = {STANDARD_ITEMS, "demian2435_police_belt", "ItemMap", "ItemWatch", "ItemRadio"};
		};
		class demian2435_police_heavy: B_RangeMaster_F
		{
			respawnmagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			linkeditems[] = {STANDARD_ITEMS, "demian2435_police_vest", "demian2435_police_cap", "ItemMap", "ItemWatch", "ItemRadio"};
		};
		class B_Soldier_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier01_AR: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier02_AR: CAF_Soldier01_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier03_AR: CAF_Soldier01_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier04_AR: CAF_Soldier02_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier05_AR: CAF_Soldier02_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier01_TW: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier02_TW: CAF_Soldier01_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier03_TW: CAF_Soldier01_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier04_TW: CAF_Soldier02_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier05_TW: CAF_Soldier02_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_02_f: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_03_f: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_04_f: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_05_f: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_lite_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_GL_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AR_F: B_Soldier_02_f
		{
			magazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_SL_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "B_IR_Grenade", "B_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "B_IR_Grenade", "B_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_TL_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_M_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_LAT_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_medic_F: B_Soldier_02_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_repair_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_exp_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_Helipilot_F: B_Soldier_04_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_A_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AT_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AA_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class B_engineer_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_crew_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_officer_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Competitor_F: B_RangeMaster_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Pilot_F: B_Soldier_05_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01"};
			items[] = {STANDARD_ITEMS};
		};
		class B_helicrew_F: B_Helipilot_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_PG_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_UAV_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_universal_F: B_Soldier_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_Survivor_F: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
		};
		class B_Soldier_unarmed_F: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_diver_base_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue"};
			items[] = {STANDARD_ITEMS};
		};
		class B_diver_F: B_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_diver_TL_F: B_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_diver_exp_F: B_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_Soldier_recon_base: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_LAT_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_exp_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_recon_medic_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_TL_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_M_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_recon_JTAC_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_sniper_base_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_spotter_F: B_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class B_sniper_F: B_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class B_Story_SF_Captain_F: B_Soldier_02_f
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Story_Protagonist_F: B_Soldier_02_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
			respawnmagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Story_Engineer_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Story_Colonel_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Story_Pilot_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Story_Tank_Commander_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class b_soldier_survival_F: B_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_soldier_AR_A_F: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_support_base_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "B_IR_Grenade", "B_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "B_IR_Grenade", "B_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AAR_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AAT_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_AAA_F: B_soldier_AAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_support_MG_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_support_GMG_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_support_Mort_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_support_AMG_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_support_AMort_F: B_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class C_Marshal_F: B_RangeMaster_F
		{
			magazines[] = {STANDARD_MAGS(blue), "6Rnd_GreenSignal_F", "6Rnd_RedSignal_F", "6Rnd_GreenSignal_F", "6Rnd_RedSignal_F"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "6Rnd_GreenSignal_F", "6Rnd_RedSignal_F", "6Rnd_GreenSignal_F", "6Rnd_RedSignal_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Soldier_VR_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class B_Protagonist_VR_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class B_ghillie_base_F: B_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class B_ghillie_lsh_F: B_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_ghillie_sard_F: B_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_ghillie_ard_F: B_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Sharpshooter_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Recon_Sharpshooter_F: B_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Sharphooter_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_HeavyGunner_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_RIFLEMAN_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_MARKSMAN_AR: CAF_RIFLEMAN_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_RIFLEMANAT_AR: CAF_RIFLEMAN_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_GRENADIER_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_C9GUNNER_AR: CAF_Soldier02_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_OFFICER_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SECTIONIC_AR: CAF_Soldier02_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SECTION2IC_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_84GUNNER_AR: CAF_Soldier02_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_ATASST_AR: CAF_Soldier01_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_C6GUNNER_AR: CAF_Soldier02_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_GPMGASST_AR: CAF_Soldier01_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_MEDIC_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_CBTENGINEER_AR: CAF_Soldier02_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_VEHTECH_AR: CAF_Soldier01_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_CREWMAN_AR: CAF_Soldier02_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SNIPER_AR: CAF_Soldier01_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SPOTTER_AR: CAF_SNIPER_AR
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_RIFLEMAN_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_MARKSMAN_TW: CAF_RIFLEMAN_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_RIFLEMANAT_TW: CAF_RIFLEMAN_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_GRENADIER_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_C9GUNNER_TW: CAF_Soldier02_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_OFFICER_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SECTIONIC_TW: CAF_Soldier02_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556X45_T_STANAG"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SECTION2IC_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_84GUNNER_TW: CAF_Soldier02_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_ATASST_TW: CAF_Soldier01_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_C6GUNNER_TW: CAF_Soldier02_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt", "220Rnd_762x51_belt"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_GPMGASST_TW: CAF_Soldier01_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_MEDIC_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_CBTENGINEER_TW: CAF_Soldier02_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_VEHTECH_TW: CAF_Soldier01_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_CREWMAN_TW: CAF_Soldier02_TW
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SNIPER_TW: CAF_Soldier01_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_SPOTTER_TW: CAF_SNIPER_TW
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF_Soldier_01: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF_Soldier_02: B_Soldier_03_f
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO"};
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH146_PILOT_OD: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH146_PILOT_AR: RCAF_CH146_PILOT_OD
		{
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH146_helicrew_OD: RCAF_CH146_PILOT_OD
		{
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH146_helicrew_AR: RCAF_CH146_PILOT_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH147_PILOT_OD: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH147_PILOT_AR: RCAF_CH147_PILOT_OD
		{
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH147_helicrew_OD: RCAF_CH146_helicrew_OD
		{
			items[] = {STANDARD_ITEMS};
		};
		class RCAF_CH147_helicrew_AR: RCAF_CH146_helicrew_AR
		{
			items[] = {STANDARD_ITEMS};
		};
		class Underwear_F: B_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER_TL: JTF_Soldier_01
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER: JTF_Soldier_01
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER_MG: JTF_Soldier_02
		{
			magazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "200Rnd_556x45_belt", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER_EXP: JTF_Soldier_02
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER_MED: JTF_Soldier_01
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class JTF2_ASSAULTER_MRK: JTF_Soldier_01
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class CAF_Soldier01_AC: B_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class CBU_uniform_winter: B_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class CAF_RIFLEMAN_AC: CBU_uniform_winter
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "30Rnd_556x45_NATO", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_uniform_base: SoldierWB
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_mc_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_g3_m81_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_g3_tan_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_g3_rgr_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_g3_blk_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_acu_uniform: rhsusf_socom_uniform_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_army_base: SoldierWB
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_army_1stcav: rhsusf_infantry_army_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_army_10th: rhsusf_infantry_army_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_1stcav: rhsusf_infantry_army_1stcav
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_10th: rhsusf_infantry_army_10th
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_m4: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_m16: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_m590: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_riflemanl: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_riflemanat: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_m136_mag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_m136_mag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_grenadier: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_autorifleman: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_autoriflemana: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_machinegunner: rhsusf_army_ocp_autorifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_machinegunnera: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_marksman: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_officer: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_m18_purple", "rhs_mag_m18_yellow"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_m18_purple", "rhs_mag_m18_yellow"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_squadleader: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_red", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_red", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_teamleader: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_jfo: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_M585_white", "rhs_mag_M715_green", "rhs_mag_M661_green", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "I_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_M585_white", "rhs_mag_M715_green", "rhs_mag_M661_green", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "I_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_fso: rhsusf_army_ocp_jfo
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_javelin: rhsusf_army_ocp_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_fgm148_magazine_AT", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_fgm148_magazine_AT", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_javelin_assistant: rhsusf_army_ocp_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_maaws: rhsusf_army_ocp_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_maaws_HEAT", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_maaws_HEAT", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_aa: rhsusf_army_ocp_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_fim92_mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_fim92_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_uav: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_medic: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_engineer: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_explosives: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_sniper: rhsusf_army_ocp_marksman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_sniper_m24sws: rhsusf_army_ocp_sniper
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m62_Mag", "rhsusf_5Rnd_762x51_m62_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m993_Mag", "rhsusf_5Rnd_762x51_m62_Mag", "rhsusf_5Rnd_762x51_m62_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_sniper_m107: rhsusf_army_ocp_sniper
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_crewman: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_combatcrewman: rhsusf_army_ocp_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_driver: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_driver_armored: rhsusf_army_ocp_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_helipilot: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_helicrew: rhsusf_army_ocp_helipilot
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_1stcav: rhsusf_army_ocp_rifleman_1stcav
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_10th: rhsusf_army_ocp_rifleman_10th
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_m4: rhsusf_army_ocp_rifleman_m4
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_m16: rhsusf_army_ocp_rifleman_m16
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_m590: rhsusf_army_ocp_rifleman_m590
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_riflemanl: rhsusf_army_ocp_riflemanl
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_riflemanat: rhsusf_army_ocp_riflemanat
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_grenadier: rhsusf_army_ocp_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_autorifleman: rhsusf_army_ocp_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_autoriflemana: rhsusf_army_ocp_autoriflemana
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_machinegunner: rhsusf_army_ocp_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_machinegunnera: rhsusf_army_ocp_machinegunnera
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_officer: rhsusf_army_ocp_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_teamleader: rhsusf_army_ocp_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_jfo: rhsusf_army_ocp_jfo
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_fso: rhsusf_army_ocp_fso
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_javelin: rhsusf_army_ocp_javelin
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_javelin_assistant: rhsusf_army_ocp_javelin_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_maaws: rhsusf_army_ocp_maaws
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_aa: rhsusf_army_ocp_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_uav: rhsusf_army_ocp_uav
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_engineer: rhsusf_army_ocp_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_explosives: rhsusf_army_ocp_explosives
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_sniper: rhsusf_army_ocp_sniper
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_sniper_m24sws: rhsusf_army_ocp_sniper_m24sws
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_sniper_m107: rhsusf_army_ocp_sniper_m107
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_crewman: rhsusf_army_ocp_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_combatcrewman: rhsusf_army_ocp_combatcrewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_driver: rhsusf_army_ocp_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_driver_armored: rhsusf_army_ocp_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_helipilot: rhsusf_army_ocp_helipilot
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_helicrew: rhsusf_army_ocp_helicrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_army_82nd: rhsusf_infantry_army_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_army_101st: rhsusf_infantry_army_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_82nd: rhsusf_infantry_army_82nd
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_101st: rhsusf_infantry_army_101st
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_rifleman: rhsusf_army_ocp_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_riflemanl: rhsusf_army_ocp_arb_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_rifleman_arb_m16: rhsusf_army_ocp_rifleman_m16
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_rifleman_m590: rhsusf_army_ocp_rifleman_m590
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_riflemanat: rhsusf_army_ocp_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_m136_mag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_m136_mag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_maaws: rhsusf_army_ocp_maaws
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_maaws_HEAT", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_maaws_HEAT", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_grenadier: rhsusf_army_ocp_grenadier
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_autorifleman: rhsusf_army_ocp_autorifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_autoriflemana: rhsusf_army_ocp_autoriflemana
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_machinegunner: rhsusf_army_ocp_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_machinegunnera: rhsusf_army_ocp_machinegunnera
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_marksman: rhsusf_army_ocp_marksman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhsusf_20Rnd_762x51_m62_Mag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_squadleader: rhsusf_army_ocp_squadleader
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_mk84", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_mk84", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_teamleader: rhsusf_army_ocp_teamleader
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_medic: rhsusf_army_ocp_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_engineer: rhsusf_army_ocp_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ocp_arb_sniper_m107: rhsusf_army_ocp_sniper_m107
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_82nd: rhsusf_army_ocp_rifleman_82nd
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_101st: rhsusf_army_ocp_rifleman_101st
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_rifleman: rhsusf_army_ocp_arb_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_riflemanl: rhsusf_army_ocp_arb_riflemanl
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_rifleman_arb_m16: rhsusf_army_ocp_rifleman_arb_m16
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_rifleman_m590: rhsusf_army_ocp_arb_rifleman_m590
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_riflemanat: rhsusf_army_ocp_arb_riflemanat
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_maaws: rhsusf_army_ocp_arb_maaws
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_grenadier: rhsusf_army_ocp_arb_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_autorifleman: rhsusf_army_ocp_arb_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_autoriflemana: rhsusf_army_ocp_arb_autoriflemana
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_machinegunner: rhsusf_army_ocp_arb_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_machinegunnera: rhsusf_army_ocp_arb_machinegunnera
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_marksman: rhsusf_army_ocp_arb_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_squadleader: rhsusf_army_ocp_arb_squadleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_teamleader: rhsusf_army_ocp_arb_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_medic: rhsusf_army_ocp_arb_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_engineer: rhsusf_army_ocp_arb_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_army_ucp_arb_sniper_m107: rhsusf_army_ocp_arb_sniper_m107
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_usmc_base: rhsusf_infantry_army_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_rifleman: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_rifleman_m4: rhsusf_usmc_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_rifleman_light: rhsusf_usmc_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_riflemanat: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67", "rhs_m136_mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67", "rhs_m136_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_rifleman_law: rhsusf_usmc_marpat_wd_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67", "rhs_m72a7_mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67", "rhs_mag_m67", "rhs_m72a7_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_rifleman_m590: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_grenadier: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_grenadier_m32: rhsusf_usmc_marpat_wd_grenadier
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_autorifleman: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_autorifleman_m249: rhsusf_usmc_marpat_wd_autorifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_autorifleman_m249_ass: rhsusf_usmc_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_machinegunner: rhsusf_usmc_marpat_wd_autorifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_machinegunner_ass: rhsusf_usmc_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_officer: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_squadleader: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_purple", "rhs_mag_m18_yellow", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_teamleader: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_jfo: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "I_IR_Grenade", "I_IR_Grenade", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "I_IR_Grenade", "I_IR_Grenade", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_fso: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "rhs_mag_m18_purple"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_smaw: rhsusf_usmc_marpat_wd_riflemanat
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_smaw_SR", "rhs_mag_smaw_SR", "rhs_mag_smaw_SR", "rhs_mag_smaw_HEDP", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_smaw_SR", "rhs_mag_smaw_SR", "rhs_mag_smaw_SR", "rhs_mag_smaw_HEDP", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_javelin: rhsusf_usmc_marpat_wd_smaw
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_fgm148_magazine_AT", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_fgm148_magazine_AT", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_javelin_assistant: rhsusf_usmc_marpat_wd_smaw
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_stinger: rhsusf_usmc_marpat_wd_smaw
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_fim92_mag", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_fim92_mag", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_engineer: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_explosives: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "ClaymoreDirectionalMine_Remote_Mag", "rhs_mag_m18_red"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "ClaymoreDirectionalMine_Remote_Mag", "rhs_mag_m18_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_uav: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_marksman: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_spotter: rhsusf_usmc_marpat_wd_marksman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_sniper: rhsusf_usmc_marpat_wd_marksman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_sniper_m110: rhsusf_usmc_marpat_wd_sniper
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_sniper_M107: rhsusf_usmc_marpat_wd_sniper
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_crewman: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_combatcrewman: rhsusf_usmc_marpat_wd_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_driver: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m18_red", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m18_red", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_gunner: rhsusf_usmc_marpat_wd_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_helipilot: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_wd_helicrew: rhsusf_usmc_marpat_wd_helipilot
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_rifleman: rhsusf_usmc_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_rifleman_light: rhsusf_usmc_marpat_wd_rifleman_light
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_rifleman_m4: rhsusf_usmc_marpat_wd_rifleman_m4
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_riflemanat: rhsusf_usmc_marpat_wd_riflemanat
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_rifleman_law: rhsusf_usmc_marpat_wd_rifleman_law
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_rifleman_m590: rhsusf_usmc_marpat_wd_rifleman_m590
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_grenadier: rhsusf_usmc_marpat_wd_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_grenadier_m32: rhsusf_usmc_marpat_wd_grenadier_m32
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_autorifleman: rhsusf_usmc_marpat_wd_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_autorifleman_m249: rhsusf_usmc_marpat_wd_autorifleman_m249
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_autorifleman_m249_ass: rhsusf_usmc_marpat_wd_autorifleman_m249_ass
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_machinegunner: rhsusf_usmc_marpat_wd_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_machinegunner_ass: rhsusf_usmc_marpat_wd_machinegunner_ass
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_officer: rhsusf_usmc_marpat_wd_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_squadleader: rhsusf_usmc_marpat_wd_squadleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_teamleader: rhsusf_usmc_marpat_wd_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_fso: rhsusf_usmc_marpat_wd_fso
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_jfo: rhsusf_usmc_marpat_wd_jfo
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_engineer: rhsusf_usmc_marpat_wd_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_explosives: rhsusf_usmc_marpat_wd_explosives
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_uav: rhsusf_usmc_marpat_wd_uav
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_smaw: rhsusf_usmc_marpat_wd_smaw
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_javelin: rhsusf_usmc_marpat_wd_javelin
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_javelin_assistant: rhsusf_usmc_marpat_wd_javelin_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_stinger: rhsusf_usmc_marpat_wd_stinger
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_marksman: rhsusf_usmc_marpat_wd_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_spotter: rhsusf_usmc_marpat_wd_spotter
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_sniper: rhsusf_usmc_marpat_wd_sniper
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_sniper_m110: rhsusf_usmc_marpat_wd_sniper_m110
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_sniper_m107: rhsusf_usmc_marpat_wd_sniper_M107
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_crewman: rhsusf_usmc_marpat_wd_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_combatcrewman: rhsusf_usmc_marpat_wd_combatcrewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_driver: rhsusf_usmc_marpat_wd_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_gunner: rhsusf_usmc_marpat_wd_gunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_helipilot: rhsusf_usmc_marpat_wd_helipilot
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_marpat_d_helicrew: rhsusf_usmc_marpat_wd_helicrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_rifleman: rhsusf_usmc_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_rifleman_light: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_riflemanat: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_m136_mag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_m136_mag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_grenadier_m32: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_autorifleman: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_squadleader: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_red", "rhs_mag_m18_green"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_teamleader: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M585_white", "rhs_mag_M585_white", "rhs_mag_M585_white", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M585_white", "rhs_mag_M585_white", "rhs_mag_M585_white", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_marksman: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_crewman: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_combatcrewman: rhsusf_usmc_lar_marpat_wd_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_wd_machinegunner: rhsusf_usmc_lar_marpat_wd_combatcrewman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_rifleman: rhsusf_usmc_lar_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_rifleman_light: rhsusf_usmc_lar_marpat_wd_rifleman_light
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_riflemanat: rhsusf_usmc_lar_marpat_wd_riflemanat
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_grenadier_m32: rhsusf_usmc_lar_marpat_wd_grenadier_m32
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_autorifleman: rhsusf_usmc_lar_marpat_wd_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_squadleader: rhsusf_usmc_lar_marpat_wd_squadleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_teamleader: rhsusf_usmc_lar_marpat_wd_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_marksman: rhsusf_usmc_lar_marpat_wd_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_crewman: rhsusf_usmc_lar_marpat_wd_crewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_combatcrewman: rhsusf_usmc_lar_marpat_wd_combatcrewman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_lar_marpat_d_machinegunner: rhsusf_usmc_lar_marpat_wd_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_usmc_recon_base: rhsusf_infantry_usmc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman: rhsusf_infantry_usmc_recon_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman_at: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84", "rhs_m136_mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84", "rhs_m136_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_grenadier_m32: rhsusf_usmc_recon_marpat_wd_rifleman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M433_HEDP", "rhsusf_mag_6Rnd_M714_white", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_autorifleman: rhsusf_infantry_usmc_recon_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_machinegunner: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_marksman: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_sniper_M107: rhsusf_usmc_recon_marpat_wd_marksman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_officer: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_mk84"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_teamleader: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "rhs_mag_mk3a2", "rhs_mag_mk3a2", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman_fast: rhsusf_usmc_recon_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman_at_fast: rhsusf_usmc_recon_marpat_wd_rifleman_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_autorifleman_fast: rhsusf_usmc_recon_marpat_wd_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_marksman_fast: rhsusf_usmc_recon_marpat_wd_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_teamleader_fast: rhsusf_usmc_recon_marpat_wd_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman_lite: rhsusf_usmc_recon_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_rifleman_at_lite: rhsusf_usmc_recon_marpat_wd_rifleman_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_autorifleman_lite: rhsusf_usmc_recon_marpat_wd_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_marksman_lite: rhsusf_usmc_recon_marpat_wd_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_wd_teamleader_lite: rhsusf_usmc_recon_marpat_wd_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman: rhsusf_usmc_recon_marpat_wd_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman_at: rhsusf_usmc_recon_marpat_wd_rifleman_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_autorifleman: rhsusf_usmc_recon_marpat_wd_autorifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_grenadier_m32: rhsusf_usmc_recon_marpat_wd_grenadier_m32
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_machinegunner: rhsusf_usmc_recon_marpat_wd_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_marksman: rhsusf_usmc_recon_marpat_wd_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_sniper_M107: rhsusf_usmc_recon_marpat_wd_sniper_M107
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_officer: rhsusf_usmc_recon_marpat_wd_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_teamleader: rhsusf_usmc_recon_marpat_wd_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman_fast: rhsusf_usmc_recon_marpat_wd_rifleman_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman_at_fast: rhsusf_usmc_recon_marpat_wd_rifleman_at_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_autorifleman_fast: rhsusf_usmc_recon_marpat_wd_autorifleman_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_machinegunner_m249_fast: rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_marksman_fast: rhsusf_usmc_recon_marpat_wd_marksman_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_teamleader_fast: rhsusf_usmc_recon_marpat_wd_teamleader_fast
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman_lite: rhsusf_usmc_recon_marpat_wd_rifleman_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_rifleman_at_lite: rhsusf_usmc_recon_marpat_wd_rifleman_at_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_autorifleman_lite: rhsusf_usmc_recon_marpat_wd_autorifleman_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_machinegunner_m249_lite: rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_marksman_lite: rhsusf_usmc_recon_marpat_wd_marksman_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_usmc_recon_marpat_d_teamleader_lite: rhsusf_usmc_recon_marpat_wd_teamleader_lite
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_socom_armysf_base: rhsusf_socom_mc_uniform
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m14_th3", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_an_m14_th3", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_socom_armysf_rifleman: rhsusf_infantry_socom_armysf_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_infantry_socom_marsoc_base: rhsusf_socom_g3_m81_uniform
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_mk84", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_mk84", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso: rhsusf_infantry_socom_marsoc_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_cqb: rhsusf_infantry_socom_marsoc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_mk84", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_light: rhsusf_socom_marsoc_cso_cqb
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_breacher: rhsusf_socom_marsoc_cso_cqb
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_grenadier: rhsusf_infantry_socom_marsoc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_an_m8hc", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_teamleader: rhsusf_infantry_socom_marsoc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "I_IR_Grenade", "I_IR_Grenade", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow", "I_IR_Grenade", "I_IR_Grenade", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_teamchief: rhsusf_socom_marsoc_teamleader
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_elementleader: rhsusf_socom_marsoc_cso_cqb
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_jtac: rhsusf_infantry_socom_marsoc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_m18_yellow", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m18_purple", "I_IR_Grenade", "I_IR_Grenade", "Laserbatteries", "rhs_mag_m67", "rhs_mag_m67"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_m18_yellow", "rhs_mag_m18_yellow", "rhs_mag_m18_purple", "rhs_mag_m18_purple", "I_IR_Grenade", "I_IR_Grenade", "Laserbatteries", "rhs_mag_m67", "rhs_mag_m67"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_jfo: rhsusf_socom_marsoc_jtac
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_eod: rhsusf_infantry_socom_marsoc_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_cso_mechanic: rhsusf_infantry_socom_marsoc_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_sarc: rhsusf_infantry_socom_marsoc_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_spotter: rhsusf_infantry_socom_marsoc_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_sniper: rhsusf_socom_marsoc_spotter
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_marsoc_sniper_m107: rhsusf_socom_marsoc_sniper
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_swcc_crewman: rhsusf_infantry_socom_marsoc_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_socom_swcc_officer: rhsusf_socom_swcc_crewman
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_m18_red", "rhs_mag_m18_green", "rhs_mag_m18_yellow"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_marpat_wd_medic: rhsusf_usmc_marpat_wd_rifleman_m4
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_marpat_d_medic: rhsusf_usmc_marpat_d_rifleman_m4
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_sarc_w: rhsusf_infantry_usmc_recon_base
		{
			magazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_mk3a2", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_mk3a2", "rhs_mag_m18_red", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_sarc_d: rhsusf_navy_sarc_w
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_sarc_w_fast: rhsusf_navy_sarc_w
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_navy_sarc_d_fast: rhsusf_navy_sarc_d
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4
		{
			magazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_purple", "rhs_mag_an_m8hc"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_m18_purple", "rhs_mag_an_m8hc"};
			items[] = {STANDARD_ITEMS};
		};
		class rhsusf_airforce_pilot: rhsusf_airforce_jetpilot
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_A_F: B_Soldier_A_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AAR_F: B_soldier_AAR_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Support_AMG_F: B_support_AMG_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Support_AMort_F: B_support_AMort_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AAA_F: B_soldier_AAA_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AAT_F: B_soldier_AAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AR_F: B_soldier_AR_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Medic_F: B_medic_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Crew_F: B_crew_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Engineer_F: B_engineer_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_Exp_F: B_soldier_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_GL_F: B_Soldier_GL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Support_GMG_F: B_support_GMG_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Support_MG_F: B_support_MG_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Support_Mort_F: B_support_Mort_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Helicrew_F: B_helicrew_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Helipilot_F: B_Helipilot_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_soldier_M_F: B_soldier_M_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AA_F: B_soldier_AA_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_AT_F: B_soldier_AT_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Officer_F: B_officer_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_PG_F: B_soldier_PG_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Pilot_F: B_Pilot_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_Repair_F: B_soldier_repair_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_F: B_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_LAT_F: B_soldier_LAT_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_SL_F: B_Soldier_SL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_TL_F: B_Soldier_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_UAV_F: B_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Diver_F: B_diver_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Diver_Exp_F: B_diver_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Diver_TL_F: B_diver_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_Exp_F: B_recon_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_JTAC_F: B_recon_JTAC_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_M_F: B_recon_M_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_Medic_F: B_recon_medic_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_F: B_recon_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_LAT_F: B_recon_LAT_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Recon_TL_F: B_recon_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Sniper_F: B_sniper_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Spotter_F: B_spotter_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_ghillie_tna_F: B_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_universal_F: B_T_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_unarmed_F: B_T_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_base_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_3_F: B_CTRG_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_urb_1_F: B_CTRG_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_urb_2_F: B_CTRG_Soldier_2_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_urb_3_F: B_CTRG_Soldier_3_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_universal_F: B_CTRG_Soldier_tna_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_GEN_Soldier_base_F: B_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		};
		class B_GEN_Soldier_F: B_GEN_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_GEN_Commander_F: B_GEN_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_GEN_Soldier_universal_F: B_GEN_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_Deck_Crew_F: B_Helipilot_F
		{
			magazines[] = {STANDARD_MAGS(blue)};
			respawnMagazines[] = {STANDARD_MAGS(blue)};
			items[] = {STANDARD_ITEMS};
		};
		class B_Fighter_Pilot_F: B_Pilot_F
		{
			magazines[] = {STANDARD_MAGS(blue), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellOrange"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellOrange"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_M_F: B_soldier_M_F
		{
			magazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Medic_F: B_medic_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_AR_F: B_soldier_AR_F
		{
			magazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_MG_F: B_soldier_AR_F
		{
			magazines[] = {STANDARD_MAGS(blue), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
		{
			magazines[] = {STANDARD_MAGS(blue), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_A_F: B_Soldier_A_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Soldier_AT_F: B_soldier_AT_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Titan_AP"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Titan_AP"};
			items[] = {STANDARD_ITEMS};
		};
		class B_Patrol_Engineer_F: B_engineer_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_UAV_06_F: B_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_UAV_06_medical_F: B_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_soldier_UAV_06_F: B_T_Soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_soldier_UAV_06_medical_F: B_T_Soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_mine_F: B_soldier_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_T_soldier_mine_F: B_T_Soldier_Exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_soldier_LAT2_F: B_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_T_Soldier_LAT2_F: B_soldier_LAT2_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(blue), "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
	// --EAST
		class SoldierEB: CAManBase
		{
			magazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class D2_RCM03_Civilian1: SoldierEB
		{
			magazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class D2_RCM03_Civilian2: D2_RCM03_Civilian1
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_base_F: SoldierEB
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_02_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_officer_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_lite_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_GL_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AR_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_SL_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_TL_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_M_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_LAT_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			items[] = {STANDARD_ITEMS};
		};
		class O_medic_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_repair_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_exp_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_helipilot_F: O_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_A_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AT_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AA_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class O_engineer_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_crew_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Pilot_F: O_helipilot_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
			items[] = {STANDARD_ITEMS};
		};
		class O_helicrew_F: O_helipilot_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_PG_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Story_Colonel_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Story_CEO_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_UAV_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_universal_F: O_Soldier_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_Survivor_F: O_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class O_Soldier_unarmed_F: O_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_diver_base_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_green", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_green", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed"};
			items[] = {STANDARD_ITEMS};
		};
		class O_diver_F: O_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_diver_TL_F: O_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_diver_exp_F: O_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_Soldier_sniper_base_F: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_spotter_F: O_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class O_sniper_F: O_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class O_Soldier_recon_base: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_M_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_LAT_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "RPG32_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "RPG32_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_medic_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_exp_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_recon_JTAC_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_recon_TL_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_support_base_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AAR_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AAT_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AAA_F: O_Soldier_AAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_support_MG_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_support_GMG_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_support_Mort_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_support_AMG_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_support_AMort_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_Urban_base: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_F: O_Soldier_Urban_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AR_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AAR_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_LAT_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AT_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AAT_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AA_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_AAA_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_TL_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_SoldierU_SL_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_medic_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_repair_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_exp_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_engineer_U_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_soldierU_M_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldierU_A_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_SoldierU_GL_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_SoldierU_unarmed_F: O_soldierU_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_VR_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class O_Protagonist_VR_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class O_ghillie_base_F: O_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class O_ghillie_lsh_F: O_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_ghillie_sard_F: O_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_ghillie_ard_F: O_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Sharpshooter_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Pathfinder_F: O_Soldier_recon_base
		{
			magazines[] = {STANDARD_MAGS(red), "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "MiniGrenade", "Laserbatteries"};
			respawnMagazines[] = {STANDARD_MAGS(red), "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "MiniGrenade", "Laserbatteries"};
			items[] = {STANDARD_ITEMS};
		};
		class O_HeavyGunner_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
		{
			magazines[] = {STANDARD_MAGS(red), "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_UAV_AI: O_helipilot_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class I_UAV_AI: O_UAV_AI
		{
			items[] = {STANDARD_ITEMS};
		};
		class TBan_Fighter1: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter1NH: O_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter2: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter2NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter3: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter3NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter4: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter5: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter6: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Fighter6NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Warlord: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Sniper: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Haji_Matin: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit1NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit2: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit2NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit3: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit3NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit4: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit5: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo"};
		};
		class TBan_Recruit6: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo", "rhs_rpg7_PG7VL_mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo", "rhs_rpg7_PG7VL_mag"};
		};
		class TBan_Recruit6NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo", "rhs_rpg7_PG7VL_mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgo", "rhs_mag_rgo", "rhs_rpg7_PG7VL_mag"};
		};
		class Afghan_civilian1: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_civilian1NH: TBan_Fighter1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian2: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian2NH: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_civilian3: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_civilian3NH: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian4: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian5: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian6: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class Afghan_Civilian6NH: Afghan_civilian1
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class O_T_Soldier_A_F: O_Soldier_A_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AAR_F: O_Soldier_AAR_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Support_AMG_F: O_support_AMG_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Support_AMort_F: O_support_AMort_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AAA_F: O_Soldier_AAA_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AAT_F: O_Soldier_AAT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AR_F: O_Soldier_AR_F
		{
			magazines[] = {STANDARD_MAGS(red), "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Medic_F: O_medic_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Crew_F: O_crew_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Engineer_F: O_engineer_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_Exp_F: O_soldier_exp_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_GL_F: O_Soldier_GL_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Support_GMG_F: O_support_GMG_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Support_MG_F: O_support_MG_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Support_Mort_F: O_support_Mort_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Helicrew_F: O_helicrew_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Helipilot_F: O_helipilot_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_M_F: O_soldier_M_F
		{
			magazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AA_F: O_Soldier_AA_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AT_F: O_Soldier_AT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Officer_F: O_officer_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder", "6Rnd_45ACP_Cylinder"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_PG_F: O_soldier_PG_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Pilot_F: O_Pilot_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_Repair_F: O_soldier_repair_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_F: O_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_LAT_F: O_Soldier_LAT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_SL_F: O_Soldier_SL_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_TL_F: O_Soldier_TL_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_UAV_F: O_soldier_UAV_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Diver_F: O_diver_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Diver_Exp_F: O_diver_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Diver_TL_F: O_diver_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_Exp_F: O_recon_exp_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_JTAC_F: O_recon_JTAC_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "Laserbatteries", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_M_F: O_recon_M_F
		{
			magazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_Medic_F: O_recon_medic_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_F: O_recon_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_LAT_F: O_recon_LAT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Recon_TL_F: O_recon_TL_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Sniper_F: O_sniper_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Spotter_F: O_spotter_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class O_T_ghillie_tna_F: O_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_Viper_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "10Rnd_50BW_Mag_F", "10Rnd_50BW_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "10Rnd_50BW_Mag_F", "10Rnd_50BW_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_Viper_hex_F: O_V_Soldier_Viper_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_universal_F: O_T_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_unarmed_F: O_T_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_base_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_hex_F: O_V_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_M_hex_F: O_V_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag", "RPG32_F"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag", "RPG32_F"};
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag", "Laserbatteries"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "16Rnd_9x21_Mag", "Laserbatteries"};
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_ghex_F: O_V_Soldier_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_TL_ghex_F: O_V_Soldier_TL_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_V_Soldier_Medic_ghex_F: O_V_Soldier_Medic_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_M_ghex_F: O_V_Soldier_M_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_LAT_ghex_F: O_V_Soldier_LAT_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_V_Soldier_JTAC_ghex_F: O_V_Soldier_JTAC_hex_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_Fighter_Pilot_F: O_Pilot_F
		{
			magazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellOrange"};
			respawnMagazines[] = {STANDARD_MAGS(red), "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellOrange"};
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_UAV_06_F: O_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_UAV_06_medical_F: O_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_soldier_UAV_06_F: O_T_Soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_soldier_UAV_06_medical_F: O_T_Soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_soldier_mine_F: O_soldier_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_soldier_mine_F: O_T_Soldier_Exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_base_F: O_officer_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "SmokeShellYellow", "SmokeShellYellow"};
		};
		class O_A_soldier_A_F: O_A_soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
		};
		class O_A_soldier_AR_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_medic_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_GL_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_M_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_officer_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_LAT_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "RPG32_F", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "RPG32_F", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_SL_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_TL_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_AA_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "Titan_AA", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "Titan_AA", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class O_A_soldier_AT_F: O_A_soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "Titan_AT", "SmokeShellYellow", "SmokeShellYellow"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "Titan_AT", "SmokeShellYellow", "SmokeShellYellow"};
			items[] = {STANDARD_ITEMS};
		};
		class fsg_base_o_soldier: O_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class fsg_base_o_sf_soldier: O_medic_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red)};
			respawnMagazines[] = {STANDARD_MAGS(red)};
		};
		class fsg_o_regular_at: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_mg: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_mag_9x18_8_57N181S", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_mag_9x18_8_57N181S", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_crewman: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_grenadier: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_rifleman_2: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_rifleman_3: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_squadleader: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellYellow", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellYellow", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_rifleman_1: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellRed", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellRed", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_medic: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_regular_sniper: fsg_base_o_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShellPurple", "rhs_mag_9x18_8_57N181S", "SmokeShellPurple", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShellPurple", "rhs_mag_9x18_8_57N181S", "SmokeShellPurple", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_sf_squadleader: fsg_base_o_sf_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellYellow", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellYellow", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_sf_teamleader: fsg_base_o_sf_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_sf_operator_1: fsg_base_o_sf_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_sf_operator_2: fsg_base_o_sf_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class fsg_o_sf_operator_3: fsg_base_o_sf_soldier
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			respawnMagazines[] = {STANDARD_MAGS(red), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
		};
		class O_Soldier_HAT_F: O_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT"};
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_HAT_F: O_Soldier_HAT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT"};
			respawnMagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT"};
			items[] = {STANDARD_ITEMS};
		};
		class O_Soldier_AHAT_F: O_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_T_Soldier_AHAT_F: O_Soldier_AHAT_F
		{
			magazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			respawnmagazines[] = {STANDARD_MAGS(red), "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "O_IR_Grenade", "O_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
	// --IND
		class SoldierGB: CAManBase
		{
			magazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_base_F: SoldierGB
		{
			items[] = {STANDARD_ITEMS};
			respawnitems[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		};
		class I_G_Soldier_F: I_G_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_lite_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_SL_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_TL_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_AR_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_medic_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_engineer_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MiniGrenade"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MiniGrenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_G_Soldier_exp_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_G_Soldier_GL_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_M_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_LAT_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RPG32_F"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RPG32_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_A_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_officer_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_F: I_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_F: I_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_lite_F: I_G_Soldier_lite_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_lite_F: I_G_Soldier_lite_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_SL_F: I_G_Soldier_SL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_SL_F: I_G_Soldier_SL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_TL_F: I_G_Soldier_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_TL_F: I_G_Soldier_TL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_AR_F: I_G_Soldier_AR_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_AR_F: I_G_Soldier_AR_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_medic_F: I_G_medic_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_medic_F: I_G_medic_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_engineer_F: I_G_engineer_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_G_engineer_F: I_G_engineer_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_G_Soldier_exp_F: I_G_Soldier_exp_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_G_Soldier_exp_F: I_G_Soldier_exp_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class B_G_Soldier_GL_F: I_G_Soldier_GL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_GL_F: I_G_Soldier_GL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_M_F: I_G_Soldier_M_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_M_F: I_G_Soldier_M_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_A_F: I_G_Soldier_A_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_A_F: I_G_Soldier_A_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_officer_F: I_G_officer_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_officer_F: I_G_officer_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_unarmed_F: I_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_unarmed_F: B_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_unarmed_F: O_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Survivor_F: I_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
			respawnMagazines[] = {STANDARD_MAGS(green)};
		};
		class B_G_Survivor_F: B_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
			respawnMagazines[] = {STANDARD_MAGS(green)};
		};
		class O_G_Survivor_F: O_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
			respawnMagazines[] = {STANDARD_MAGS(green)};
		};
		class B_G_Soldier_universal_F: B_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class O_G_Soldier_universal_F: O_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_G_Soldier_universal_F: I_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_G_Story_Protagonist_F: B_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Story_SF_Captain_F: B_G_Soldier_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_resistanceLeader_F: I_G_Story_Protagonist_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_resistanceCommander_F: I_G_Story_Protagonist_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_base_F: SoldierGB
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_02_F: I_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_03_F: I_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_04_F: I_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_lite_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_A_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_GL_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AR_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_SL_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "I_IR_Grenade", "I_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "I_IR_Grenade", "I_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_TL_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_M_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_LAT_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "NLAW_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "NLAW_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AT_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Titan_AT"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Titan_AT"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AA_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Titan_AA"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Titan_AA"};
			items[] = {STANDARD_ITEMS};
		};
		class I_medic_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_repair_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_exp_F: I_Soldier_02_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_engineer_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_crew_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_pilot_F: I_Soldier_04_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag", "30Rnd_9x21_Yellow_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_officer_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Story_Colonel_F: I_officer_F
		{
			magazines[] = {STANDARD_MAGS(green), "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			respawnMagazines[] = {STANDARD_MAGS(green), "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
			items[] = {STANDARD_ITEMS};
		};
		class I_soldier_UAV_F: I_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_diver_base_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellGreen", "SmokeShellGreen"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellGreen", "SmokeShellGreen"};
			items[] = {STANDARD_ITEMS};
		};
		class I_diver_F: I_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_diver_exp_F: I_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker", "ACE_DefusalKit"};
		};
		class I_diver_TL_F: I_Soldier_diver_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_sniper_base_F: I_Soldier_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Spotter_F: I_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "I_IR_Grenade", "I_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", "MiniGrenade", "MiniGrenade", "I_IR_Grenade", "I_IR_Grenade"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class I_Sniper_F: I_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class I_Soldier_support_base_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "I_IR_Grenade", "I_IR_Grenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "I_IR_Grenade", "I_IR_Grenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AAR_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AAT_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_AAA_F: I_Soldier_AAT_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_support_MG_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_support_GMG_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_support_Mort_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_support_AMG_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_support_AMort_F: I_Soldier_support_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_VR_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_Protagonist_VR_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_ghillie_base_F: I_Soldier_sniper_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag"};
			items[] = {STANDARD_ITEMS, "ACE_Clacker"};
			respawnitems[] = {STANDARD_ITEMS, "ACE_Clacker"};
		};
		class I_ghillie_lsh_F: I_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_ghillie_sard_F: I_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_ghillie_ard_F: I_ghillie_base_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Sharpshooter_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Sharpshooter_F: I_G_Sharpshooter_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Sharpshooter_F: I_G_Sharpshooter_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_base_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_1_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_2_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_3_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_5_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_6_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_7_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Para_8_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_1_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_2_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_3_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_4_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_7_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Bandit_8_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "MiniGrenade", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_Camo_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Pilot_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Helipilot_F: I_C_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_C_Soldier_base_unarmed_F: I_C_Soldier_Para_1_F
		{
			magazines[] = {STANDARD_MAGS(green)};
			respawnMagazines[] = {STANDARD_MAGS(green)};
			items[] = {STANDARD_ITEMS};
		};
		class I_Fighter_Pilot_F: I_pilot_F
		{
			magazines[] = {STANDARD_MAGS(green), "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellOrange"};
			respawnMagazines[] = {STANDARD_MAGS(green), "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShellOrange"};
			items[] = {STANDARD_ITEMS};
		};
		class I_soldier_UAV_06_F: I_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_soldier_UAV_06_medical_F: I_soldier_UAV_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_soldier_mine_F: I_Soldier_exp_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Story_Guerilla_01_F: B_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_9x21_Mag", "MiniGrenade"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_9x21_Mag", "MiniGrenade"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Story_Officer_01_F: I_officer_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSMineDispenser_Mag", "APERSMineDispenser_Mag", "APERSMineDispenser_Mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag9Rnd_45ACP_Mag9Rnd_45ACP_Mag9Rnd_45ACP_Mag", "APERSMineDispenser_Mag", "APERSMineDispenser_Mag", "APERSMineDispenser_Mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_infantry_msv_base: SoldierGB
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_rifleman: rhs_infantry_msv_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_LAT: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_RShG2: rhs_msv_LAT
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rshg2_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rshg2_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_grenadier: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_arifleman: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_machinegunner: rhs_msv_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_machinegunner_assistant: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_grenadier_rpg: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_marksman: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_efreitor: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_sergeant: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_junior_sergeant: rhs_msv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_officer_armored: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_officer: rhs_msv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_at: rhs_msv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_aa: rhs_msv_at
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_engineer: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_medic: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_driver_armored: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_driver: rhs_msv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_crew: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_armoredcrew: rhs_msv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_combatcrew: rhs_msv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_crew_commander: rhs_msv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot_base: rhs_infantry_msv_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot_tan_base: rhs_pilot_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot: rhs_pilot_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot_tan: rhs_pilot_tan_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot_combat_heli: rhs_pilot_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_pilot_transport_heli: rhs_pilot_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_rifleman: rhs_msv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_LAT: rhs_msv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_RShG2: rhs_msv_RShG2
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_grenadier: rhs_msv_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_rifleman_patchless: rhs_msv_emr_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_mflora_rifleman_patchless: rhs_msv_emr_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_rifleman_patchless: rhs_msv_emr_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_rifleman_patchless_alt: rhs_msv_emr_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_rifleman_m88_patchless: rhs_msv_emr_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_arifleman: rhs_msv_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_machinegunner: rhs_msv_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_machinegunner_assistant: rhs_msv_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_grenadier_rpg: rhs_msv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_strelok_rpg_assist: rhs_msv_strelok_rpg_assist
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_marksman: rhs_msv_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_efreitor: rhs_msv_emr_grenadier
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rdg2_white", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rdg2_white", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_sergeant: rhs_msv_emr_grenadier
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_junior_sergeant: rhs_msv_emr_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_officer_armored: rhs_msv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_officer: rhs_msv_emr_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_at: rhs_msv_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_aa: rhs_msv_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_engineer: rhs_msv_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_medic: rhs_msv_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_driver_armored: rhs_msv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_driver: rhs_msv_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_crew: rhs_msv_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_armoredcrew: rhs_msv_armoredcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_combatcrew: rhs_msv_combatcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_msv_emr_crew_commander: rhs_msv_crew_commander
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_rifleman: rhs_msv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_rifleman_asval: rhs_mvd_izlom_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_rifleman_LAT: rhs_mvd_izlom_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_rpg26_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_rpg26_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_grenadier_rpg: rhs_mvd_izlom_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_arifleman: rhs_mvd_izlom_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_machinegunner: rhs_mvd_izlom_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_marksman: rhs_mvd_izlom_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_marksman_vss: rhs_mvd_izlom_rifleman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_efreitor: rhs_mvd_izlom_rifleman_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_mvd_izlom_sergeant: rhs_mvd_izlom_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_infantry_vdv_base: rhs_infantry_msv_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_rifleman: rhs_infantry_vdv_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_rifleman_alt: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_rifleman_lite: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_LAT: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_RShG2: rhs_vdv_LAT
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rshg2_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rshg2_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_grenadier: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_grenadier_alt: rhs_vdv_rifleman_alt
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_rifleman_asval: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_arifleman: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_machinegunner: rhs_vdv_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_machinegunner_assistant: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_marksman: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_marksman_asval: rhs_vdv_rifleman_asval
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_20rnd_9x39mm_SP5", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_efreitor: rhs_vdv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_sergeant: rhs_vdv_LAT
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_rpg26_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_junior_sergeant: rhs_vdv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_officer_armored: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_officer: rhs_vdv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_grenadier_rpg: rhs_vdv_grenadier
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_rpg7_PG7VL_mag"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_at: rhs_vdv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_aa: rhs_vdv_at
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_9k38_rocket"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_9k38_rocket"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_strelok_rpg_assist: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_nspn_red"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_nspn_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_medic: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_engineer: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_driver_armored: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_driver: rhs_vdv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_crew: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_armoredcrew: rhs_vdv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_combatcrew: rhs_vdv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_crew_commander: rhs_vdv_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_infantry_vdv_des_base: rhs_infantry_vdv_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_rifleman: rhs_infantry_vdv_des_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_rgn", "rhs_mag_rgn"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_rifleman_lite: rhs_vdv_des_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_emr_des_rifleman_patchless: rhs_vdv_des_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_LAT: rhs_vdv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_RShG2: rhs_vdv_RShG2
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_grenadier: rhs_vdv_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_rifleman_asval: rhs_vdv_rifleman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_arifleman: rhs_vdv_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_machinegunner: rhs_vdv_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_machinegunner_assistant: rhs_vdv_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_marksman: rhs_vdv_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_marksman_asval: rhs_vdv_marksman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_efreitor: rhs_vdv_efreitor
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_sergeant: rhs_vdv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_junior_sergeant: rhs_vdv_junior_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_officer_armored: rhs_vdv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_officer: rhs_vdv_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_grenadier_rpg: rhs_vdv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_at: rhs_vdv_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_aa: rhs_vdv_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_medic: rhs_vdv_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_engineer: rhs_vdv_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_driver_armored: rhs_vdv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_driver: rhs_vdv_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_crew: rhs_vdv_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_armoredcrew: rhs_vdv_armoredcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_combatcrew: rhs_vdv_combatcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_des_crew_commander: rhs_vdv_crew_commander
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_gorka_r_y_rifleman: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_gorka_r_g_rifleman: rhs_vdv_gorka_r_y_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_rifleman: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_rifleman_lite: rhs_vdv_flora_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_efreitor: rhs_vdv_efreitor
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_grenadier: rhs_vdv_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_machinegunner: rhs_vdv_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_at: rhs_vdv_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_aa: rhs_vdv_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_marksman: rhs_vdv_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_officer_armored: rhs_vdv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_officer: rhs_vdv_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_sergeant: rhs_vdv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_junior_sergeant: rhs_vdv_junior_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_engineer: rhs_vdv_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_driver_armored: rhs_vdv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_driver: rhs_vdv_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_medic: rhs_vdv_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_LAT: rhs_vdv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_RShG2: rhs_vdv_RShG2
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_crew: rhs_vdv_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_crew_commander: rhs_vdv_crew_commander
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_armoredcrew: rhs_vdv_armoredcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_flora_combatcrew: rhs_vdv_combatcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_rifleman: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_rifleman_lite: rhs_vdv_mflora_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_efreitor: rhs_vdv_efreitor
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_grenadier: rhs_vdv_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_grenadier_rpg: rhs_vdv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_machinegunner: rhs_vdv_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_at: rhs_vdv_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_aa: rhs_vdv_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_marksman: rhs_vdv_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_officer_armored: rhs_vdv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_officer: rhs_vdv_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_sergeant: rhs_vdv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_junior_sergeant: rhs_vdv_junior_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_engineer: rhs_vdv_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_driver_armored: rhs_vdv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_driver: rhs_vdv_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_medic: rhs_vdv_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_LAT: rhs_vdv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_RShG2: rhs_vdv_RShG2
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_crew: rhs_vdv_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_crew_commander: rhs_vdv_crew_commander
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_armoredcrew: rhs_vdv_armoredcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_mflora_combatcrew: rhs_vdv_combatcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman: rhs_vdv_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_l: rhs_vdv_recon_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_akms: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_ak103: rhs_vdv_recon_rifleman_akms
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_lat: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_grenadier: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VG40TB", "rhs_VG40TB", "rhs_VG40SZ", "rhs_VG40OP_red", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VG40TB", "rhs_VG40TB", "rhs_VG40SZ", "rhs_VG40OP_red", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_asval: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_arifleman: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_machinegunner_assistant: rhs_vdv_recon_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_efreitor: rhs_vdv_recon_rifleman_lat
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_sergeant: rhs_vdv_recon_rifleman_lat
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_rpg26_mag", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_officer_armored: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_officer: rhs_vdv_recon_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_marksman: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_marksman_asval: rhs_vdv_recon_marksman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_marksman_vss: rhs_vdv_recon_marksman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_medic: rhs_vdv_recon_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_scout: rhs_vdv_recon_rifleman
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_AK_green", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_AK_green", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_rifleman_scout_akm: rhs_vdv_recon_rifleman_akms
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_grenadier_scout: rhs_vdv_recon_rifleman_scout_akm
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VG40TB", "rhs_VG40TB", "rhs_VG40SZ", "rhs_VG40OP_red", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VG40TB", "rhs_VG40TB", "rhs_VG40SZ", "rhs_VG40OP_red", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vdv_recon_arifleman_scout: rhs_vdv_recon_rifleman_scout
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_rifleman: rhs_vdv_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_rifleman_subdued: rhs_vmf_flora_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_rifleman_lite: rhs_vmf_flora_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_efreitor: rhs_vdv_efreitor
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_grenadier: rhs_vdv_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_machinegunner: rhs_vdv_machinegunner
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_at: rhs_vdv_at
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_aa: rhs_vdv_aa
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_marksman: rhs_vdv_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_officer_armored: rhs_vdv_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_officer: rhs_vdv_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_sergeant: rhs_vdv_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_junior_sergeant: rhs_vdv_junior_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_engineer: rhs_vdv_engineer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_driver_armored: rhs_vdv_driver_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_driver: rhs_vdv_driver
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_medic: rhs_vdv_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_LAT: rhs_vdv_LAT
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_RShG2: rhs_vdv_RShG2
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_crew: rhs_vdv_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_crew_commander: rhs_vdv_crew_commander
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_armoredcrew: rhs_vdv_armoredcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_flora_combatcrew: rhs_vdv_combatcrew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman: rhs_vdv_recon_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_l: rhs_vdv_recon_rifleman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_akms: rhs_vdv_recon_rifleman_akms
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_fakel", "rhs_mag_fakel", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_lat: rhs_vdv_recon_rifleman_lat
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_grenadier: rhs_vdv_recon_grenadier
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_asval: rhs_vdv_recon_rifleman_asval
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_arifleman: rhs_vdv_recon_arifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_machinegunner_assistant: rhs_vdv_recon_machinegunner_assistant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_efreitor: rhs_vdv_recon_efreitor
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_sergeant: rhs_vdv_recon_sergeant
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_officer_armored: rhs_vdv_recon_officer_armored
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_officer: rhs_vdv_recon_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_marksman: rhs_vdv_recon_marksman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_marksman_vss: rhs_vdv_recon_marksman_vss
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_medic: rhs_vdv_recon_medic
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_scout: rhs_vdv_recon_rifleman_scout
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_rifleman_scout_akm: rhs_vdv_recon_rifleman_scout_akm
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_grenadier_scout: rhs_vdv_recon_grenadier_scout
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_vmf_recon_arifleman_scout: rhs_vdv_recon_arifleman_scout
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_rva_crew: rhs_infantry_msv_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rdg2_white", "rhs_mag_nspd"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_rva_crew_armored: rhs_rva_crew
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_rva_crew_officer: rhs_rva_crew
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_rdg2_white", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_rva_crew_officer_armored: rhs_rva_crew_officer
		{
			items[] = {STANDARD_ITEMS};
		};
		class fsg_gorka_base_snw: rhs_vdv_gorka_r_g_rifleman
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_ins_base: I_G_Soldier_F
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgn", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgn", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_lite_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_F2: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_F3: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rgn", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rgn", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_AT_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg26_mag", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg26_mag", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_GL_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_TL_F: rhs_g_Soldier_GL_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_M_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_AR_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn", "rhs_mag_rdg2_black", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_100Rnd_762x54mmR", "rhs_mag_rgn", "rhs_mag_rdg2_black", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_AAR_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_LAT_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_AAT_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_SL_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_engineer_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_exp_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Soldier_AA_F: rhs_ins_base
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9k38_rocket", "rhs_mag_rdg2_black"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_9k38_rocket", "rhs_mag_rdg2_black"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_medic_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_Crew_F: rhs_ins_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_uniform1_base: SoldierGB
		{
			magazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			respawnMagazines[] = {STANDARD_MAGS(green), "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_uniform2_base: rhs_g_uniform1_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_uniform3_base: rhs_g_uniform1_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_uniform4_base: rhs_g_uniform1_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class rhs_g_uniform5_base: rhs_g_uniform1_base
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_G_Soldier_LAT2_F: I_G_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MRAWS_HEAT_F"};
			respawnmagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MRAWS_HEAT_F"};
			items[] = {STANDARD_ITEMS};
		};
		class B_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class O_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
		{
			items[] = {STANDARD_ITEMS};
		};
		class I_Soldier_LAT2_F: I_Soldier_base_F
		{
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MRAWS_HEAT_F"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MRAWS_HEAT_F"};
			items[] = {STANDARD_ITEMS};
		};
		class I_Story_Crew_F: I_crew_F
		{
			items[] = {STANDARD_ITEMS};
			magazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellGreen"};
			respawnMagazines[] = {STANDARD_MAGS(green), "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellGreen", "SmokeShellGreen"};
		};
};
