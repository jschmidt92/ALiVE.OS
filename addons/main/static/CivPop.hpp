/*
 * Civ Pop Defaults
 */

ALIVE_civilianWeapons = [] call ALIVE_fnc_hashCreate;

// Vanilla
[ALIVE_civilianWeapons, "CIV", [["hgun_Pistol_heavy_01_F","11Rnd_45ACP_Mag"],["hgun_PDW2000_F","30Rnd_9x21_Mag"],["SMG_02_ARCO_pointg_F","30Rnd_9x21_Mag"],["arifle_TRG21_F","30Rnd_556x45_Stanag"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "CIV_F", [["hgun_Pistol_heavy_01_F","11Rnd_45ACP_Mag"],["hgun_PDW2000_F","30Rnd_9x21_Mag"],["SMG_02_ARCO_pointg_F","30Rnd_9x21_Mag"],["arifle_TRG21_F","30Rnd_556x45_Stanag"]]] call ALIVE_fnc_hashSet;

// Custom
[ALIVE_civilianWeapons, "mas_afr_civ", [["arifle_mas_ak_74m","30Rnd_mas_545x39_mag"],["arifle_mas_aks74u","30Rnd_mas_545x39_mag"],["arifle_mas_akm","30Rnd_mas_762x39_mag"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "caf_ag_afr_civ", [["caf_AK47","CAF_30Rnd_762x39_AK"],["caf_AK74","CAF_30Rnd_545x39_AK"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "caf_ag_me_civ", [["caf_AK47","CAF_30Rnd_762x39_AK"],["caf_AK74","CAF_30Rnd_545x39_AK"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "drirregularsC", [["arifle_mas_ak_74m","30Rnd_mas_545x39_mag"],["arifle_mas_aks74u","30Rnd_mas_545x39_mag"],["arifle_mas_akm","30Rnd_mas_762x39_mag"]]] call ALIVE_fnc_hashSet;

// CUP
[ALIVE_civilianWeapons, "CUP_C_TK", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CUP_C_CHERNARUS", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CUP_C_RU", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

// CFP
[ALIVE_civilianWeapons, "CFP_C_ME", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CFP_C_AFRISLAMIC", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CFP_C_AFRCHRISTIAN", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CFP_C_ASIA", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

[ALIVE_civilianWeapons, "CFP_C_AFG", [["CUP_arifle_ak47","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_ak74","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKM","CUP_30Rnd_762x39_AK47_M"],["CUP_arifle_AKS","CUP_30Rnd_762x39_AK47_M"],["CUP_srifle_LeeEnfield","CUP_10x_303_M"],["CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M"]]] call ALIVE_fnc_hashSet;

// CDLC
[ALIVE_civilianWeapons, "C_VIET", [["vn_p38s","vn_m10_mag"],["vn_hp","vn_hp_mag"],["vm_m1895","vm_m1895_mag"],["vn_tt33","vn_tt33_mag"],["vn_m1911","vn_m1911_mag"],["vn_m10","vn_m10_mag"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "SPE_CIV", [["SPE_P08","SPE_8Rnd_9x19_P08"],["SPE_M1911","SPE_7Rnd_45ACP_1911"],["SPE_Sten_Mk2","SPE_32Rnd_9x19_Sten"],["SPE_K98","SPE_5Rnd_792x57"],["SPE_MP40","SPE_32rnd_9x19"],["SPE_M3_GreaseGun","SPE_30Rnd_M3_GreaseGun_45ACP"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "gm_fc_gc_civ", [["gm_p210_blk","gm_magazineWell_9x19mm_p210"],["gm_p1_blk","gm_magazineWell_9x19mm_p1"],["gm_pm63_blk","gm_magazineWell_9x18mm_pm63"],["gm_hk512_ris_wud","gm_magazineWell_12ga_7rnd"],["gm_mp5a2_blk","gm_magazineWell_9x19mm_mp5"],["gm_mp2a1_blk","gm_magazineWell_9x19mm_mp2"]]] call ALIVE_fnc_hashSet;
[ALIVE_civilianWeapons, "gm_fc_ge_civ", [["gm_p210_blk","gm_magazineWell_9x19mm_p210"],["gm_p1_blk","gm_magazineWell_9x19mm_p1"],["gm_pm63_blk","gm_magazineWell_9x18mm_pm63"],["gm_hk512_ris_wud","gm_magazineWell_12ga_7rnd"],["gm_mp5a2_blk","gm_magazineWell_9x19mm_mp5"],["gm_mp2a1_blk","gm_magazineWell_9x19mm_mp2"]]] call ALIVE_fnc_hashSet;


// Civ Pop Interaction
ALiVE_CivPop_Interaction_WaterItems = [
        "ALiVE_Waterbottle",
        "ACE_WaterBottle",    // ACEX
        "vn_prop_drink_01", "vn_prop_drink_02", "vn_prop_drink_05" // VN crate drinks
];

ALiVE_CivPop_Interaction_RationItems = [
        "ALiVE_Humrat",
        "ACE_Humanitarian_Ration",  // ACEX
        "vn_b_item_rations_01",    // VN
        "vn_prop_food_fresh_01", "vn_prop_food_fresh_02", "vn_prop_food_meal_01", "vn_prop_food_sack_01", "vn_prop_food_sack_02" // VN crate food
];

// Civ Pop Crowds

ALiVE_CivPop_customBuildings = [] call ALiVE_fnc_hashCreate;
ALiVE_CivPop_customBuildings_Minaret = [] call ALiVE_fnc_hashCreate;
[ALiVE_CivPop_customBuildings_Minaret, "sounds", [
    ["ALiVE_Civpop_Audio_Buildings_Azan1",223],
    ["ALiVE_Civpop_Audio_Buildings_Azan2",150],
    ["ALiVE_Civpop_Audio_Buildings_Azan3",128],
    ["ALiVE_Civpop_Audio_Buildings_Azan4",184],
    ["ALiVE_Civpop_Audio_Buildings_Azan5",173],
    ["ALiVE_Civpop_Audio_Buildings_Azan6",220],
    ["ALiVE_Civpop_Audio_Buildings_Azan7",120],
    ["ALiVE_Civpop_Audio_Buildings_Azan8",134],
    ["ALiVE_Civpop_Audio_Buildings_Azan9",121],
    ["ALiVE_Civpop_Audio_Buildings_Azan10",113]
  ]
] call ALiVE_fnc_hashSet;
[ALiVE_CivPop_customBuildings_Minaret, "times", [
    [4.25,4.5],
    [5.25,5.75],
    [11.75,12],
    [15.25,15.5],
    [17.75,18.25],
    [19,19.25]
  ]
] call ALiVE_fnc_hashSet;

[ALiVE_CivPop_customBuildings, "minaret", ALiVE_CivPop_customBuildings_Minaret] call ALiVE_fnc_hashSet;

ALiVE_CivPop_customBuildings_Mosque = [] call ALiVE_fnc_hashCreate;
[ALiVE_CivPop_customBuildings_Mosque, "sounds", [
    ["ALiVE_Civpop_Audio_Buildings_Prayer1",82],
    ["ALiVE_Civpop_Audio_Buildings_Prayer2",52],
    ["ALiVE_Civpop_Audio_Buildings_Prayer3",40],
    ["ALiVE_Civpop_Audio_Buildings_Prayer4",136],
    ["ALiVE_Civpop_Audio_Buildings_Prayer5",380]
  ]
] call ALiVE_fnc_hashSet;

[ALiVE_CivPop_customBuildings_Mosque, "times", [
    [4.5,4.75],
    [5.75,6],
    [12,12.25],
    [15.5,15.75],
    [18.25,18.5],
    [19.25,19.5]
  ]
] call ALiVE_fnc_hashSet;

[ALiVE_CivPop_customBuildings, "mosque", ALiVE_CivPop_customBuildings_Mosque] call ALiVE_fnc_hashSet;

ALiVE_CivPop_customBuildings_Temple = [] call ALiVE_fnc_hashCreate;
[ALiVE_CivPop_customBuildings_Temple, "sounds", [
    ["ALiVE_Civpop_Audio_VN_24", 156]
  ]
] call ALiVE_fnc_hashSet;

[ALiVE_CivPop_customBuildings_Temple, "times", [
    [5,7],
    [12,13],
    [15.5,15.75],
    [19.25,19.5]
  ]
] call ALiVE_fnc_hashSet;

[ALiVE_CivPop_customBuildings, "temple", ALiVE_CivPop_customBuildings_Temple] call ALiVE_fnc_hashSet;


ALIVE_CivPop_Crowd_Objects = [
  "shop",
  "church",
  "mosque",
  "stall",
  "chapel",
  "store",
  "garage",
  "campfire",
  "market",
  "kiosk",
  "minaret",
  "commercial",
  "temple"
];

ALiVE_CivPop_Crowd_Weapons = [
  ["ALiVE_Handgrenade_stone","ALiVE_Handgrenade_stoneMuzzle"],
  ["ALiVE_Handgrenade_can","ALiVE_Handgrenade_canMuzzle"],
  ["ALiVE_Handgrenade_bottle","ALiVE_Handgrenade_bottleMuzzle"]
];

ALiVE_CivPop_Crowd_Anims = [
  "c7a_bravotleskani_idle5",
  "ctspercmstpsnonwnondnon_idle31rejpanivnose",
  "aidlpercsnonwnondnon_talkbs",
  "armstrong_c0start",
  "c5calming_zevl3",
  "c5calming_zevl4",
  "c5calming_zevl5",
  "c5calming_zevl6",
  "c5calming_zevl7",
  "c7a_bravotoerc_idle8"
];

ALiVE_CivPop_Crowd_Anims_Protest = [
  "c7a_bravotleskani_idle5",
  "c5calming_zevl1",
  "c5calming_zevl2",
  "c5calming_zevl3",
  "c5calming_zevl4",
  "c5calming_zevl5",
  "c5calming_zevl6",
  "c7a_bravo_dovadeni1",
  "c7a_bravo_dovadeni3",
  "c7a_bravotoerc_idle8"
];

ALiVE_CivPop_Crowd_Noises = [
  //["ALiVE_Civpop_Audio_Crowds_Generic_Angry_Large",100],
  //["ALiVE_Civpop_Audio_Crowds_Generic_Angry_Large2",100],
  ["ALiVE_Civpop_Audio_Crowds_Generic_Angry_Med",100],
  //["ALiVE_Civpop_Audio_Crowds_Generic_Chill_Large",100],
  ["ALiVE_Civpop_Audio_Crowds_Generic_Chill_Med",100],
  //["ALiVE_Civpop_Audio_Crowds_Generic_Happy_Large",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Angry_Med",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Angry_Med2",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Angry_Small",100],
  //["ALiVE_Civpop_Audio_Crowds_ME_Chill_Large",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Chill_Med",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Chill_Med2",100],
  ["ALiVE_Civpop_Audio_Crowds_ME_Chill_Med3",100]
];

// Civ Pop Panic Noises
ALiVE_CivPop_PanicNoises = [
	"ALiVE_Civpop_Audio_Fear1",
    "ALiVE_Civpop_Audio_Fear2",
    "ALiVE_Civpop_Audio_Fear3",
    "ALiVE_Civpop_Audio_Fear4",
    "ALiVE_Civpop_Audio_Fear5",
    "ALiVE_Civpop_Audio_Fear6",
    "ALiVE_Civpop_Audio_Fear7",
    "ALiVE_Civpop_Audio_Fear8",
    "ALiVE_Civpop_Audio_Fear9",
    "ALiVE_Civpop_Audio_Fear10",
    "ALiVE_Civpop_Audio_Fear11",
    "ALiVE_Civpop_Audio_Fear12",
	"ALiVE_Civpop_Audio_Fear13"
];

// Sounds to play at night onlys
ALiVE_CivPop_NightSounds = [
    "ALiVE_Civpop_Audio_13",
    "ALiVE_Civpop_Audio_14",
    "ALiVE_Civpop_Audio_AFR_29",
    "ALiVE_Civpop_Audio_AFR_30",
    "ALiVE_Civpop_Audio_AFR_31"
];

// Civ Pop Env sounds by faction
ALIVE_civilianFactionHouseTracks = [] call ALIVE_fnc_hashCreate;

// Civ Pop Env sounds default
ALIVE_civilianHouseTracks = [] call ALIVE_fnc_hashCreate;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_1", 180] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_2", 188] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_3", 199] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_4", 246] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_5", 335] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_6", 199] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_7", 177] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_8", 235] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_9", 246] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_10", 292] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_11", 189] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_12", 203] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_13", 16] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_14", 128] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_15", 14] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_16", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_17", 19] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_18", 4] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_19", 22] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_20", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_21", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_22", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_23", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_24", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_25", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_26", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_27", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_28", 8] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_29", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_30", 7] call ALIVE_fnc_hashSet;
[ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_40", 2] call ALIVE_fnc_hashSet;

// Pacific Factions

// TANOA
CIV_F_TANOA_ALIVE_civilianHouseTracks =+ALIVE_civilianHouseTracks;

[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_7"] call ALIVE_fnc_hashRem; // Greek Radio
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_11"] call ALIVE_fnc_hashRem; // Greek Radio
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_12"] call ALIVE_fnc_hashRem; // Greek Radio
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_1", 30] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_2", 44] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_3", 54] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_4", 45] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_5", 62] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_6", 134] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_7", 97] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_8", 35] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_9", 24] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_10", 33] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_11", 24] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_12", 109] call ALIVE_fnc_hashSet;
[CIV_F_TANOA_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_13", 105] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "CIV_F_TANOA", CIV_F_TANOA_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// Middle East factions

// CUP TAKI
CUP_C_TK_ALIVE_civilianHouseTracks =+ALIVE_civilianHouseTracks;

[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_16"] call ALIVE_fnc_hashRem; // Car Alarm
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_7"] call ALIVE_fnc_hashRem; // Greek Radio
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_11"] call ALIVE_fnc_hashRem; // Greek Radio
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_12"] call ALIVE_fnc_hashRem; // Greek Radio
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_1", 135] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_2", 85] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_3", 35] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_4", 55] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_5", 45] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_6", 50] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_7", 50] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_8", 85] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_9", 140] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_10", 125] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_11", 95] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_12", 70] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_13", 21] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_14", 280] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_15", 335] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_16", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_17", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_18", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_19", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_20", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_21", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_22", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_23", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_24", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_25", 8] call ALIVE_fnc_hashSet;
[CUP_C_TK_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_26", 8] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "CUP_C_TK", CUP_C_TK_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// CFP Afghan
CFP_C_AFG_ALIVE_civilianHouseTracks =+CUP_C_TK_ALIVE_civilianHouseTracks;
[ALIVE_civilianFactionHouseTracks, "CFP_C_AFG", CFP_C_AFG_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// CFP Middle East
CFP_C_ME_ALIVE_civilianHouseTracks =+CUP_C_TK_ALIVE_civilianHouseTracks;
[ALIVE_civilianFactionHouseTracks, "CFP_C_ME", CFP_C_ME_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// African factions

// CFP African Christian
CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks =+ALIVE_civilianHouseTracks;

[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_16"] call ALIVE_fnc_hashRem; // Car Alarm
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_1", 145] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_2", 154] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_3", 104] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_4", 37] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_5", 35] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_6", 28] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_7", 23] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_8", 21] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_9", 116] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_10", 208] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_11", 342] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_12", 430] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_13", 92] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_14", 83] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_15", 85] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_16", 85] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_17", 145] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_18", 154] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_19", 104] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_20", 37] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_21", 36] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_22", 28] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_23", 23] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_24", 208] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_25", 342] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_26", 430] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_27", 54] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_28", 88] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_29", 100] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_30", 109] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_31", 106] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_32", 59] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_33", 59] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_34", 63] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_35", 114] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_36", 102] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_37", 85] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_38", 21] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_39", 116] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_40", 64] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_41", 93] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_42", 51] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_43", 53] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_AFR_44", 83] call ALIVE_fnc_hashSet;

