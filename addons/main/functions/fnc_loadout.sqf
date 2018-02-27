params [
  ["_unit", objNull],
  ["_faction", 1],
  ["_un", false]
];

//TODO Refactor to allow specifying a role

switch (typeOf _unit) do {
  case "B_Soldier_SL_F": { //Squad Leader
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],["B_CAF_rt1523g_LARGE_TW",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"HelmetTW","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],["TFAR_rt1523g_big",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"Helmetarid","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C8a3_artic","","","optic_elcan_arctic",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1]]],["CBU_armor_winter",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",5,30]]],["TFAR_rt1523g_big_bwmod_tropen",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"winter_Helmet","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_m4a1_acog3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG3",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ucp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3]]],["rhsusf_iotv_ucp_Squadleader",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m18_red",1,1],["rhs_mag_m18_purple",1,1],["rhs_mag_m18_yellow",1,1],["rhs_mag_m67",1,1],["Chemlight_red",2,1]]],["TFAR_rt1523g_big_bwmod_tropen",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1]]],"rhsusf_ach_helmet_headset_ucp","rhs_googles_black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_m4a1_acog3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG3",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ocp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3]]],["rhsusf_iotv_ocp_Squadleader",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m18_red",1,1],["rhs_mag_m18_purple",1,1],["rhs_mag_m18_yellow",1,1],["rhs_mag_m67",1,1],["Chemlight_red",2,1]]],["TFAR_rt1523g_big_bwmod_tropen",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1]]],"rhsusf_ach_helmet_headset_ocp","rhs_googles_black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      }
    };
  };
  case "B_Soldier_TL_F": { //2iC
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],["B_CAF_rt1523g_TW",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"HelmetTW","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],["TFAR_rt1523g",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"Helmetarid","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C8a3_artic","","","optic_elcan_arctic",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1]]],["CBU_armor_winter",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",5,30]]],["TFAR_rt1523g_rhs",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2]]],"winter_Helmet","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_m4a1_acog3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG3",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ucp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3]]],["rhsusf_iotv_ucp_Squadleader",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m18_red",1,1],["rhs_mag_m18_purple",1,1],["rhs_mag_m18_yellow",1,1],["rhs_mag_m67",1,1],["Chemlight_red",2,1]]],["TFAR_rt1523g",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1]]],"rhsusf_ach_helmet_headset_ucp","rhs_googles_black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_m4a1_acog3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG3",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ocp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3]]],["rhsusf_iotv_ocp_Squadleader",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m18_red",1,1],["rhs_mag_m18_purple",1,1],["rhs_mag_m18_yellow",1,1],["rhs_mag_m67",1,1],["Chemlight_red",2,1]]],["TFAR_rt1523g_rhs",[["ACE_wirecutter",1],["ACE_microDAGR",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1]]],"rhsusf_ach_helmet_headset_ocp","rhs_googles_black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
    };
  };
  case "B_medic_F": { //Medic
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C8a3_wood","","","",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatTW",[["ACE_CableTie",2],["30Rnd_556X45_NATO",4,30],["rhsusf_mag_15Rnd_9x19_JHP",1,15]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",20,1],["SmokeShellBlue",5,1]]],["B_CAF_Carryall_Medical",[["Medikit",1],["ACE_fieldDressing",60],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_bodyBag",2],["ACE_epinephrine",20],["ACE_morphine",40],["ACE_HandFlare_Red",1,1],["ACE_HandFlare_Green",1,1]]],"HelmetTW","G_Tactical_Black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C8a3_arid","","","",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatAR",[["ACE_CableTie",2],["rhsusf_mag_15Rnd_9x19_JHP",1,15],["30Rnd_556X45_NATO",4,30]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",20,1],["SmokeShellBlue",5,1]]],["B_CAF_Carryall_MEdical_AR",[["Medikit",1],["ACE_fieldDressing",60],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_bodyBag",2],["ACE_epinephrine",20],["ACE_morphine",40],["ACE_HandFlare_Red",1,1],["ACE_HandFlare_Green",1,1]]],"Helmetarid","G_Tactical_Black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C8a3_artic","","","",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_CableTie",2],["rhsusf_mag_15Rnd_9x19_JHP",1,15]]],["CBU_armor_winter",[["SmokeShell",10,1],["SmokeShellBlue",5,1],["30Rnd_556X45_NATO",5,30]]],["B_CAF_Carryall_MEdical_AR",[["Medikit",1],["ACE_fieldDressing",60],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_bodyBag",2],["ACE_epinephrine",20],["ACE_morphine",40],["ACE_HandFlare_Red",1,1],["ACE_HandFlare_Green",1,1]]],"winter_Helmet","G_Tactical_Black",["Binocular","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_FMJ",15],[],""],["rhs_uniform_cu_ucp",[["FirstAidKit",1],["rhsusf_ANPVS_14",1],["rhsusf_patrolcap_ocp",1]]],["rhsusf_iotv_ucp_Medic",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhsusf_mag_15Rnd_9x19_FMJ",2,15],["rhs_mag_m18_red",1,1]]],["rhsusf_assault_eagleaiii_ucp",[["ACE_bloodIV",6],["ACE_bloodIV_500",2],["ACE_bloodIV_250",2],["ACE_fieldDressing",40],["ACE_epinephrine",15],["ACE_morphine",30]]],"rhsusf_ach_helmet_ucp","rhs_googles_clear",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_FMJ",15],[],""],["rhs_uniform_cu_ocp",[["FirstAidKit",1],["rhsusf_ANPVS_14",1],["rhsusf_patrolcap_ocp",1]]],["rhsusf_iotv_ocp_Medic",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhsusf_mag_15Rnd_9x19_FMJ",2,15],["rhs_mag_m18_red",1,1]]],["rhsusf_assault_eagleaiii_ocp_medic",[["ACE_bloodIV",6],["ACE_bloodIV_500",2],["ACE_bloodIV_250",2],["ACE_fieldDressing",40],["ACE_epinephrine",15],["ACE_morphine",30]]],"rhsusf_ach_helmet_ocp","rhs_googles_clear",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
    };
  };
  case "B_soldier_AR_F": { //Autorifleman
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C9A2_TW","","","optic_elcan_wood",["200Rnd_556x45_Belt",200],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhsusf_mag_15Rnd_9x19_JHP",2,15]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["HandGrenade",4,1],["200Rnd_556x45_Belt",3,200]]],[],"HelmetTW","",["Rangefinder","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C9A2_AR","","","optic_elcan_arid",["200Rnd_556x45_Belt",200],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhsusf_mag_15Rnd_9x19_JHP",2,15]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["HandGrenade",4,1],["200Rnd_556x45_Belt",3,200]]],[],"Helmetarid","",["Rangefinder","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C9A2_AC","","","optic_elcan_arctic",["200Rnd_556x45_Belt",200],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhsusf_mag_15Rnd_9x19_JHP",1,15]]],["CBU_armor_winter",[["SmokeShell",2,1],["HandGrenade",2,1],["200Rnd_556x45_Belt",2,200]]],[],"winter_Helmet","",["Rangefinder","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_weap_m249_pip_elcan","","","rhsusf_acc_ELCAN_ard",["rhsusf_100Rnd_556x45_soft_pouch",100],[],""],[],[],["rhs_uniform_cu_ucp",[["rhsusf_ANPVS_14",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_m67",1,1]]],["rhsusf_iotv_ucp_SAW",[["rhsusf_100Rnd_556x45_soft_pouch",2,100],["rhs_mag_m67",1,1]]],["rhsusf_assault_eagleaiii_ucp_ar",[["rhsusf_100Rnd_556x45_soft_pouch",4,100],["rhs_200rnd_556x45_T_SAW",1,200]]],"rhsusf_ach_helmet_ucp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_weap_m249_pip_elcan","","","rhsusf_acc_ELCAN_ard",["rhsusf_100Rnd_556x45_soft_pouch",100],[],""],[],[],["rhs_uniform_cu_ocp",[["rhsusf_ANPVS_14",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_m67",1,1]]],["rhsusf_iotv_ocp_SAW",[["rhsusf_100Rnd_556x45_soft_pouch",2,100],["rhs_mag_m67",1,1]]],["rhsusf_assault_eagleaiii_ocp",[["rhsusf_100Rnd_556x45_soft_pouch",4,100],["rhs_200rnd_556x45_T_SAW",1,200]]],"rhsusf_ach_helmet_ocp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
    };
  };
  case "B_soldier_AT_F": { //Rifleman (AT)
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],["launch_I_Titan_short_F","","ACE_acc_pointer_green","",["Titan_AT",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],["B_caf_Kitbag_TW",[]],"HelmetTW","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],["launch_B_Titan_short_F","","ACE_acc_pointer_green","",["Titan_AT",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",5,30]]],["B_caf_KitBag_AR",[["Titan_AT",2,1]]],"Helmetarid","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C8a3_artic","","","optic_elcan_arctic",["30Rnd_556X45_NATO",30],[],""],["launch_B_Titan_short_F","","ACE_acc_pointer_green","",["Titan_AT",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1]]],["CBU_armor_winter",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",5,30]]],["winter_pack",[["Titan_AT",2,1]]],"winter_Helmet","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["launch_B_Titan_short_F","","","",["Titan_AT",1],[],""],[],["rhs_uniform_cu_ocp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ocp_Rifleman",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m67",2,1]]],["B_Kitbag_mcamo",[["Titan_AT",2,1]]],"rhsusf_ach_helmet_ocp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["launch_B_Titan_short_F","","","",["Titan_AT",1],[],""],[],["rhs_uniform_cu_ucp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m67",2,1]]],["B_Kitbag_cbr",[]],"rhsusf_ach_helmet_ucp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
    };
  };
  case "B_soldier_LAT_F": { //Rifleman LAT
    switch (_faction) do {
      case 1: { //Canadian Woodland
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],["caf_m72a6","","","",["1Rnd_M72a6",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],[],"HelmetTW","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case 2: { //Canadian Arid
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],["caf_m72a6","","","",["1Rnd_M72a6",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",6,30]]],[],"Helmetarid","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case 3: { //Canadian Arctic
        _unit setUnitLoadout [["caf_C8a3_artic","","","optic_elcan_arctic",["30Rnd_556X45_NATO",30],[],""],["caf_m72a6","","","",["1Rnd_M72a6",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["CBU_uniform_winter_U",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1]]],["CBU_armor_winter",[["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",5,30]]],[],"winter_Helmet","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"]];
      };
      case 4: { //USAF Woodland
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["rhs_weap_M136","","","",["rhs_m136_mag",1],[],""],[],["rhs_uniform_cu_ucp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m67",2,1]]],[],"rhsusf_ach_helmet_ucp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
      case 5: { //USAF Desert
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["rhs_weap_M136","","","",["rhs_m136_mag",1],[],""],[],["rhs_uniform_cu_ocp",[["rhsusf_patrolcap_ucp",1],["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ocp_Rifleman",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhs_mag_m67",2,1]]],[],"rhsusf_ach_helmet_ocp","rhs_googles_black",[],["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]];
      };
    };
  };
};

if (_un) then {
  _items = vestItems _unit;
  removeVest _unit;
  _unit addVest "sab_UN_mVest";
  {
    _unit addItemToVest _x;
  } forEach _items;
  removeHeadgear _unit;
  _unit addHeadgear "sab_UN_Helmet";
};

[_unit] call FUNC(earplugs);
