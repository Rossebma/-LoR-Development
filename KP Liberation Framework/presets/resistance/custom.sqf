/*
    Needed Mods:
    - None

    Optional Mods:
    - None
*/

/* Classnames of the guerilla faction which is friendly or hostile, depending on the civil reputation
Standard loadout of the units will be replaced with a scripted one, which depends on the guerilla strength, after spawn */
KP_liberation_guerilla_units = [
    "I_G_Soldier_AR_F",
    "I_G_engineer_F",
    "I_G_officer_F",
    "I_G_medic_F",
    "I_G_Soldier_F",
    "I_G_Soldier_LAT_F",
    "I_G_Soldier_M_F",
    "I_G_Soldier_SL_F"
];

// Armed vehicles
KP_liberation_guerilla_vehicles = [
    "327th_CIS_SAC",
    "O_G_Offroad_01_F",
    "lsd_car_ast",
    "ls_ground_barc",
    "B_G_QUadbike_01_F",
    "OPTRE_Genet_IND"
];

/* Guerilla Equipment
There are 3 tiers for every category. If the strength of the guerillas will increase, they'll have higher tier equipment. */

/* Weapons - You've to add the weapons as array like
["Weaponclassname","Magazineclassname","magazine amount","optic","tripod"]
You can leave optic and tripod empty with "" */
KP_liberation_guerilla_weapons_1 = [
    ["Aux501_Weaps_E5","Aux501_Weapons_Mags_E5100",6,"",""]
];

KP_liberation_guerilla_weapons_2 = [
    ["Aux501_Weaps_E5","Aux501_Weapons_Mags_E5100",6,"",""],
    ["Aux501_Weaps_DC15S","Aux501_weapons_Mags_10mw50",6,"",""]
];

KP_liberation_guerilla_weapons_3 = [
    ["Aux501_Weaps_E5","Aux501_Weapons_Mags_E5100",6,"",""],
    ["Aux501_Weaps_DC15S","Aux501_weapons_Mags_10mw50",6,"",""],
    ["Aux501_Weaps_DC15A","Aux501_weapons_Mags_20mwdp30",6,"",""]
];

// Uniforms
KP_liberation_guerilla_uniforms_1 = [
    "U_BG_Guerrilla_6_1",
    "U_BG_Guerilla1_1",
    "U_BG_Guerilla1_2_F",
    "U_BG_Guerilla2_2",
    "U_BG_Guerilla2_1",
    "U_BG_Guerilla2_3",
    "U_BG_Guerilla3_1",
    "U_BG_leader"
];

KP_liberation_guerilla_uniforms_2 = [
    "OPTRE_Ins_ER_jacket_od_surplus",
    "OPTRE_Ins_ER_rolled_jean_orca",
    "OPTRE_Ins_ER_rolled_OD_blknblu",
    "OPTRE_Ins_ER_rolled_OD_blknred",
    "OPTRE_Ins_ER_rolled_OD_crimson",
    "OPTRE_Ins_ER_rolled_surplus black",
    "OPTRE_Ins_ER_rolled_surplus_crimson"
];

KP_liberation_guerilla_uniforms_3 = [
    "OPTRE_Ins_ER_jacket_surgeon1",
    "OPTRE_Ins_ER_jacket_surgeon2",
    "OPTRE_Ins_ER_jacket_surplus_brown",
    "OPTRE_Ins_ER_jacket_surplus_OD",
    "OPTRE_Ins_ER_jacket_surplus_redshirt",
    "OPTRE_Ins_URF_Combat_Uniform"
];

// Vests
KP_liberation_guerilla_vests_1 = [
    "V_LegStrapBag_coyote_F",
    "V_LegStrapBag_olive_F",
    "V_LegStrapBag_black_F",
    "V_Pocketed_coyote_F",
    "V_Pocketed_olive_F",
    "V_Pocketed_black_F",
    "V_BandollierB_cbr",
    "V_BandollierB_rgr",
    "V_BandollierB_khk",
    "V_BandollierB_oli",
    "V_BandollierB_blk",
    "V_BandollierB_ghex_F"
];

KP_liberation_guerilla_vests_2 = [
    "V_PlateCarrier1_blk",
    "V_PlateCarrier1_rgr",
    "V_PlateCarrier2_blk",
    "V_PlateCarrier2_rgr",
    "V_TacVestIR_blk",
    "V_CarrierRigKBT_01_light_Olive_F"
];

KP_liberation_guerilla_vests_3 = [
    "OPTRE_Ins_URF_Armor1",
    "V_CarrierRigKBT_01_heavy_EAF_F",
    "V_CarrierRigKBT_01_heavy_Olive_F"
];

// Headgear
KP_liberation_guerilla_headgear_1 = [
    "H_Bandanna_blu",
    "H_Bandanna_sand",
    "H_Bandanna_gry",
    "H_Bandanna_camo",
    "H_Bandanna_cbr",
    "H_Bandanna_sgg",
    "H_Bandanna_khk",
    "H_Cap_blu",
    "H_Cap_grn",
    "H_Cap_tan",
    "H_Cap_oli",
    "H_Cap_red",
    "H_Cap_blk",
    "H_Cap_blk_Raven",
    "H_MilCap_dgtl"
];

KP_liberation_guerilla_headgear_2 = [
    "H_Bandanna_blu",
    "H_Bandanna_sand",
    "H_Bandanna_gry",
    "H_Bandanna_camo",
    "H_Bandanna_cbr",
    "H_Bandanna_sgg",
    "H_Bandanna_khk",
    "H_Cap_blu",
    "H_Cap_grn",
    "H_Cap_tan",
    "H_Cap_oli",
    "H_Cap_red",
    "H_Cap_blk",
    "H_Cap_blk_Raven",
    "H_MilCap_dgtl"
];

KP_liberation_guerilla_headgear_3 = [
    "H_HelmetCrew_I",
    "H_Shemag_olive",
    "OPTRE_Ins_URF_Helmet4",
    "OPTRE_Ins_URF_Helmet2"
];

// Facegear. Applies for tier 2 and 3.
KP_liberation_guerilla_facegear = [
    "G_Bandanna_shades",
    "G_Bandanna_beast",
    "G_Bandanna_tan",
    "G_Bandanna_khk",
    "G_Bandanna_oli",
    "G_Bandanna_aviator",
    "G_Bandanna_blk"
];
