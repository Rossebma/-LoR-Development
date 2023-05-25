class LOR_T_C1_BASE;					// For inheritance to work, the base class has to be defined.
class LOR_T_C2_BASE : LOR_T_C1_BASE	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
	uniformClass = "U_IG_Guerilla3_1";							// This links this soldier to a particular uniform. For the details, see below.
	editorSubcategory="LOR_TERROR_C_2";
};

class LOR_T_C2_RIFLEMAN : LOR_T_C2_BASE
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";

	weapons[] = {"3AS_DymekBlasterRifle_F", Throw, Put};
	respawnWeapons[] = {"3AS_DymekBlasterRifle_F", Throw, Put};
	magazines[] = {MAG_6(3AS_45Rnd_EY50_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_45Rnd_EY50_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	linkedItems[] = {"H_Bandanna_sgg", "V_I_G_resistanceLeader_F", "G_Bandanna_aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"OPTRE_CPD_Cap", "V_BandollierB_blk", "G_Bandanna_tan", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	Items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
};

class LOR_T_C2_GUARD : LOR_T_C2_RIFLEMAN
{
	displayName = "Guard";

	weapons[] = {"Aux501_Weaps_DC1911", Throw, Put};
	respawnWeapons[] = {"Aux501_Weaps_DC1911", Throw, Put};
	magazines[] = {MAG_4(Aux501_Weapons_Mags_30mw7)};
	respawnMagazines[] = {MAG_4(Aux501_Weapons_Mags_30mw7)};
};

class LOR_T_C2_AUTORIFLEMAN : LOR_T_C2_RIFLEMAN
{
	displayName = "Autorifleman";

	weapons[] = {"3AS_DC15L_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15L_F", Throw, Put};
	magazines[] = {MAG_6(3AS_200Rnd_EC40_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_200Rnd_EC40_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
};

class LOR_T_C2_SNIPER : LOR_T_C2_RIFLEMAN
{
	displayName = "Sniper";

	weapons[] = {"LFP_westarsniper", "Aux501_Weaps_DC1911", Throw, Put};
	respawnWeapons[] = {"LFP_westarsniper", "Aux501_Weaps_DC1911", Throw, Put};
	magazines[] = {MAG_5(LFP_westarsniper_mag), MAG_3(Aux501_Weapons_Mags_30mw7)};
	respawnMagazines[] = {MAG_5(LFP_westarsniper_mag), MAG_3(Aux501_Weapons_Mags_30mw7)};
};

class LOR_T_C2_BOSS : LOR_T_C2_RIFLEMAN
{
	displayName = "Boss";

	weapons[] = {"ls_weapon_westar35s_primary", "Aux501_Weaps_DC1911", Throw, Put};
	respawnWeapons[] = {"ls_weapon_westar35s_primary", "Aux501_Weaps_DC1911", Throw, Put};
	magazines[] = {MAG_6(SWLW_Westar35S_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
	respawnMagazines[] = {MAG_6(SWLW_Westar35S_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
	linkedItems[] = {"H_Beret_CSAT_01_F", "V_BandollierB_blk", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope"};
	respawnLinkedItems[] = {"H_Beret_CSAT_01_F", "V_BandollierB_blk", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope"};
};