[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_16", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_17", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_18", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_19", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_20", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_21", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_22", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_23", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_24", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_25", 8] call ALIVE_fnc_hashSet;
[CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_26", 8] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "CFP_C_AFRCHRISTIAN", CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// CFP African Islamic
CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks =+CFP_C_AFRCHRISTIAN_ALIVE_civilianHouseTracks;

[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_1", 135] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_2", 85] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_3", 35] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_4", 55] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_5", 45] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_6", 50] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_7", 50] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_8", 85] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_9", 140] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_10", 125] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_11", 95] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_12", 70] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_13", 21] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_14", 280] call ALIVE_fnc_hashSet;
[CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_ME_15", 335] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "CFP_C_AFRISLAMIC", CFP_C_AFRISLAMIC_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;


// VN
VN_C_VIET_ALIVE_civilianHouseTracks = [] call ALIVE_fnc_hashCreate;

[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_3", 48] call ALIVE_fnc_hashSet;
//[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_5", 59] call ALIVE_fnc_hashSet;
//[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_11", 57] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_13", 50] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_15", 35] call ALIVE_fnc_hashSet;
//[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_17", 43] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_18", 32] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_19", 100] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_20", 30] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_21", 35] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_22", 38] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_23", 32] call ALIVE_fnc_hashSet;
//[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_24", 156] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_25", 158] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_26", 60] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_27", 35] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_28", 31] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_29", 30] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_30", 39] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_31", 29] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_13", 30] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_14", 128] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_15", 30] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_17", 30] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_18", 34] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_20", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_21", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_22", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_23", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_24", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_25", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_26", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_27", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_28", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_29", 37] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "vn_ambient_village_sound_1", 180] call ALIVE_fnc_hashSet;
[VN_C_VIET_ALIVE_civilianHouseTracks, "vn_ambient_village_sound_2", 180] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "C_VIET", VN_C_VIET_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;


// SPE
SPE_CIV_ALIVE_civilianHouseTracks = [] call ALIVE_fnc_hashCreate;

[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_18", 32] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_21", 35] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_22", 38] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_23", 32] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_26", 60] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_27", 35] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_28", 31] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_VN_29", 30] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_6", 134] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_7", 97] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_8", 35] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_9", 24] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_10", 33] call ALIVE_fnc_hashSet;
[SPE_CIV_ALIVE_civilianHouseTracks, "ALiVE_Civpop_Audio_PAC_11", 24] call ALIVE_fnc_hashSet;

[ALIVE_civilianFactionHouseTracks, "SPE_CIV", SPE_CIV_ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

// GM
[ALIVE_civilianFactionHouseTracks, "gm_fc_gc_civ", ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;
[ALIVE_civilianFactionHouseTracks, "gm_fc_ge_civ", ALIVE_civilianHouseTracks] call ALIVE_fnc_hashSet;

