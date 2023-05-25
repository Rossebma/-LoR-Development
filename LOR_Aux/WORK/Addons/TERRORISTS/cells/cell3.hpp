class LOR_T_C1_BASE;					// For inheritance to work, the base class has to be defined.
class LOR_T_C3_BASE : LOR_T_C1_BASE	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
	uniformClass = "U_I_C_Soldier_Bandit_1_F";							// This links this soldier to a particular uniform. For the details, see below.
	editorSubcategory="LOR_TERROR_C_3";
};

class LOR_T_C3_RIFLEMAN : LOR_T_C3_BASE
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";

	weapons[] = {"3AS_E5_F", Throw, Put};
	respawnWeapons[] = {"3AS_E5_F", Throw, Put};
	magazines[] = {MAG_6(3AS_60Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_60Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	linkedItems[] = {"V_BandollierB_rgr", "G_Bandanna_oli", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"V_BandollierB_rgr", "G_Bandanna_oli", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	Items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
};

class LOR_T_C3_GUARD : LOR_T_C3_RIFLEMAN
{
	displayName = "Guard";

	weapons[] = {"3AS_E5_F", Throw, Put};
	respawnWeapons[] = {"3AS_E5_F", Throw, Put};
	magazines[] = {MAG_4(3AS_60Rnd_EM50_RedPlasma)};
	respawnMagazines[] = {MAG_4(3AS_60Rnd_EM50_RedPlasma)};
};

class LOR_T_C3_AUTORIFLEMAN : LOR_T_C3_RIFLEMAN
{
	displayName = "Autorifleman";

	weapons[] = {"Aux501_Weaps_RG4D", Throw, Put};
	respawnWeapons[] = {"Aux501_Weaps_RG4D", Throw, Put};
	magazines[] = {MAG_6(Aux501_Weapons_Mags_RG4D30), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(Aux501_Weapons_Mags_RG4D30), "Aux501_Weapons_Mags_Thermal_Detonator"};
};

class LOR_T_C3_GRENADIER : LOR_T_C3_RIFLEMAN
{
	displayName = "Grenadier";

	weapons[] = {"MRC_EPL2", "Aux501_Weaps_RG4D", Throw, Put};
	respawnWeapons[] = {"MRC_EPL2", "Aux501_Weaps_RG4D", Throw, Put};
	magazines[] = {MAG_10(epl_mag), MAG_3(Aux501_Weapons_Mags_RG4D30), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
	respawnMagazines[] = {MAG_10(epl_mag), MAG_3(Aux501_Weapons_Mags_RG4D30), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
};

class LOR_T_C3_BOSS : LOR_T_C3_RIFLEMAN
{
	displayName = "Boss";

	weapons[] = {"MRC_DW32S", "Aux501_Weaps_RG4D", Throw, Put};
	respawnWeapons[] = {"MRC_DW32S", "Aux501_Weaps_RG4D", Throw, Put};
	magazines[] = {MAG_6(MRC_DC15_mag), MAG_3(Aux501_Weapons_Mags_RG4D30), MAG_6(Aux501_Weapons_Mags_Thermal_Detonator)};
	respawnMagazines[] = {MAG_6(MRC_DC15_mag), MAG_3(Aux501_Weapons_Mags_RG4D30), MAG_6(Aux501_Weapons_Mags_Thermal_Detonator)};
	linkedItems[] = {"H_ParadeDressCap_01_US_F", "RD501_501_razorblade_holster_vest_vest", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope"};
	respawnLinkedItems[] = {"H_ParadeDressCap_01_US_F", "RD501_501_razorblade_holster_vest_vest", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope"};
};