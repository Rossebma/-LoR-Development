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
    ["JLTS_E5","JLTS_E5_mag",6,"",""]
];

KP_liberation_guerilla_weapons_2 = [
    ["JLTS_E5","JLTS_E5_mag",6,"",""],
    ["JLTS_DC15S","JLTS_DC15S_mag",6,"",""]
];

KP_liberation_guerilla_weapons_3 = [
    ["JLTS_E5","JLTS_E5_mag",6,"",""],
    ["JLTS_DC15S","JLTS_DC15S_mag",6,"",""],
    ["JLTS_DC15A","JLTS_DC15A_mag",6,"",""]
];

// Uniforms
KP_liberation_guerilla_uniforms_1 = [
    "LST_Jedi_Uniform_KellaV2",
    "LST_Jedi_Uniform_Kella",
    "U_C_Poloshirt_salmon",
    "U_C_Poloshirt_redwhite",
    "U_C_Poloshirt_stripped",
    "U_C_Poloshirt_tricolour",
    "U_C_Poor_1",
    "U_C_Man_casual_1_F",
    "U_C_Man_casual_2_F",
    "U_C_Man_casual_3_F",
    "U_C_Man_casual_4_F",
    "U_C_Man_casual_5_F",
    "U_C_Man_casual_6_F",
    "U_I_G_resistanceLEader_F"
];

KP_liberation_guerilla_uniforms_2 = [
    "OPTRE_Ins_ER_jacket_od_surplus",
    "OPTRE_Ins_ER_rolled_jean_orca",
    "OPTRE_Ins_ER_rolled_OD_blknblu",
    "OPTRE_Ins_ER_rolled_OD_blknred",
    "OPTRE_Ins_ER_rolled_OD_crimson",
    "OPTRE_Ins_ER_rolled_surplus black",
    "OPTRE_Ins_ER_rolled_surplus_crimson",
    "OPTRE_Ins_ER_jacket_surgeon1",
    "OPTRE_Ins_ER_jacket_surgeon2",
    "OPTRE_Ins_ER_jacket_surplus_brown",
    "OPTRE_Ins_ER_jacket_surplus_OD",
    "OPTRE_Ins_ER_jacket_surplus_redshirt",
    "OPTRE_Ins_URF_Combat_Uniform"
];

KP_liberation_guerilla_uniforms_3 = [
    "JMM_U_cUniform_ox02_F",
    "JMM_U_cUniform_ox02_c1_F",
    "JMM_U_cUniform_ox02_c2_F",
    "JMM_U_cUniform_ox02_c3_F",
    "JMM_U_cUniform_ox02_m_F",
    "JMM_U_cUniform_pdf_F"
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
    "OPTRE_UNSC_M52A_Armor_MG_URB",
    "OPTRE_UNSC_M52A_Armor_Breacher_URB",
    "OPTRE_UNSC_M52A_Armor_Grenadier_URB",
    "OPTRE_UNSC_M52A_Armor_Medic_URB",
    "OPTRE_UNSC_M52A_Armor_Rifleman_URB",
    "OPTRE_UNSC_M52A_Armor4_URB",
    "OPTRE_Ins_URF_Armor1"
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
    "H_PilotHelmetHeli_O",
    "H_PilotHelmet_Heli_B"
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
