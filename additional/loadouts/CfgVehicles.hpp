//DO NOT EDIT
//THIS IS A GENERATED FILE

class CfgVehicles {
  class SoldierGB;
  class B_G_Soldier_F;
  class O_G_Soldier_F;
  class I_G_Soldier_F;
  class I_Soldier_02_F;
  class I_Soldier_diver_base_F;
  class I_Soldier_sniper_base_F;
  class SoldierEB;
  class O_Soldier_F;
  class O_Soldier_diver_base_F;
  class O_Soldier_sniper_base_F;
  class O_Soldier_recon_base;
  class O_Soldier_Urban_base;
  class SoldierWB;
  class rhsusf_army_ocp_rifleman_1stcav;
  class rhsusf_army_ocp_rifleman_10th;
  class rhsusf_army_ocp_rifleman_m4;
  class rhsusf_army_ocp_rifleman_m16;
  class rhsusf_army_ocp_rifleman_m590;
  class rhsusf_army_ocp_riflemanl;
  class rhsusf_army_ocp_autoriflemana;
  class rhsusf_army_ocp_machinegunnera;
  class rhsusf_army_ocp_fso;
  class rhsusf_army_ocp_aa;
  class rhsusf_army_ocp_uav;
  class rhsusf_army_ocp_combatcrewman;
  class rhsusf_army_ocp_rifleman_82nd;
  class rhsusf_army_ocp_rifleman_101st;
  class rhsusf_usmc_lar_marpat_wd_combatcrewman;
  class rhsusf_usmc_recon_marpat_wd_rifleman;
  class rhsusf_socom_mc_uniform;
  class rhsusf_socom_g3_m81_uniform;
  class rhsusf_usmc_marpat_wd_rifleman_m4;
  class I_officer_F;
  class C_IDAP_Man_Base_F;
  class C_Driver_1_F;
  class Civilian_F;
  class rhs_msv_emr_grenadier;
  class rhs_infantry_vdv_base;
  class rhs_vdv_at;
  class rhs_infantry_vdv_des_base;
  class rhs_vdv_recon_rifleman_scout_akm;
  class rhs_vdv_recon_officer_armored;
  class rhs_vdv_recon_marksman_vss;
  class O_officer_F;
  class I_crew_F;
  class I_G_Soldier_base_F: SoldierGB {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'HandGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'HandGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_G_engineer_F: I_G_Soldier_base_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellRed', 'SmokeShellBlue', 'Chemlight_blue', 'Chemlight_blue'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'MiniGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellRed', 'SmokeShellBlue', 'Chemlight_blue', 'Chemlight_blue'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_G_Soldier_exp_F: I_G_Soldier_base_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'HandGrenade', 'MiniGrenade', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'HandGrenade', 'MiniGrenade', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class B_G_engineer_F: I_G_engineer_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_G_engineer_F: I_G_engineer_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class B_G_Soldier_exp_F: I_G_Soldier_exp_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_G_Soldier_exp_F: I_G_Soldier_exp_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class B_G_Soldier_universal_F: B_G_Soldier_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_G_Soldier_universal_F: O_G_Soldier_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_G_Soldier_universal_F: I_G_Soldier_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_G_Story_Protagonist_F: B_G_Soldier_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', '1Rnd_HE_Grenade_shell', '1Rnd_HE_Grenade_shell', '1Rnd_HE_Grenade_shell', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue', '1Rnd_Smoke_Grenade_shell', '1Rnd_Smoke_Grenade_shell', '1Rnd_SmokeGreen_Grenade_shell', '1Rnd_SmokeRed_Grenade_shell', '1Rnd_SmokeBlue_Grenade_shell'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', '1Rnd_HE_Grenade_shell', '1Rnd_HE_Grenade_shell', '1Rnd_HE_Grenade_shell', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_blue', 'Chemlight_blue', '1Rnd_Smoke_Grenade_shell', '1Rnd_Smoke_Grenade_shell', '1Rnd_SmokeGreen_Grenade_shell', '1Rnd_SmokeRed_Grenade_shell', '1Rnd_SmokeBlue_Grenade_shell'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_Soldier_base_F: SoldierGB {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_Soldier_exp_F: I_Soldier_02_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_engineer_F: I_Soldier_base_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_diver_exp_F: I_Soldier_diver_base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_Spotter_F: I_Soldier_sniper_base_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'I_IR_Grenade', 'I_IR_Grenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'I_IR_Grenade', 'I_IR_Grenade', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class I_Sniper_F: I_Soldier_sniper_base_F {
    magazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSTripMine_Wire_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSTripMine_Wire_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class O_Soldier_base_F: SoldierEB {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_soldier_exp_F: O_Soldier_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_engineer_F: O_Soldier_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_Soldier_universal_F: O_Soldier_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_diver_exp_F: O_Soldier_diver_base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_spotter_F: O_Soldier_sniper_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'O_IR_Grenade', 'O_IR_Grenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'O_IR_Grenade', 'O_IR_Grenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class O_sniper_F: O_Soldier_sniper_base_F {
    magazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_APDS_Mag', '5Rnd_127x108_APDS_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_APDS_Mag', '5Rnd_127x108_APDS_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class O_recon_exp_F: O_Soldier_recon_base {
    magazines[] = {'16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'MiniGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'MiniGrenade', 'MiniGrenade', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_soldierU_exp_F: O_Soldier_Urban_base {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'APERSMine_Range_Mag', 'SmokeShell', 'SmokeShellRed', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_engineer_U_F: O_Soldier_Urban_base {
    magazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '30Rnd_65x39_caseless_green', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'HandGrenade', 'HandGrenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_Protagonist_VR_F: O_Soldier_base_F {
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class I_Protagonist_VR_F: I_Soldier_base_F {
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_ghillie_base_F: O_Soldier_sniper_base_F {
    magazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_APDS_Mag', '5Rnd_127x108_APDS_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_APDS_Mag', '5Rnd_127x108_APDS_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class I_ghillie_base_F: I_Soldier_sniper_base_F {
    magazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSTripMine_Wire_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    respawnMagazines[] = {'5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '5Rnd_127x108_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSTripMine_Wire_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'SmokeShell', 'SmokeShellGreen', 'SmokeShellOrange', 'SmokeShellPurple', 'Chemlight_green', 'Chemlight_green'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class TBan_Fighter1: O_Soldier_base_F {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Fighter1NH: O_Soldier_base_F {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Fighter2: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter2NH: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter3: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter3NH: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter4: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter5: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter6: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Fighter6NH: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Warlord: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class Haji_Matin: TBan_Fighter1 {
    magazines[] = {'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit: TBan_Fighter1 {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit1NH: TBan_Fighter1 {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit2: TBan_Fighter1 {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Recruit2NH: TBan_Fighter1 {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {};
    respawnItems[] = {};
  };
  class TBan_Recruit3: TBan_Fighter1 {
    magazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit3NH: TBan_Fighter1 {
    magazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit4: TBan_Fighter1 {
    magazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_9x18_12_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit5: TBan_Fighter1 {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit6: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade', 'rhs_rpg7_PG7VL_mag'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade', 'rhs_rpg7_PG7VL_mag'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class TBan_Recruit6NH: TBan_Fighter1 {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade', 'rhs_rpg7_PG7VL_mag'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'HandGrenade', 'HandGrenade', 'rhs_rpg7_PG7VL_mag'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhsusf_infantry_army_base: SoldierWB {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
  };
  class rhsusf_army_ocp_rifleman: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_riflemanat: rhsusf_army_ocp_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_m136_mag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_m136_mag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_grenadier: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'HandGrenade'};
  };
  class rhsusf_army_ocp_autorifleman: rhsusf_infantry_army_base {
    magazines[] = {'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_machinegunner: rhsusf_army_ocp_autorifleman {
    magazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade'};
  };
  class rhsusf_army_ocp_marksman: rhsusf_infantry_army_base {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'HandGrenade'};
  };
  class rhsusf_army_ocp_officer: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellPurple', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellPurple', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_army_ocp_squadleader: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellRed', 'SmokeShellPurple', 'SmokeShellYellow', 'HandGrenade', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellRed', 'SmokeShellPurple', 'SmokeShellYellow', 'HandGrenade', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_army_ocp_teamleader: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellPurple', 'SmokeShellYellow', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellPurple', 'SmokeShellYellow', 'HandGrenade'};
  };
  class rhsusf_army_ocp_jfo: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhs_mag_M585_white', 'rhs_mag_M715_green', 'rhs_mag_M661_green', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple', 'Chemlight_green', 'I_IR_Grenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhs_mag_M585_white', 'rhs_mag_M715_green', 'rhs_mag_M661_green', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple', 'Chemlight_green', 'I_IR_Grenade'};
  };
  class rhsusf_army_ocp_javelin: rhsusf_army_ocp_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_fgm148_magazine_AT', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_fgm148_magazine_AT', 'HandGrenade'};
  };
  class rhsusf_army_ocp_javelin_assistant: rhsusf_army_ocp_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'HandGrenade'};
  };
  class rhsusf_army_ocp_maaws: rhsusf_army_ocp_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_maaws_HEAT', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_maaws_HEAT', 'HandGrenade'};
  };
  class rhsusf_army_ocp_medic: rhsusf_army_ocp_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed'};
  };
  class rhsusf_army_ocp_engineer: rhsusf_army_ocp_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellRed'};
  };
  class rhsusf_army_ocp_explosives: rhsusf_army_ocp_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'Chemlight_green', 'Chemlight_green', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'Chemlight_green', 'Chemlight_green', 'SmokeShellRed'};
  };
  class rhsusf_army_ocp_sniper: rhsusf_army_ocp_marksman {
    magazines[] = {'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_5Rnd_300winmag_xm2010', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_army_ocp_sniper_m24sws: rhsusf_army_ocp_sniper {
    magazines[] = {'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m62_Mag', 'rhsusf_5Rnd_762x51_m62_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m993_Mag', 'rhsusf_5Rnd_762x51_m62_Mag', 'rhsusf_5Rnd_762x51_m62_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_army_ocp_sniper_m107: rhsusf_army_ocp_sniper {
    magazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_army_ocp_crewman: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_army_ocp_driver: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellWhite', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellWhite', 'SmokeShellRed'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhsusf_army_ocp_driver_armored: rhsusf_army_ocp_driver {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
  };
  class rhsusf_army_ocp_helipilot: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhsusf_patrolcap_ocp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhsusf_patrolcap_ocp'};
  };
  class rhsusf_army_ocp_helicrew: rhsusf_army_ocp_helipilot {
    magazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed'};
    respawnMagazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed'};
  };
  class rhsusf_army_ucp_rifleman_1stcav: rhsusf_army_ocp_rifleman_1stcav {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman_10th: rhsusf_army_ocp_rifleman_10th {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman_m4: rhsusf_army_ocp_rifleman_m4 {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman_m16: rhsusf_army_ocp_rifleman_m16 {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman_m590: rhsusf_army_ocp_rifleman_m590 {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_riflemanl: rhsusf_army_ocp_riflemanl {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_riflemanat: rhsusf_army_ocp_riflemanat {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_grenadier: rhsusf_army_ocp_grenadier {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_autorifleman: rhsusf_army_ocp_autorifleman {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_autoriflemana: rhsusf_army_ocp_autoriflemana {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_machinegunner: rhsusf_army_ocp_machinegunner {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_machinegunnera: rhsusf_army_ocp_machinegunnera {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_officer: rhsusf_army_ocp_officer {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_teamleader: rhsusf_army_ocp_teamleader {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_jfo: rhsusf_army_ocp_jfo {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_fso: rhsusf_army_ocp_fso {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_javelin: rhsusf_army_ocp_javelin {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_javelin_assistant: rhsusf_army_ocp_javelin_assistant {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_maaws: rhsusf_army_ocp_maaws {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_aa: rhsusf_army_ocp_aa {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_uav: rhsusf_army_ocp_uav {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_engineer: rhsusf_army_ocp_engineer {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_explosives: rhsusf_army_ocp_explosives {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_sniper: rhsusf_army_ocp_sniper {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_sniper_m24sws: rhsusf_army_ocp_sniper_m24sws {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_sniper_m107: rhsusf_army_ocp_sniper_m107 {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_crewman: rhsusf_army_ocp_crewman {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_army_ucp_combatcrewman: rhsusf_army_ocp_combatcrewman {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_army_ucp_driver: rhsusf_army_ocp_driver {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_driver_armored: rhsusf_army_ocp_driver_armored {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_helipilot: rhsusf_army_ocp_helipilot {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_helicrew: rhsusf_army_ocp_helicrew {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ocp_arb_rifleman: rhsusf_army_ocp_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellWhite', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellWhite', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_arb_riflemanat: rhsusf_army_ocp_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_m136_mag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_m136_mag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_arb_maaws: rhsusf_army_ocp_maaws {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_maaws_HEAT', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_maaws_HEAT', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_arb_autorifleman: rhsusf_army_ocp_autorifleman {
    magazines[] = {'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'rhsusf_100Rnd_556x45_soft_pouch', 'HandGrenade'};
  };
  class rhsusf_army_ocp_arb_marksman: rhsusf_army_ocp_marksman {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'rhsusf_20Rnd_762x51_m62_Mag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_army_ocp_arb_squadleader: rhsusf_army_ocp_squadleader {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellYellow', 'SmokeShellPurple', 'ACE_M84', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_green'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellYellow', 'SmokeShellPurple', 'ACE_M84', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_green'};
  };
  class rhsusf_army_ocp_arb_teamleader: rhsusf_army_ocp_teamleader {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellYellow', 'SmokeShellPurple', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_green'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'SmokeShellYellow', 'SmokeShellPurple', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_green'};
  };
  class rhsusf_army_ucp_rifleman_82nd: rhsusf_army_ocp_rifleman_82nd {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_army_ucp_rifleman_101st: rhsusf_army_ocp_rifleman_101st {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ucp'};
  };
  class rhsusf_infantry_usmc_base: rhsusf_infantry_army_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_usmc_marpat_wd_rifleman: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_riflemanat: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade', 'rhs_m136_mag'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade', 'rhs_m136_mag'};
  };
  class rhsusf_usmc_marpat_wd_rifleman_law: rhsusf_usmc_marpat_wd_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade', 'rhs_m72a7_mag'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade', 'HandGrenade', 'rhs_m72a7_mag'};
  };
  class rhsusf_usmc_marpat_wd_rifleman_m590: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'rhsusf_8Rnd_00Buck', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_grenadier: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE'};
  };
  class rhsusf_usmc_marpat_wd_autorifleman: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_autorifleman_m249: rhsusf_usmc_marpat_wd_autorifleman {
    magazines[] = {'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_machinegunner: rhsusf_usmc_marpat_wd_autorifleman {
    magazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_officer: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen'};
  };
  class rhsusf_usmc_marpat_wd_squadleader: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'Chemlight_red', 'Chemlight_red', 'HandGrenade', 'SmokeShellWhite', 'SmokeShellPurple', 'SmokeShellYellow', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'Chemlight_red', 'Chemlight_red', 'HandGrenade', 'SmokeShellWhite', 'SmokeShellPurple', 'SmokeShellYellow', 'SmokeShellRed'};
  };
  class rhsusf_usmc_marpat_wd_teamleader: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'SmokeShellYellow', 'SmokeShellPurple', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'SmokeShellYellow', 'SmokeShellPurple', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_jfo: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'Chemlight_green', 'Chemlight_red', 'I_IR_Grenade', 'I_IR_Grenade', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'Chemlight_green', 'Chemlight_red', 'I_IR_Grenade', 'I_IR_Grenade', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
  };
  class rhsusf_usmc_marpat_wd_fso: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'SmokeShellPurple'};
  };
  class rhsusf_usmc_marpat_wd_smaw: rhsusf_usmc_marpat_wd_riflemanat {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_HEDP', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_SR', 'rhs_mag_smaw_HEDP', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_javelin: rhsusf_usmc_marpat_wd_smaw {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_fgm148_magazine_AT', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_fgm148_magazine_AT', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_javelin_assistant: rhsusf_usmc_marpat_wd_smaw {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_stinger: rhsusf_usmc_marpat_wd_smaw {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_fim92_mag', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_fim92_mag', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_engineer: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_explosives: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'ClaymoreDirectionalMine_Remote_Mag', 'Chemlight_green', 'Chemlight_green', 'SmokeShellRed'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'ClaymoreDirectionalMine_Remote_Mag', 'Chemlight_green', 'Chemlight_green', 'SmokeShellRed'};
  };
  class rhsusf_usmc_marpat_wd_uav: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_marksman: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_usmc_marpat_wd_spotter: rhsusf_usmc_marpat_wd_marksman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellWhite', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_sniper: rhsusf_usmc_marpat_wd_marksman {
    magazines[] = {'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_10Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_usmc_marpat_wd_sniper_m110: rhsusf_usmc_marpat_wd_sniper {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_usmc_marpat_wd_sniper_M107: rhsusf_usmc_marpat_wd_sniper {
    magazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_usmc_marpat_wd_crewman: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_usmc_marpat_wd_driver: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellRed', 'SmokeShellWhite', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'SmokeShellRed', 'SmokeShellWhite', 'HandGrenade'};
  };
  class rhsusf_usmc_marpat_wd_helipilot: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
  };
  class rhsusf_usmc_marpat_wd_helicrew: rhsusf_usmc_marpat_wd_helipilot {
    magazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'HandGrenade'};
    respawnMagazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite', 'HandGrenade'};
  };
  class rhsusf_usmc_lar_marpat_wd_rifleman: rhsusf_usmc_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_lar_marpat_wd_riflemanat: rhsusf_usmc_lar_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_m136_mag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_m136_mag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_lar_marpat_wd_autorifleman: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade'};
  };
  class rhsusf_usmc_lar_marpat_wd_squadleader: rhsusf_usmc_lar_marpat_wd_rifleman {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'HandGrenade', 'HandGrenade', 'SmokeShellWhite', 'SmokeShellRed', 'SmokeShellGreen'};
  };
  class rhsusf_usmc_lar_marpat_wd_teamleader: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M585_white', 'rhs_mag_M585_white', 'rhs_mag_M585_white', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M585_white', 'rhs_mag_M585_white', 'rhs_mag_M585_white', 'HandGrenade'};
  };
  class rhsusf_usmc_lar_marpat_wd_marksman: rhsusf_usmc_lar_marpat_wd_rifleman {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellWhite'};
  };
  class rhsusf_usmc_lar_marpat_wd_crewman: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellWhite'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_usmc_lar_marpat_wd_machinegunner: rhsusf_usmc_lar_marpat_wd_combatcrewman {
    magazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'HandGrenade', 'HandGrenade', 'SmokeShellWhite'};
  };
  class rhsusf_infantry_usmc_recon_base: rhsusf_infantry_usmc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14'};
  };
  class rhsusf_usmc_recon_marpat_wd_rifleman_at: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red', 'rhs_m136_mag'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red', 'rhs_m136_mag'};
  };
  class rhsusf_usmc_recon_marpat_wd_grenadier_m32: rhsusf_usmc_recon_marpat_wd_rifleman {
    magazines[] = {'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M714_white', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M433_HEDP', 'rhsusf_mag_6Rnd_M714_white', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_machinegunner: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_50Rnd_762x51', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner {
    magazines[] = {'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_100Rnd_556x45_M855_soft_pouch', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_marksman: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_sniper_M107: rhsusf_usmc_recon_marpat_wd_marksman {
    magazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_officer: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'ACE_M84', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_usmc_recon_marpat_wd_teamleader: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'SmokeShellWhite', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag', 'rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhsusf_mag_7x45acp_MHP', 'rhs_mag_mk3a2', 'rhs_mag_mk3a2', 'SmokeShellWhite', 'Chemlight_green', 'Chemlight_green', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_infantry_socom_armysf_base: rhsusf_socom_mc_uniform {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'ACE_M14', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'ACE_M14', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'HandGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_14', 'rhsusf_patrolcap_ocp'};
  };
  class rhsusf_infantry_socom_marsoc_base: rhsusf_socom_g3_m81_uniform {
    magazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'ACE_M84', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'ACE_M84', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhs_Booniehat_m81', 'rhsusf_acc_nt4_black'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15', 'rhs_Booniehat_m81', 'rhsusf_acc_nt4_black'};
  };
  class rhsusf_socom_marsoc_cso_cqb: rhsusf_infantry_socom_marsoc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'ACE_M84', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_socom_marsoc_cso_light: rhsusf_socom_marsoc_cso_cqb {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
  };
  class rhsusf_socom_marsoc_cso_grenadier: rhsusf_infantry_socom_marsoc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'SmokeShellWhite', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'rhs_mag_M441_HE', 'SmokeShellWhite', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_socom_marsoc_teamleader: rhsusf_infantry_socom_marsoc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'I_IR_Grenade', 'I_IR_Grenade', 'HandGrenade'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow', 'I_IR_Grenade', 'I_IR_Grenade', 'HandGrenade'};
  };
  class rhsusf_socom_marsoc_jtac: rhsusf_infantry_socom_marsoc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellYellow', 'SmokeShellYellow', 'SmokeShellPurple', 'SmokeShellPurple', 'I_IR_Grenade', 'I_IR_Grenade', 'Laserbatteries', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellYellow', 'SmokeShellYellow', 'SmokeShellPurple', 'SmokeShellPurple', 'I_IR_Grenade', 'I_IR_Grenade', 'Laserbatteries', 'HandGrenade', 'HandGrenade', 'Chemlight_red', 'Chemlight_red', 'Chemlight_red'};
  };
  class rhsusf_socom_marsoc_spotter: rhsusf_infantry_socom_marsoc_base {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
  };
  class rhsusf_socom_marsoc_sniper: rhsusf_socom_marsoc_spotter {
    magazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_20Rnd_762x51_m118_special_Mag', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellWhite'};
  };
  class rhsusf_socom_marsoc_sniper_m107: rhsusf_socom_marsoc_sniper {
    magazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_M33', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_10Rnd_STD_50BMG_mk211', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'rhsusf_mag_17Rnd_9x19_FMJ', 'SmokeShellWhite', 'SmokeShellWhite'};
  };
  class rhsusf_socom_swcc_crewman: rhsusf_infantry_socom_marsoc_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'Chemlight_red', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhs_mag_30Rnd_556x45_M855A1_Stanag', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'Chemlight_red', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhsusf_ANPVS_15'};
  };
  class rhsusf_socom_swcc_officer: rhsusf_socom_swcc_crewman {
    magazines[] = {'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'Chemlight_red', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow'};
    respawnMagazines[] = {'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'rhsusf_mag_15Rnd_9x19_JHP', 'Chemlight_red', 'SmokeShellRed', 'SmokeShellGreen', 'SmokeShellYellow'};
  };
  class rhsusf_navy_sarc_w: rhsusf_infantry_usmc_recon_base {
    magazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhs_mag_mk3a2', 'SmokeShellRed', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhs_mag_30Rnd_556x45_Mk318_Stanag', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhs_mag_mk3a2', 'SmokeShellRed', 'SmokeShellWhite'};
  };
  class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4 {
    magazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellPurple', 'SmokeShellWhite'};
    respawnMagazines[] = {'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'rhsusf_mag_15Rnd_9x19_FMJ', 'SmokeShellPurple', 'SmokeShellWhite'};
  };
  class I_C_Soldier_base_F: I_G_Soldier_base_F {
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_C_Soldier_Camo_F: I_C_Soldier_base_F {
    magazines[] = {'10Rnd_9x21_Mag', '10Rnd_9x21_Mag', '10Rnd_9x21_Mag'};
    respawnMagazines[] = {'10Rnd_9x21_Mag', '10Rnd_9x21_Mag', '10Rnd_9x21_Mag'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_T_Spotter_F: O_spotter_F {
    magazines[] = {'30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'O_IR_Grenade', 'O_IR_Grenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', '16Rnd_9x21_Mag', 'ClaymoreDirectionalMine_Remote_Mag', 'APERSTripMine_Wire_Mag', 'Laserbatteries', 'MiniGrenade', 'MiniGrenade', 'O_IR_Grenade', 'O_IR_Grenade', 'SmokeShell', 'SmokeShellRed', 'SmokeShellOrange', 'SmokeShellYellow', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker'};
  };
  class O_V_Soldier_base_F: O_Soldier_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_V_Soldier_M_hex_F: O_V_Soldier_base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'RPG32_F', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'RPG32_F', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F {
    magazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'Laserbatteries', 'Chemlight_red', 'Chemlight_red'};
    respawnMagazines[] = {'30Rnd_65x39_caseless_green', '10Rnd_50BW_Mag_F', '16Rnd_9x21_Mag', 'Laserbatteries', 'Chemlight_red', 'Chemlight_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_Clacker', 'ACE_DefusalKit'};
  };
  class B_G_Story_Guerilla_01_F: B_G_Soldier_F {
    magazines[] = {'30Rnd_9x21_Mag', 'MiniGrenade'};
    respawnMagazines[] = {'30Rnd_9x21_Mag', 'MiniGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_Story_Officer_01_F: I_officer_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSMineDispenser_Mag', 'APERSMineDispenser_Mag', 'APERSMineDispenser_Mag', 'SmokeShell'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', '9Rnd_45ACP_Mag', 'APERSMineDispenser_Mag', 'APERSMineDispenser_Mag', 'APERSMineDispenser_Mag', 'SmokeShell'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_01_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_02_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_03_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_04_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_05_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_06_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_07_F: C_IDAP_Man_AidWorker_03_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_08_F: C_IDAP_Man_AidWorker_04_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_AidWorker_09_F: C_IDAP_Man_AidWorker_02_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_Man_ConstructionWorker_01_Red_F: C_Driver_1_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_Paramedic_01_base_F: Civilian_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Pilot_01_F: C_IDAP_Man_Base_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_Man_UtilityWorker_01_F: Civilian_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_IDAP_Man_EOD_01_F: C_IDAP_Man_Base_F {
    items[] = {'MineDetector', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'MineDetector', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_Man_UAV_06_medical_F: Civilian_F {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class C_Story_EOD_01_F: C_IDAP_Man_EOD_01_F {
    items[] = {'MineDetector', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'MineDetector', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_infantry_msv_base: SoldierGB {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_rgd5', 'rhs_mag_rgd5', 'rhs_mag_nspn_red'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_rgd5', 'rhs_mag_rgd5', 'rhs_mag_nspn_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_msv_rifleman: rhs_infantry_msv_base {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
  };
  class rhs_msv_LAT: rhs_msv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
  };
  class rhs_msv_RShG2: rhs_msv_LAT {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rshg2_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rshg2_mag'};
  };
  class rhs_msv_arifleman: rhs_msv_rifleman {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade'};
  };
  class rhs_msv_grenadier_rpg: rhs_msv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
  };
  class rhs_msv_sergeant: rhs_msv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_msv_officer_armored: rhs_msv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_msv_emr_sergeant: rhs_msv_emr_grenadier {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class rhs_mvd_izlom_rifleman: rhs_msv_rifleman {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class rhs_mvd_izlom_rifleman_asval: rhs_mvd_izlom_rifleman {
    magazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white'};
    respawnMagazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white'};
  };
  class rhs_mvd_izlom_rifleman_LAT: rhs_mvd_izlom_rifleman {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_rpg26_mag'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_rpg26_mag'};
  };
  class rhs_mvd_izlom_grenadier_rpg: rhs_mvd_izlom_rifleman {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
  };
  class rhs_mvd_izlom_arifleman: rhs_mvd_izlom_rifleman {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade'};
  };
  class rhs_vdv_rifleman: rhs_infantry_vdv_base {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
  };
  class rhs_vdv_rifleman_alt: rhs_vdv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_fieldcap_digi2'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_fieldcap_digi2'};
  };
  class rhs_vdv_LAT: rhs_vdv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
  };
  class rhs_vdv_RShG2: rhs_vdv_LAT {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rshg2_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade', 'rhs_rshg2_mag'};
  };
  class rhs_vdv_grenadier: rhs_vdv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
  };
  class rhs_vdv_grenadier_alt: rhs_vdv_rifleman_alt {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_GRD40_White'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_fieldcap_digi2'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_fieldcap_digi2'};
  };
  class rhs_vdv_rifleman_asval: rhs_vdv_rifleman {
    magazines[] = {'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'MiniGrenade', 'MiniGrenade'};
  };
  class rhs_vdv_arifleman: rhs_vdv_rifleman {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade', 'MiniGrenade'};
  };
  class rhs_vdv_marksman: rhs_vdv_rifleman {
    magazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade'};
  };
  class rhs_vdv_marksman_asval: rhs_vdv_rifleman_asval {
    magazines[] = {'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_20rnd_9x39mm_SP5', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade'};
  };
  class rhs_vdv_sergeant: rhs_vdv_LAT {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'MiniGrenade', 'MiniGrenade', 'rhs_rpg26_mag'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class rhs_vdv_officer_armored: rhs_vdv_rifleman {
    magazines[] = {'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white'};
    respawnMagazines[] = {'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_9x18_8_57N181S', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class rhs_vdv_grenadier_rpg: rhs_vdv_grenadier {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_rpg7_PG7VL_mag'};
  };
  class rhs_vdv_aa: rhs_vdv_at {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_mag_9k38_rocket'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'rhs_mag_9k38_rocket'};
  };
  class rhs_vdv_des_rifleman: rhs_infantry_vdv_des_base {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'MiniGrenade', 'MiniGrenade'};
  };
  class rhs_vdv_recon_rifleman: rhs_vdv_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_AK_green', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_AK_green', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class rhs_vdv_recon_rifleman_akms: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_rifleman_ak103: rhs_vdv_recon_rifleman_akms {
    magazines[] = {'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_30Rnd_762x39mm_89', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_rifleman_lat: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_grenadier: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VG40TB', 'rhs_VG40TB', 'rhs_VG40SZ', 'rhs_VG40OP_red', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VG40TB', 'rhs_VG40TB', 'rhs_VG40SZ', 'rhs_VG40OP_red', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_rifleman_asval: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_arifleman: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_efreitor: rhs_vdv_recon_rifleman_lat {
    magazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_fakel', 'rhs_mag_fakel', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_fakel', 'rhs_mag_fakel', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_sergeant: rhs_vdv_recon_rifleman_lat {
    magazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_fakel', 'rhs_mag_fakel', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_30Rnd_545x39_7N22_AK', 'rhs_rpg26_mag', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_fakel', 'rhs_mag_fakel', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_marksman: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_10Rnd_762x54mmR_7N1', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_marksman_asval: rhs_vdv_recon_marksman {
    magazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_20rnd_9x39mm_SP6', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_rifleman_scout: rhs_vdv_recon_rifleman {
    magazines[] = {'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_AK_green', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_7U1_AK', 'rhs_30Rnd_545x39_AK_green', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_grenadier_scout: rhs_vdv_recon_rifleman_scout_akm {
    magazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm_tracer', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VG40TB', 'rhs_VG40TB', 'rhs_VG40SZ', 'rhs_VG40OP_red', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm_U', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm_tracer', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VOG25', 'rhs_VG40TB', 'rhs_VG40TB', 'rhs_VG40SZ', 'rhs_VG40OP_red', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vdv_recon_arifleman_scout: rhs_vdv_recon_rifleman_scout {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'rhs_100Rnd_762x54mmR', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vmf_recon_rifleman_akms: rhs_vdv_recon_rifleman_akms {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'MiniGrenade', 'rhs_mag_fakel', 'rhs_mag_fakel', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
  };
  class rhs_vmf_recon_efreitor: rhs_vdv_recon_efreitor {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
  };
  class rhs_vmf_recon_sergeant: rhs_vdv_recon_sergeant {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
  };
  class rhs_vmf_recon_officer_armored: rhs_vdv_recon_officer_armored {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
  };
  class rhs_vmf_recon_marksman_vss: rhs_vdv_recon_marksman_vss {
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138', 'rhs_beret_mp1'};
  };
  class rhs_rva_crew: rhs_infantry_msv_base {
    magazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_7N10_AK', 'rhs_30Rnd_545x39_7N10_AK', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_9x19_17', 'rhs_mag_rdg2_white', 'rhs_mag_nspd'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine', 'rhs_1PN138'};
  };
  class O_A_soldier_base_F: O_officer_F {
    magazines[] = {'SmokeShellYellow', 'SmokeShellYellow', 'Chemlight_yellow', 'Chemlight_yellow'};
    respawnMagazines[] = {'SmokeShellYellow', 'SmokeShellYellow', 'Chemlight_yellow', 'Chemlight_yellow'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class O_A_soldier_A_F: O_A_soldier_base_F {
    magazines[] = {'30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', 'SmokeShellYellow', 'SmokeShellYellow', 'Chemlight_yellow', 'Chemlight_yellow'};
    respawnMagazines[] = {'30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', '30Rnd_580x42_Mag_F', 'SmokeShellYellow', 'SmokeShellYellow', 'Chemlight_yellow', 'Chemlight_yellow'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_ins_base: I_G_Soldier_F {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'MiniGrenade', 'rhs_mag_rdg2_black'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'MiniGrenade', 'rhs_mag_rdg2_black'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class rhs_g_Soldier_F3: rhs_ins_base {
    magazines[] = {'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'MiniGrenade', 'rhs_mag_rdg2_black'};
    respawnMagazines[] = {'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'rhs_30Rnd_545x39_AK', 'MiniGrenade', 'rhs_mag_rdg2_black'};
  };
  class rhs_g_Soldier_AR_F: rhs_ins_base {
    magazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade', 'rhs_mag_rdg2_black', 'rhs_mag_rdg2_black'};
    respawnMagazines[] = {'rhs_100Rnd_762x54mmR', 'MiniGrenade', 'rhs_mag_rdg2_black', 'rhs_mag_rdg2_black'};
  };
  class rhs_g_uniform1_base: SoldierGB {
    magazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rgd5', 'rhs_mag_rgd5', 'rhs_mag_nspn_red'};
    respawnMagazines[] = {'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_30Rnd_762x39mm', 'rhs_mag_rgd5', 'rhs_mag_rgd5', 'rhs_mag_nspn_red'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class I_Story_Crew_F: I_crew_F {
    magazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'SmokeShellGreen', 'SmokeShellGreen'};
    respawnMagazines[] = {'30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', '30Rnd_556x45_Stanag', 'SmokeShellGreen', 'SmokeShellGreen'};
    items[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
    respawnItems[] = {'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_fieldDressing', 'ACE_morphine'};
  };
  class AllVehicles;
  class Helicopter_Base_F;
  class Truck_02_base_F;
  class I_Truck_02_transport_F;
  class I_Truck_02_medical_F;
  class C_Boat_Civil_01_F;
  class I_Boat_Armed_01_minigun_F;
  class B_APC_Tracked_01_CRV_F;
  class B_APC_Tracked_01_rcws_F;
  class I_UGV_01_rcws_F;
  class I_UGV_01_F;
  class B_Heli_Light_01_F;
  class O_Heli_Light_02_unarmed_F;
  class O_Heli_Light_02_F;
  class I_Heli_Transport_02_F;
  class ReammoBox_F;
  class Car;
  class Item_Base_F;
  class NATO_Box_Base;
  class EAST_Box_Base;
  class IND_Box_Base;
  class B_AssaultPack_rgr;
  class B_Carryall_mcamo;
  class B_FieldPack_ocamo;
  class B_FieldPack_cbr;
  class B_Carryall_ocamo;
  class B_FieldPack_oucamo;
  class B_Carryall_oucamo;
  class B_Carryall_oli;
  class B_FieldPack_oli;
  class B_TacticalPack_blk;
  class Plane;
  class Tank_F;
  class B_caf_AssaultPack_AR;
  class B_caf_AssaultPack_TW;
  class Heli_Light_01_unarmed_base_F;
  class Boat_F;
  class Ship_F;
  class FloatingStructure_F;
  class B_Truck_01_transport_F;
  class B_AssaultPack_mcamo;
  class B_Kitbag_cbr;
  class B_Kitbag_mcamo;
  class B_Bergen_mcamo;
  class B_AssaultPack_blk;
  class B_G_Offroad_01_armed_F;
  class I_Truck_02_box_F;
  class caf_lav3_base;
  class I_MRAP_03_F;
  class I_MRAP_03_gmg_F;
  class I_MRAP_03_hmg_F;
  class rhs_uaz_dshkm_base;
  class rhs_gaz66_vmf;
  class Truck_03_base_F;
  class FIA_Box_Base_F;
  class CargoNet_01_ammo_base_F;
  class Slingload_01_Base_F;
  class Pod_Heli_Transport_04_base_F;
  class Pod_Heli_Transport_04_crewed_base_F;
  class Box_NATO_Wps_F;
  class LSV_01_light_base_F;
  class LSV_02_armed_base_F;
  class LSV_02_unarmed_base_F;
  class LSV_02_AT_base_F;
  class O_LSV_02_armed_F;
  class O_LSV_02_unarmed_F;
  class B_AssaultPack_tna_F;
  class B_Carryall_ghex_F;
  class B_FieldPack_ghex_F;
  class B_ViperHarness_hex_F;
  class B_ViperHarness_ghex_F;
  class B_Kitbag_rgr;
  class B_FieldPack_khk;
  class Box_NATO_Equip_F;
  class rhsusf_assault_eagleaiii_ocp;
  class rhsusf_assault_eagleaiii_ucp;
  class rhsusf_assault_eagleaiii_coy;
  class rhsusf_falconii_coy;
  class B_Carryall_cbr;
  class rhsusf_falconii;
  class VTOL_Base_F;
  class RHS_AH64_base;
  class RHS_AH1Z_base;
  class RHS_UH60_Base;
  class RHS_UH1_Base;
  class RHS_C130J_Base;
  class Plane_CAS_01_base_F;
  class Truck_01_base_F;
  class rhsusf_hmmwe_base;
  class rhsusf_m998_w_4dr_fulltop;
  class MBT_01_arty_base_F;
  class rhsusf_m113_usarmy_unarmed;
  class Van_02_transport_base_F;
  class Van_02_vehicle_base_F;
  class B_Messenger_Gray_F;
  class B_Messenger_IDAP_F;
  class Items_base_F;
  class rhs_assault_umbts;
  class rhs_medic_bag;
  class B_AssaultPack_ocamo;
  class MBT_04_cannon_base_F;
  class MBT_04_command_base_F;
  class Air: AllVehicles {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Helicopter_Base_H: Helicopter_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
      class _xx_ItemRadio {
        name = "ItemRadio";
        count = 1;
      };
    };
  };
  class Heli_Transport_01_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class sab_UN_Truck_C: Truck_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_Truck_O: I_Truck_02_transport_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_Truck_Medi: I_Truck_02_medical_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_Boat: C_Boat_Civil_01_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_Boat_armed: I_Boat_Armed_01_minigun_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_CRV: B_APC_Tracked_01_CRV_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_Panther: B_APC_Tracked_01_rcws_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_UGV_armed: I_UGV_01_rcws_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_UGV: I_UGV_01_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_bird: B_Heli_Light_01_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_Heli: O_Heli_Light_02_unarmed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_Heli_armed: O_Heli_Light_02_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_Large_Heli: I_Heli_Transport_02_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Heli_Transport_04_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 2;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 4;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class O_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 2;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class B_supplyCrate_F: ReammoBox_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_bipod_01_F_blk {
        name = "bipod_01_F_blk";
        count = 1;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class Car_F: Car {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 3;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 1;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Wheeled_Apc_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Item_FirstAidKit: Item_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 3;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 1;
      };
      class FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Item_Medikit: Item_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class Box_NATO_Support_F: NATO_Box_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_muzzle_snds_H {
        name = "muzzle_snds_H";
        count = 5;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_muzzle_snds_338_black {
        name = "muzzle_snds_338_black";
        count = 2;
      };
      class _xx_muzzle_snds_338_green {
        name = "muzzle_snds_338_green";
        count = 2;
      };
      class _xx_muzzle_snds_338_sand {
        name = "muzzle_snds_338_sand";
        count = 2;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 1;
      };
      class _xx_bipod_01_F_blk {
        name = "bipod_01_F_blk";
        count = 2;
      };
      class _xx_bipod_01_F_mtp {
        name = "bipod_01_F_mtp";
        count = 2;
      };
      class _xx_bipod_01_F_snd {
        name = "bipod_01_F_snd";
        count = 2;
      };
      class _xx_muzzle_snds_H_khk_F {
        name = "muzzle_snds_H_khk_F";
        count = 5;
      };
      class _xx_bipod_01_F_khk {
        name = "bipod_01_F_khk";
        count = 2;
      };
      class _xx_NVGoggles {
        name = "NVGoggles";
        count = 2;
      };
      class _xx_NVGoggles_tna_F {
        name = "NVGoggles_tna_F";
        count = 2;
      };
      class _xx_NVGogglesB_blk_F {
        name = "NVGogglesB_blk_F";
        count = 2;
      };
      class _xx_NVGogglesB_grn_F {
        name = "NVGogglesB_grn_F";
        count = 2;
      };
      class _xx_NVGogglesB_gry_F {
        name = "NVGogglesB_gry_F";
        count = 2;
      };
      class _xx_ACE_muzzle_mzls_H {
        name = "ACE_muzzle_mzls_H";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_B {
        name = "ACE_muzzle_mzls_B";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_01 {
        name = "ACE_muzzle_mzls_smg_01";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_02 {
        name = "ACE_muzzle_mzls_smg_02";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_338 {
        name = "ACE_muzzle_mzls_338";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_93mmg {
        name = "ACE_muzzle_mzls_93mmg";
        count = 5;
      };
      class _xx_ACE_acc_pointer_green {
        name = "ACE_acc_pointer_green";
        count = 4;
      };
      class _xx_ACE_MapTools {
        name = "ACE_MapTools";
        count = 12;
      };
      class _xx_ACE_IR_Strobe_Item {
        name = "ACE_IR_Strobe_Item";
        count = 12;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_Flashlight_MX991 {
        name = "ACE_Flashlight_MX991";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class Box_East_Support_F: EAST_Box_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_muzzle_snds_H {
        name = "muzzle_snds_H";
        count = 5;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_muzzle_snds_93mmg {
        name = "muzzle_snds_93mmg";
        count = 3;
      };
      class _xx_muzzle_snds_93mmg_tan {
        name = "muzzle_snds_93mmg_tan";
        count = 3;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_Laserdesignator_02 {
        name = "Laserdesignator_02";
        count = 1;
      };
      class _xx_bipod_02_F_blk {
        name = "bipod_02_F_blk";
        count = 2;
      };
      class _xx_bipod_02_F_hex {
        name = "bipod_02_F_hex";
        count = 2;
      };
      class _xx_bipod_02_F_tan {
        name = "bipod_02_F_tan";
        count = 2;
      };
      class _xx_muzzle_snds_58_blk_F {
        name = "muzzle_snds_58_blk_F";
        count = 5;
      };
      class _xx_muzzle_snds_58_ghex_F {
        name = "muzzle_snds_58_ghex_F";
        count = 5;
      };
      class _xx_muzzle_snds_65_TI_blk_F {
        name = "muzzle_snds_65_TI_blk_F";
        count = 2;
      };
      class _xx_muzzle_snds_65_TI_hex_F {
        name = "muzzle_snds_65_TI_hex_F";
        count = 2;
      };
      class _xx_muzzle_snds_65_TI_ghex_F {
        name = "muzzle_snds_65_TI_ghex_F";
        count = 2;
      };
      class _xx_NVGoggles_OPFOR {
        name = "NVGoggles_OPFOR";
        count = 2;
      };
      class _xx_O_NVGoggles_hex_F {
        name = "O_NVGoggles_hex_F";
        count = 2;
      };
      class _xx_O_NVGoggles_urb_F {
        name = "O_NVGoggles_urb_F";
        count = 2;
      };
      class _xx_O_NVGoggles_ghex_F {
        name = "O_NVGoggles_ghex_F";
        count = 2;
      };
      class _xx_ACE_muzzle_mzls_H {
        name = "ACE_muzzle_mzls_H";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_B {
        name = "ACE_muzzle_mzls_B";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_01 {
        name = "ACE_muzzle_mzls_smg_01";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_02 {
        name = "ACE_muzzle_mzls_smg_02";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_338 {
        name = "ACE_muzzle_mzls_338";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_93mmg {
        name = "ACE_muzzle_mzls_93mmg";
        count = 5;
      };
      class _xx_ACE_acc_pointer_green {
        name = "ACE_acc_pointer_green";
        count = 4;
      };
      class _xx_ACE_MapTools {
        name = "ACE_MapTools";
        count = 12;
      };
      class _xx_ACE_IR_Strobe_Item {
        name = "ACE_IR_Strobe_Item";
        count = 12;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_Flashlight_KSF1 {
        name = "ACE_Flashlight_KSF1";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class Box_IND_Support_F: IND_Box_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_muzzle_snds_M {
        name = "muzzle_snds_M";
        count = 5;
      };
      class _xx_muzzle_snds_H {
        name = "muzzle_snds_H";
        count = 2;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_Laserdesignator_03 {
        name = "Laserdesignator_03";
        count = 1;
      };
      class _xx_bipod_03_F_blk {
        name = "bipod_03_F_blk";
        count = 3;
      };
      class _xx_bipod_03_F_oli {
        name = "bipod_03_F_oli";
        count = 3;
      };
      class _xx_ACE_muzzle_mzls_H {
        name = "ACE_muzzle_mzls_H";
        count = 1;
      };
      class _xx_ACE_muzzle_mzls_B {
        name = "ACE_muzzle_mzls_B";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_L {
        name = "ACE_muzzle_mzls_L";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_01 {
        name = "ACE_muzzle_mzls_smg_01";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_smg_02 {
        name = "ACE_muzzle_mzls_smg_02";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_338 {
        name = "ACE_muzzle_mzls_338";
        count = 5;
      };
      class _xx_ACE_muzzle_mzls_93mmg {
        name = "ACE_muzzle_mzls_93mmg";
        count = 5;
      };
      class _xx_ACE_acc_pointer_green {
        name = "ACE_acc_pointer_green";
        count = 4;
      };
      class _xx_ACE_MapTools {
        name = "ACE_MapTools";
        count = 12;
      };
      class _xx_ACE_IR_Strobe_Item {
        name = "ACE_IR_Strobe_Item";
        count = 12;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_Flashlight_XL50 {
        name = "ACE_Flashlight_XL50";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class O_supplyCrate_F: B_supplyCrate_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator_02 {
        name = "Laserdesignator_02";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_bipod_02_F_blk {
        name = "bipod_02_F_blk";
        count = 1;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class I_supplyCrate_F: B_supplyCrate_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator_03 {
        name = "Laserdesignator_03";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_bipod_03_F_blk {
        name = "bipod_03_F_blk";
        count = 1;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class IG_supplyCrate_F: ReammoBox_F {
    class TransportItems {
      class _xx_V_Chestrig_oli {
        name = "V_Chestrig_oli";
        count = 4;
      };
      class _xx_V_TacVest_blk {
        name = "V_TacVest_blk";
        count = 4;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_bipod_03_F_oli {
        name = "bipod_03_F_oli";
        count = 2;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class C_supplyCrate_F: ReammoBox_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_LaserDesignator {
        name = "LaserDesignator";
        count = 1;
      };
      class _xx_optic_Holosight {
        name = "optic_Holosight";
        count = 1;
      };
      class _xx_optic_Hamr {
        name = "optic_Hamr";
        count = 1;
      };
      class _xx_optic_SOS {
        name = "optic_SOS";
        count = 1;
      };
      class _xx_optic_NVS {
        name = "optic_NVS";
        count = 1;
      };
      class _xx_optic_TWS {
        name = "optic_TWS";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_bipod_01_F_blk {
        name = "bipod_01_F_blk";
        count = 1;
      };
      class _xx_bipod_01_F_mtp {
        name = "bipod_01_F_mtp";
        count = 1;
      };
      class _xx_bipod_01_F_snd {
        name = "bipod_01_F_snd";
        count = 1;
      };
      class _xx_ACE_Chemlight_Shield {
        name = "ACE_Chemlight_Shield";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class B_AssaultPack_rgr_Medic: B_AssaultPack_rgr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_AssaultPack_rgr_ReconMedic: B_AssaultPack_rgr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_ocamo_Medic: B_FieldPack_ocamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_ocamo_ReconMedic: B_FieldPack_ocamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_cbr_Medic: B_FieldPack_cbr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_cbr_Ammo: B_Carryall_ocamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_oucamo_Medic: B_FieldPack_oucamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_oucamo_Ammo: B_Carryall_oucamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class I_Fieldpack_oli_Ammo: B_Carryall_oli {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class I_Fieldpack_oli_Medic: B_FieldPack_oli {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class G_FieldPack_Medic: B_TacticalPack_blk {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class G_Carryall_Ammo: B_Carryall_oli {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Plane_Base_F: Plane {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
      class _xx_ItemRadio {
        name = "ItemRadio";
        count = 1;
      };
    };
  };
  class MBT_01_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class MBT_02_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class MBT_03_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Tracked_01_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Tracked_02_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Tracked_03_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Van_01_base_F: Truck_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Offroad_02_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class MRAP_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class MRAP_02_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class LSV_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class LSV_02_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Quadbike_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Wheeled_01_base_F: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Wheeled_02_base_F: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class APC_Wheeled_03_base_F: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_CAF_Carryall_Medical: B_Carryall_oucamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class B_RCAF_CrewPack_AR: B_caf_AssaultPack_AR {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class B_RCAF_CrewPACK_TW: B_caf_AssaultPack_TW {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class Heli_Light_01_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Heli_Light_02_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class Heli_Attack_01_base_F: Helicopter_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class Heli_Attack_02_base_F: Helicopter_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class Heli_Transport_02_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class Boat_Armed_01_base_F: Boat_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_medikit {
        name = "medikit";
        count = 1;
      };
    };
  };
  class Rubber_duck_base_F: Boat_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class SDV_01_base_F: Boat_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Boat_Civil_01_base_F: Ship_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class C_Boat_Civil_04_F: FloatingStructure_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_Truck_01_medical_F: B_Truck_01_transport_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_02_box_base_F: Truck_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_02_medical_base_F: Truck_02_box_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_02_Ammo_base_F: Truck_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_02_fuel_base_F: Truck_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Truck_02_MRL_base_F: Truck_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_JTF_TL_ASSAULTPACK: B_AssaultPack_mcamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_CAF_muzzle_snds_556_AR {
        name = "CAF_muzzle_snds_556_AR";
        count = 1;
      };
    };
  };
  class B_JTF_A_ASSAULTPACK: B_Kitbag_cbr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_CAF_muzzle_snds_556_AR {
        name = "CAF_muzzle_snds_556_AR";
        count = 1;
      };
    };
  };
  class B_JTF_MG_Kitbag: B_Kitbag_mcamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_JTF_ASSAULTPACK_EXP: B_Bergen_mcamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_CAF_muzzle_snds_556_AR {
        name = "CAF_muzzle_snds_556_AR";
        count = 1;
      };
    };
  };
  class B_JTF_Carryall_Medical: B_CAF_Carryall_Medical {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_CAF_muzzle_snds_556_AR {
        name = "CAF_muzzle_snds_556_AR";
        count = 1;
      };
    };
  };
  class B_JTF_M_ASSAULTPACK: B_AssaultPack_blk {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class JTF2_Offroad_armed_01: B_G_Offroad_01_armed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 60;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class JTF2_Offroad_armed_02: B_G_Offroad_01_armed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 60;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class CAF_CH146_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 20;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 16;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 8;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 8;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class caf_HLVW_support: I_Truck_02_box_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class caf_lav3_isc: caf_lav3_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 20;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 16;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 8;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 8;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class CAF_TAPV_tw: I_MRAP_03_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class caf_tapv_gl_tw: I_MRAP_03_gmg_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class caf_tapv_50_tw: I_MRAP_03_hmg_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class CAF_TAPV_ar: I_MRAP_03_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class caf_tapv_gl_ar: I_MRAP_03_gmg_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class caf_tapv_50_ar: I_MRAP_03_hmg_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 75;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhs_tigr_base: MRAP_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_1pn93 {
        name = "rhs_acc_1pn93_1";
        count = 1;
      };
    };
  };
  class Tban_O_Offroad_01_F: rhs_uaz_dshkm_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class Tban_O_Transport_01_F: rhs_gaz66_vmf {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class Heli_light_03_base_F: Helicopter_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class UGV_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_Truck_03_repair_F: Truck_03_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_Truck_03_ammo_F: Truck_03_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_Truck_03_fuel_F: Truck_03_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_Truck_03_medical_F: Truck_03_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Box_FIA_Support_F: FIA_Box_Base_F {
    class TransportItems {
      class _xx_Binocular {
        name = "Binocular";
        count = 2;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_optic_ACO_grn {
        name = "optic_ACO_grn";
        count = 5;
      };
      class _xx_optic_MRCO {
        name = "optic_MRCO";
        count = 2;
      };
      class _xx_V_TacVest_blk {
        name = "V_TacVest_blk";
        count = 2;
      };
      class _xx_V_Chestrig_blk {
        name = "V_Chestrig_blk";
        count = 2;
      };
      class _xx_H_Shemag_olive {
        name = "H_Shemag_olive";
        count = 1;
      };
      class _xx_G_Balaclava_blk {
        name = "G_Balaclava_blk";
        count = 1;
      };
      class _xx_G_Bandanna_blk {
        name = "G_Bandanna_blk";
        count = 1;
      };
      class _xx_ACE_acc_pointer_green {
        name = "ACE_acc_pointer_green";
        count = 4;
      };
      class _xx_ACE_MapTools {
        name = "ACE_MapTools";
        count = 12;
      };
      class _xx_ACE_IR_Strobe_Item {
        name = "ACE_IR_Strobe_Item";
        count = 12;
      };
      class _xx_ACE_Flashlight_MX991 {
        name = "ACE_Flashlight_MX991";
        count = 12;
      };
      class _xx_ACE_EarPlugs {
        name = "ACE_EarPlugs";
        count = 12;
      };
    };
  };
  class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {
    class TransportItems {
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_muzzle_snds_H {
        name = "muzzle_snds_H";
        count = 5;
      };
      class _xx_muzzle_snds_H_SW {
        name = "muzzle_snds_H_SW";
        count = 1;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_optic_ACO {
        name = "optic_ACO";
        count = 2;
      };
      class _xx_optic_ACO_smg {
        name = "optic_ACO_smg";
        count = 2;
      };
      class _xx_optic_DMS {
        name = "optic_DMS";
        count = 2;
      };
      class _xx_optic_Hamr {
        name = "optic_Hamr";
        count = 2;
      };
      class _xx_optic_Holosight {
        name = "optic_Holosight";
        count = 2;
      };
      class _xx_optic_LRPS {
        name = "optic_LRPS";
        count = 2;
      };
      class _xx_optic_MRD {
        name = "optic_MRD";
        count = 2;
      };
      class _xx_optic_NVS {
        name = "optic_NVS";
        count = 2;
      };
      class _xx_optic_SOS {
        name = "optic_SOS";
        count = 2;
      };
      class _xx_optic_TWS {
        name = "optic_TWS";
        count = 2;
      };
      class _xx_optic_TWS_MG {
        name = "optic_TWS_MG";
        count = 2;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {
    class TransportItems {
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_muzzle_snds_H {
        name = "muzzle_snds_H";
        count = 5;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_optic_ACO_grn {
        name = "optic_ACO_grn";
        count = 2;
      };
      class _xx_optic_ACO_grn_smg {
        name = "optic_ACO_grn_smg";
        count = 2;
      };
      class _xx_optic_ARCO {
        name = "optic_ARCO";
        count = 2;
      };
      class _xx_optic_DMS {
        name = "optic_DMS";
        count = 2;
      };
      class _xx_optic_LRPS {
        name = "optic_LRPS";
        count = 2;
      };
      class _xx_optic_MRCO {
        name = "optic_MRCO";
        count = 2;
      };
      class _xx_optic_Nightstalker {
        name = "optic_Nightstalker";
        count = 2;
      };
      class _xx_optic_SOS {
        name = "optic_SOS";
        count = 2;
      };
      class _xx_optic_TWS {
        name = "optic_TWS";
        count = 2;
      };
      class _xx_optic_TWS_MG {
        name = "optic_TWS_MG";
        count = 2;
      };
      class _xx_optic_Yorris {
        name = "optic_Yorris";
        count = 2;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {
    class TransportItems {
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 5;
      };
      class _xx_acc_pointer_IR {
        name = "acc_pointer_IR";
        count = 5;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_muzzle_snds_acp {
        name = "muzzle_snds_acp";
        count = 5;
      };
      class _xx_muzzle_snds_b {
        name = "muzzle_snds_b";
        count = 5;
      };
      class _xx_muzzle_snds_H_MG {
        name = "muzzle_snds_H_MG";
        count = 1;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 5;
      };
      class _xx_muzzle_snds_M {
        name = "muzzle_snds_M";
        count = 5;
      };
      class _xx_optic_ACO_grn {
        name = "optic_ACO_grn";
        count = 2;
      };
      class _xx_optic_DMS {
        name = "optic_DMS";
        count = 2;
      };
      class _xx_optic_Holosight {
        name = "optic_Holosight";
        count = 2;
      };
      class _xx_optic_Holosight_smg {
        name = "optic_Holosight_smg";
        count = 2;
      };
      class _xx_optic_LRPS {
        name = "optic_LRPS";
        count = 2;
      };
      class _xx_optic_MRCO {
        name = "optic_MRCO";
        count = 2;
      };
      class _xx_optic_NVS {
        name = "optic_NVS";
        count = 2;
      };
      class _xx_optic_SOS {
        name = "optic_SOS";
        count = 2;
      };
      class _xx_optic_TWS {
        name = "optic_TWS";
        count = 2;
      };
      class _xx_optic_TWS_MG {
        name = "optic_TWS_MG";
        count = 2;
      };
      class _xx_Rangefinder {
        name = "Rangefinder";
        count = 1;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
    };
  };
  class B_Slingload_01_Cargo_F: Slingload_01_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 60;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 2;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 4;
      };
    };
  };
  class B_Slingload_01_Medevac_F: Slingload_01_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class Heli_Transport_03_base_F: Helicopter_Base_H {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class Land_Pod_Heli_Transport_04_box_F: Pod_Heli_Transport_04_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 60;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Laserdesignator {
        name = "Laserdesignator";
        count = 2;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 4;
      };
    };
  };
  class Land_Pod_Heli_Transport_04_covered_F: Pod_Heli_Transport_04_crewed_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Land_Pod_Heli_Transport_04_medevac_F: Pod_Heli_Transport_04_crewed_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_gear_crate: EAST_Box_Base {
    class TransportItems {
      class _xx_Binocular {
        name = "Binocular";
        count = 5;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 25;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 20;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 10;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 5;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 5;
      };
      class _xx_ItemMap {
        name = "ItemMap";
        count = 5;
      };
      class _xx_ItemCompass {
        name = "ItemCompass";
        count = 5;
      };
      class _xx_ItemWatch {
        name = "ItemWatch";
        count = 5;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_O_UavTerminal {
        name = "O_UavTerminal";
        count = 5;
      };
    };
  };
  class RHS_Mi24_base: Heli_Attack_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class RHS_Mi8_base: Heli_Light_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class RHS_Ka52_base: Heli_Attack_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhs_mi28_base: Heli_Attack_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_gear_crate: Box_NATO_Wps_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 25;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 20;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 10;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 5;
      };
      class _xx_ItemMap {
        name = "ItemMap";
        count = 5;
      };
      class _xx_ItemCompass {
        name = "ItemCompass";
        count = 5;
      };
      class _xx_ItemWatch {
        name = "ItemWatch";
        count = 5;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 5;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 5;
      };
      class _xx_lerca_1200_black {
        name = "lerca_1200_black";
        count = 5;
      };
      class _xx_lerca_1200_tan {
        name = "lerca_1200_tan";
        count = 5;
      };
      class _xx_rhsusf_lrf_vector21 {
        name = "rhsusf_lrf_vector21";
        count = 5;
      };
      class _xx_Leupold_Mk4 {
        name = "Leupold_Mk4";
        count = 5;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 5;
      };
      class _xx_rhsusf_ANPVS_14 {
        name = "rhsusf_ANPVS_14";
        count = 5;
      };
      class _xx_rhsusf_ANPVS_15 {
        name = "rhsusf_ANPVS_15";
        count = 5;
      };
      class _xx_rhs_googles_black {
        name = "rhs_googles_black";
        count = 5;
      };
      class _xx_rhs_googles_clear {
        name = "rhs_googles_clear";
        count = 5;
      };
      class _xx_rhs_googles_yellow {
        name = "rhs_googles_yellow";
        count = 5;
      };
      class _xx_rhs_googles_orange {
        name = "rhs_googles_orange";
        count = 5;
      };
    };
  };
  class B_CTRG_LSV_01_light_F: LSV_01_light_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_LSV_02_armed_F: LSV_02_armed_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_LSV_02_armed_viper_F: O_T_LSV_02_armed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_LSV_02_AT_F: LSV_02_AT_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_LSV_02_unarmed_viper_F: O_T_LSV_02_unarmed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_LSV_02_armed_viper_F: O_LSV_02_armed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_LSV_02_AT_F: LSV_02_AT_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_LSV_02_unarmed_viper_F: O_LSV_02_unarmed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_Carryall_oli_BTAmmo_F: B_Carryall_oli {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_AssaultPack_tna_BTMedic_F: B_AssaultPack_tna_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_AssaultPack_rgr_BTReconMedic: B_AssaultPack_rgr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_AssaultPack_rgr_CTRGMedic_F: B_AssaultPack_rgr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_Carryall_ghex_OTAmmo_F: B_Carryall_ghex_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_ghex_OTMedic_F: B_FieldPack_ghex_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_ghex_OTReconMedic_F: B_FieldPack_ghex_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_ViperHarness_hex_Medic_F: B_ViperHarness_hex_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_ViperHarness_ghex_Medic_F: B_ViperHarness_ghex_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_FieldPack_khk_Bandit_1_F: B_FieldPack_khk {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Box_GEN_Equip_F: Box_NATO_Equip_F {
    class TransportItems {
      class _xx_U_B_GEN_Commander_F {
        name = "U_B_GEN_Commander_F";
        count = 3;
      };
      class _xx_U_B_GEN_Soldier_F {
        name = "U_B_GEN_Soldier_F";
        count = 3;
      };
      class _xx_V_TacVest_gen_F {
        name = "V_TacVest_gen_F";
        count = 6;
      };
      class _xx_H_MilCap_gen_F {
        name = "H_MilCap_gen_F";
        count = 3;
      };
      class _xx_H_Beret_gen_F {
        name = "H_Beret_gen_F";
        count = 3;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 2;
      };
      class _xx_muzzle_snds_L {
        name = "muzzle_snds_L";
        count = 2;
      };
    };
  };
  class C_T_supplyCrate_F: ReammoBox_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_LaserDesignator {
        name = "LaserDesignator";
        count = 1;
      };
      class _xx_optic_Holosight {
        name = "optic_Holosight";
        count = 1;
      };
      class _xx_optic_ERCO_blk_F {
        name = "optic_ERCO_blk_F";
        count = 1;
      };
      class _xx_optic_SOS {
        name = "optic_SOS";
        count = 1;
      };
      class _xx_optic_NVS {
        name = "optic_NVS";
        count = 1;
      };
      class _xx_optic_TWS {
        name = "optic_TWS";
        count = 1;
      };
      class _xx_acc_flashlight {
        name = "acc_flashlight";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ToolKit {
        name = "ToolKit";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_bipod_01_F_blk {
        name = "bipod_01_F_blk";
        count = 1;
      };
      class _xx_bipod_01_F_mtp {
        name = "bipod_01_F_mtp";
        count = 1;
      };
      class _xx_bipod_01_F_snd {
        name = "bipod_01_F_snd";
        count = 1;
      };
    };
  };
  class rhsusf_assault_eagleaiii_ocp_medic: rhsusf_assault_eagleaiii_ocp {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_assault_eagleaiii_ocp_demo: rhsusf_assault_eagleaiii_ocp {
    class TransportItems {
      class _xx_SatchelCharge_Remote_Mag {
        name = "SatchelCharge_Remote_Mag";
        count = 1;
      };
      class _xx_rhsusf_m112x4_mag {
        name = "rhsusf_m112x4_mag";
        count = 0;
      };
      class _xx_DemoCharge_Remote_Mag {
        name = "DemoCharge_Remote_Mag";
        count = 3;
      };
      class _xx_rhsusf_m112_mag {
        name = "rhsusf_m112_mag";
        count = 0;
      };
    };
  };
  class rhsusf_assault_eagleaiii_ucp_demo: rhsusf_assault_eagleaiii_ucp {
    class TransportItems {
      class _xx_SatchelCharge_Remote_Mag {
        name = "SatchelCharge_Remote_Mag";
        count = 1;
      };
      class _xx_rhsusf_m112x4_mag {
        name = "rhsusf_m112x4_mag";
        count = 0;
      };
      class _xx_DemoCharge_Remote_Mag {
        name = "DemoCharge_Remote_Mag";
        count = 3;
      };
      class _xx_rhsusf_m112_mag {
        name = "rhsusf_m112_mag";
        count = 0;
      };
    };
  };
  class rhsusf_assault_eagleaiii_coy_demo: rhsusf_assault_eagleaiii_coy {
    class TransportItems {
      class _xx_SatchelCharge_Remote_Mag {
        name = "SatchelCharge_Remote_Mag";
        count = 1;
      };
      class _xx_rhsusf_m112x4_mag {
        name = "rhsusf_m112x4_mag";
        count = 0;
      };
      class _xx_DemoCharge_Remote_Mag {
        name = "DemoCharge_Remote_Mag";
        count = 2;
      };
      class _xx_rhsusf_m112_mag {
        name = "rhsusf_m112_mag";
        count = 0;
      };
      class _xx_ClaymoreDirectionalMine_Remote_Mag {
        name = "ClaymoreDirectionalMine_Remote_Mag";
        count = 1;
      };
    };
  };
  class rhsusf_assault_eagleaiii_coy_assaultman: rhsusf_assault_eagleaiii_coy {
    class TransportItems {
      class _xx_rhs_mag_smaw_HEDP {
        name = "rhs_mag_smaw_HEDP";
        count = 1;
      };
      class _xx_DemoCharge_Remote_Mag {
        name = "DemoCharge_Remote_Mag";
        count = 1;
      };
      class _xx_rhsusf_m112_mag {
        name = "rhsusf_m112_mag";
        count = 0;
      };
    };
  };
  class rhsusf_falconii_recon: rhsusf_falconii_coy {
    class TransportItems {
      class _xx_rhs_mag_M441_HE {
        name = "rhs_mag_M441_HE";
        count = 6;
      };
      class _xx_rhs_mag_M585_white {
        name = "rhs_mag_M585_white";
        count = 5;
      };
      class _xx_ACE_M84 {
        name = "ACE_M84";
        count = 2;
      };
      class _xx_rhs_mag_mk84 {
        name = "rhs_mag_mk84";
        count = 0;
      };
      class _xx_SmokeShellRed {
        name = "SmokeShellRed";
        count = 2;
      };
      class _rhs_mag_m18_red {
        name = "rhs_mag_m18_red";
        count = 0;
      };
      class _xx_SmokeShellGreen {
        name = "SmokeShellGreen";
        count = 2;
      };
      class _xx_rhs_mag_m18_green {
        name = "rhs_mag_m18_green";
        count = 0;
      };
      class _xx_SmokeShellPurple {
        name = "SmokeShellPurple";
        count = 2;
      };
      class _xx_rhs_mag_m18_purple {
        name = "rhs_mag_m18_purple";
        count = 0;
      };
      class _xx_SmokeShellYellow {
        name = "SmokeShellYellow";
        count = 2;
      };
      class _xx_rhs_mag_m18_yellow {
        name = "rhs_mag_m18_yellow";
        count = 0;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_pack_slackman_m240: B_Carryall_cbr {
    class TransportItems {
      class _xx_rhsusf_50Rnd_762x51 {
        name = "rhsusf_50Rnd_762x51";
        count = 6;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_pack_slackman_m249: B_Carryall_cbr {
    class TransportItems {
      class _xx_rhsusf_100Rnd_556x45_M855_soft_pouch {
        name = "rhsusf_100Rnd_556x45_M855_soft_pouch";
        count = 4;
      };
      class _xx_rhs_mag_30Rnd_556x45_M855_Stanag {
        name = "rhs_mag_30Rnd_556x45_M855_Stanag";
        count = 4;
      };
      class _xx_ClaymoreDirectionalMine_Remote_Mag {
        name = "ClaymoreDirectionalMine_Remote_Mag";
        count = 2;
      };
      class _xx_ACE_M84 {
        name = "ACE_M84";
        count = 4;
      };
      class _xx_rhs_mag_mk84 {
        name = "rhs_mag_mk84";
        count = 0;
      };
      class _xx_Chemlight_red {
        name = "Chemlight_red";
        count = 2;
      };
      class _xx_Chemlight_green {
        name = "Chemlight_green";
        count = 2;
      };
      class _xx_SmokeShellRed {
        name = "SmokeShellRed";
        count = 2;
      };
      class _rhs_mag_m18_red {
        name = "rhs_mag_m18_red";
        count = 0;
      };
      class _xx_SmokeShellGreen {
        name = "SmokeShellGreen";
        count = 2;
      };
      class _xx_rhs_mag_m18_green {
        name = "rhs_mag_m18_green";
        count = 0;
      };
      class _xx_SmokeShellPurple {
        name = "SmokeShellPurple";
        count = 2;
      };
      class _xx_rhs_mag_m18_purple {
        name = "rhs_mag_m18_purple";
        count = 0;
      };
      class _xx_SmokeShellYellow {
        name = "SmokeShellYellow";
        count = 2;
      };
      class _xx_rhs_mag_m18_yellow {
        name = "rhs_mag_m18_yellow";
        count = 0;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_assault_eagleaiii_coy_medic: rhsusf_assault_eagleaiii_coy {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_falconii_sarc: rhsusf_falconii {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 18;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 6;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Chemlight_red {
        name = "Chemlight_red";
        count = 1;
      };
    };
  };
  class Plane_Civil_01_base_F: Plane_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class VTOL_01_base_F: VTOL_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class VTOL_02_base_F: VTOL_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class Boat_Transport_02_base_F: Boat_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class RHS_AH64D: RHS_AH64_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class RHS_AH1Z: RHS_AH1Z_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class RHS_CH_47F_base: Heli_Transport_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class RHS_UH60M_base: RHS_UH60_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class RHS_UH1Y_base: RHS_UH1_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class RHS_C130J: RHS_C130J_Base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 20;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 16;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 8;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 8;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class RHS_A10: Plane_CAS_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class RHS_M2A2_Base: APC_Tracked_03_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_caiman_base: Truck_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_fmtv_base: Truck_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_HEMTT_A4_base: Truck_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhsusf_m109tank_base: MBT_01_arty_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_M1117_base: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_binoculars {
        name = "Binocular";
        count = 1;
      };
    };
  };
  class rhsusf_m113tank_base: APC_Tracked_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_m113_usarmy_medical: rhsusf_m113_usarmy_unarmed {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhsusf_m1a1tank_base: MBT_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_mrzr_base: MRAP_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhsusf_mtvr_base: Truck_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhsusf_rg33_base: MRAP_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhsusf_RG33L_base: MRAP_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class B_Patrol_Medic_bag_F: B_Kitbag_cbr {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class C_IDAP_UGV_01_F: UGV_01_base_F {
    class TransportItems {
      class _xx_MediKit {
        name = "MediKit";
        count = 2;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Van_02_base_F: Truck_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Van_02_medevac_base_F: Van_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 72;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 24;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_MediKit {
        name = "MediKit";
        count = 4;
      };
    };
  };
  class Van_02_service_base_F: Van_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 2;
      };
    };
  };
  class C_IDAP_Van_02_transport_F: Van_02_transport_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 42;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 14;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class C_IDAP_Van_02_vehicle_F: Van_02_vehicle_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class C_IDAP_supplyCrate_F: B_supplyCrate_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 10;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 8;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 4;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 4;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 1;
      };
      class _xx_MineDetector {
        name = "MineDetector";
        count = 1;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_V_EOD_blue_F {
        name = "V_EOD_blue_F";
        count = 1;
      };
      class _xx_V_Plain_medical_F {
        name = "V_Plain_medical_F";
        count = 4;
      };
      class _xx_H_PASGT_basic_blue_F {
        name = "H_PASGT_basic_blue_F";
        count = 1;
      };
      class _xx_H_PASGT_basic_white_F {
        name = "H_PASGT_basic_white_F";
        count = 1;
      };
      class _xx_H_Cap_Black_IDAP_F {
        name = "H_Cap_Black_IDAP_F";
        count = 2;
      };
      class _xx_H_Cap_Orange_IDAP_F {
        name = "H_Cap_Orange_IDAP_F";
        count = 2;
      };
      class _xx_H_Cap_White_IDAP_F {
        name = "H_Cap_White_IDAP_F";
        count = 2;
      };
      class _xx_H_HeadBandage_clean_F {
        name = "H_HeadBandage_clean_F";
        count = 2;
      };
      class _xx_G_Respirator_white_F {
        name = "G_Respirator_white_F";
        count = 2;
      };
      class _xx_G_EyeProtectors_F {
        name = "G_EyeProtectors_F";
        count = 2;
      };
    };
  };
  class B_Messenger_Gray_Medical_F: B_Messenger_Gray_F {
    class TransportItems {
      class _xx_MediKit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 21;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 7;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class B_Messenger_IDAP_Medical_F: B_Messenger_IDAP_F {
    class TransportItems {
      class _xx_MediKit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 21;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 7;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class C_IDAP_CargoNet_01_supplies_F: CargoNet_01_ammo_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 20;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 20;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 16;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 8;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 8;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Binocular {
        name = "Binocular";
        count = 2;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 2;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_C_UavTerminal {
        name = "C_UavTerminal";
        count = 2;
      };
      class _xx_V_EOD_blue_F {
        name = "V_EOD_blue_F";
        count = 1;
      };
      class _xx_V_Plain_medical_F {
        name = "V_Plain_medical_F";
        count = 4;
      };
      class _xx_V_Safety_blue_F {
        name = "V_Safety_blue_F";
        count = 2;
      };
      class _xx_V_Safety_orange_F {
        name = "V_Safety_orange_F";
        count = 2;
      };
      class _xx_V_Safety_yellow_F {
        name = "V_Safety_yellow_F";
        count = 2;
      };
      class _xx_H_PASGT_basic_blue_F {
        name = "H_PASGT_basic_blue_F";
        count = 2;
      };
      class _xx_H_PASGT_basic_white_F {
        name = "H_PASGT_basic_white_F";
        count = 2;
      };
      class _xx_H_Cap_Black_IDAP_F {
        name = "H_Cap_Black_IDAP_F";
        count = 2;
      };
      class _xx_H_Cap_Orange_IDAP_F {
        name = "H_Cap_Orange_IDAP_F";
        count = 2;
      };
      class _xx_H_Cap_White_IDAP_F {
        name = "H_Cap_White_IDAP_F";
        count = 2;
      };
      class _xx_H_HeadBandage_clean_F {
        name = "H_HeadBandage_clean_F";
        count = 4;
      };
      class _xx_G_Respirator_white_F {
        name = "G_Respirator_white_F";
        count = 2;
      };
      class _xx_G_Respirator_yellow_F {
        name = "G_Respirator_yellow_F";
        count = 2;
      };
      class _xx_G_Respirator_blue_F {
        name = "G_Respirator_blue_F";
        count = 2;
      };
      class _xx_G_EyeProtectors_F {
        name = "G_EyeProtectors_F";
        count = 4;
      };
    };
  };
  class C_IDAP_Heli_Transport_02_F: Heli_Transport_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_ItemGPS {
        name = "ItemGPS";
        count = 1;
      };
    };
  };
  class UAV_06_base_F: Helicopter_Base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class UAV_06_medical_base_F: UAV_06_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class Box_UAV_06_base_F: Items_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Box_UAV_06_medical_base_F: Box_UAV_06_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_assault_umbts_medic: rhs_assault_umbts {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhs_medic_bag_filled: rhs_medic_bag {
    class TransportItems {
      class _xx_Medikit {
        name = "MediKit";
        count = 1;
      };
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhs_gaz66_ap2_base: rhs_gaz66_vmf {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_2s3tank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class rhs_typhoon_base: O_Truck_03_repair_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_ka60_grey: O_Heli_Light_02_unarmed_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 24;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 8;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_bmd_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_bmp3tank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_bmp1tank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_btr_base: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_pts_base: APC_Tracked_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_a3spruttank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_bmd4_vdv: rhs_a3spruttank_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
    };
  };
  class rhs_a3t72tank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class rhs_tank_base: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_Toolkit {
        name = "Toolkit";
        count = 1;
      };
    };
  };
  class B_AssaultPack_ocamo_Medic_F: B_AssaultPack_ocamo {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 15;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class LT_01_base_F: Tank_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 6;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 2;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class AFV_Wheeled_01_base_F: Wheeled_Apc_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class fsg_tigr_base: rhs_tigr_base {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 5;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 5;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_ACE_bloodIV {
        name = "ACE_bloodIV";
        count = 4;
      };
      class _xx_ACE_bloodIV_500 {
        name = "ACE_bloodIV_500";
        count = 2;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 2;
      };
      class _xx_Medikit {
        name = "Medikit";
        count = 0;
      };
      class _xx_1pn93 {
        name = "rhs_acc_1pn93_1";
        count = 1;
      };
    };
  };
  class rhs_zsutank_base: APC_Tracked_02_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_MBT_04_cannon_F: MBT_04_cannon_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_MBT_04_cannon_F: MBT_04_cannon_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_MBT_04_command_F: MBT_04_command_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class O_T_MBT_04_command_F: MBT_04_command_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class SUV_01_base_f: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Offroad_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class Hatchback_01_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 12;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 4;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class MRAP_03_base_F: Car_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 10;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
    };
  };
  class sab_UN_Car: Hatchback_01_base_F {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
  class sab_UN_SUV: SUV_01_base_f {
    class TransportItems {
      class _xx_ACE_fieldDressing {
        name = "ACE_fieldDressing";
        count = 9;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 3;
      };
      class _xx_FirstAidKit {
        name = "FirstAidKit";
        count = 0;
      };
      class _xx_sab_UN_Vest {
        name = "sab_UN_Vest";
        count = 3;
      };
    };
  };
};
class CfgWeapons {
  class ItemCore;
  class ACE_ItemCore;
  class FirstAidKit: ItemCore {
    ace_arsenal_hide = 1;
  };
  class Medikit: ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_packingBandage: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_elasticBandage: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_tourniquet: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_atropine: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_plasmaIV: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_plasmaIV_500: ACE_plasmaIV {
    ace_arsenal_hide = 1;
  };
  class ACE_plasmaIV_250: ACE_plasmaIV {
    ace_arsenal_hide = 1;
  };
  class ACE_salineIV: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_salineIV_500: ACE_salineIV {
    ace_arsenal_hide = 1;
  };
  class ACE_salineIV_250: ACE_salineIV {
    ace_arsenal_hide = 1;
  };
  class ACE_quikclot: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_personalAidKit: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
  class ACE_surgicalKit: ACE_ItemCore {
    ace_arsenal_hide = 1;
  };
};
class CfgMagazines {
  class rhs_mag_rgd5;
  class CA_Magazine;
  class HandGrenade;
  class rhs_mag_m18_smoke_base;
  class rhs_mag_rgn: rhs_mag_rgd5 {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_rgo: rhs_mag_rgd5 {
    ace_arsenal_hide = 1;
  };
  class rhsusf_m112_mag: CA_Magazine {
    ace_arsenal_hide = 1;
  };
  class rhsusf_m112x4_mag: rhsusf_m112_mag {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_m67: HandGrenade {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_mk84: HandGrenade {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_an_m8hc: HandGrenade {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_an_m14_th3: HandGrenade {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_m18_green: rhs_mag_m18_smoke_base {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_m18_purple: rhs_mag_m18_smoke_base {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_m18_red: rhs_mag_m18_smoke_base {
    ace_arsenal_hide = 1;
  };
  class rhs_mag_m18_yellow: rhs_mag_m18_smoke_base {
    ace_arsenal_hide = 1;
  };
};
