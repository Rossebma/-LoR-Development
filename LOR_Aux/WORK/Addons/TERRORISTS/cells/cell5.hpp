class B_Carryall_ghex_F;

class LOR_PARAMIL_BACKPACK: B_Carryall_ghex_F
{
	displayname = "[LOR] Paramilitary Backpack";
	author = "[LOR] Dev Team";
	scope = 2;
	scopeCurator = 2;	
	
	class TransportWeapons
	{};
	class TransportMagazines
	{};
	class TransportItems
	{};
};

class LOR_PARAMIL_BACKPACK_AT_SPECIALIST: LOR_PARAMIL_BACKPACK
{
	displayname = "[LOR] Paramilitary Backpack (AT-Specialist)";
	author = "[LOR] Dev Team";
	class TransportMagazines
	{
		class _magazine_E60R_AT
		{
			name = "3AS_E60R_AT";
			count = 4;
		};
	};
};

class LOR_PARAMIL_BACKPACK_AA_SPECIALIST: LOR_PARAMIL_BACKPACK
{
	displayname = "[LOR] Paramilitary Backpack (AA-Specialist)";
	author = "[LOR] Dev Team";
	class TransportMagazines
	{
		class _magazine_E60R_AA
		{
			name = "Aux501_Weapons_Mags_e60r_aa";
			count = 4;
		};
	};
};

class LOR_T_C1_BASE;					// For inheritance to work, the base class has to be defined.
class LOR_T_C5_BASE : LOR_T_C1_BASE	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
	uniformClass = "U_O_T_Soldier_F";							// This links this soldier to a particular uniform. For the details, see below.
	editorSubcategory="LOR_TERROR_C_5";
};

class LOR_T_C5_RIFLEMAN : LOR_T_C5_BASE
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";

	weapons[] = {"3AS_DC15A_F", "3AS_DC17S_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15A_F", "3AS_DC17S_F", Throw, Put};
	magazines[] = {MAG_6(3AS_45Rnd_EC50_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator), "SmokeShell"};
	respawnMagazines[] = {MAG_6(3AS_45Rnd_EC50_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrier1_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_lescope_dc15a", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrier1_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_lescope_dc15a", "ItemGPS"};
	Items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
};

class LOR_T_C5_GUARD : LOR_T_C5_RIFLEMAN
{
	displayName = "Guard";

	weapons[] = {"3AS_DC15S_F", "3AS_DC17S_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15S_F", "3AS_DC17S_F", Throw, Put};
	magazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrier2_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrier2_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
};

class LOR_T_C5_AUTORIFLEMAN : LOR_T_C5_RIFLEMAN
{
	displayName = "Autorifleman";

	weapons[] = {"3AS_DC15L_F", "3AS_DC17S_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15L_F", "3AS_DC17S_F", Throw, Put};
	magazines[] = {MAG_4(3AS_200Rnd_EC40_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator), "SmokeShell"};
	respawnMagazines[] = {MAG_4(3AS_200Rnd_EC40_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierSpec_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_dc15l", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierSpec_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_dc15l", "ItemGPS"};
};

class LOR_T_C5_GRENADIER : LOR_T_C5_RIFLEMAN
{
	displayName = "Grenadier";

	weapons[] = {"3AS_DC15C_GL", "3AS_DC17S_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15C_GL", "3AS_DC17S_F", Throw, Put};
	magazines[] = {MAG_4(3AS_40Rnd_EC40_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator), MAG_10(1Rnd_HE_Grenade_shell), "SmokeShell"};
	respawnMagazines[] = {MAG_4(3AS_40Rnd_EC40_Mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator),  MAG_10(1Rnd_HE_Grenade_shell), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
};

class LOR_T_C5_SNIPER : LOR_T_C5_RIFLEMAN
{
	displayName = "Sniper";

	uniformClass = "U_O_T_FullGhillie_tna_F";

	weapons[] = {"327th_Valken38x", "Aux501_Weaps_DC1911", Throw, Put};
	respawnWeapons[] = {"327th_Valken38x", "Aux501_Weaps_DC1911", Throw, Put};
	magazines[] = {MAG_5(3AS_10Rnd_EC80_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), "SmokeShell"};
	respawnMagazines[] = {MAG_5(3AS_10Rnd_EC80_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Laserdesignator_03", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Laserdesignator_03", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
};

class LOR_T_C5_AT : LOR_T_C5_RIFLEMAN
{
	displayName = "AT-Soldier";
	backpack = "LOR_PARAMIL_BACKPACK_AT_SPECIALIST";
	weapons[] = {"3AS_DC15S_F", "3AS_E60R_F", Throw, Put};
	respawnWeapons[] = {"3AS_DC15S_F", "3AS_E60R_F", Throw, Put};
	magazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator),MAG_5(3AS_E60R_AT), "SmokeShell"};
	respawnMagazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator),MAG_5(3AS_E60R_AT), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
};

class LOR_T_C5_AA : LOR_T_C5_RIFLEMAN
{
	displayName = "AA-Soldier";
	backpack = "LOR_PARAMIL_BACKPACK_AA_SPECIALIST";
	weapons[] = {"3AS_DC15S_F", "Aux501_Weaps_e60r_aa", Throw, Put};
	respawnWeapons[] = {"3AS_DC15S_F", "Aux501_Weaps_e60r_aa", Throw, Put};
	magazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator),MAG_5(Aux501_Weapons_Mags_e60r_aa), "SmokeShell"};
	respawnMagazines[] = {MAG_4(3AS_60Rnd_EC30_mag), MAG_3(3AS_16Rnd_EC20_Mag), MAG_2(Aux501_Weapons_Mags_Thermal_Detonator),MAG_5(Aux501_Weapons_Mags_e60r_aa), "SmokeShell"};
	linkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_O", "V_PlateCarrierGL_tna_F", "G_Balaclava_TI_tna_F", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "3as_optic_acog_dc15c", "ItemGPS"};
};

class LOR_T_C5_BOSS : LOR_T_C5_RIFLEMAN
{
	displayName = "Boss";

	uniformClass = "U_O_T_Officer_F";

	weapons[] = {"3AS_WestarM5_GL", "Aux501_Weaps_DC1911", Throw, Put};
	respawnWeapons[] = {"3AS_WestarM5_GL", "Aux501_Weaps_DC1911", Throw, Put};
	magazines[] = {MAG_6(3AS_60Rnd_EC50_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator), MAG_4(3AS_6Rnd_HE_Grenade_shell), "SmokeShell"};
	respawnMagazines[] = {MAG_6(3AS_60Rnd_EC50_Mag), MAG_3(Aux501_Weapons_Mags_30mw7), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator), MAG_4(3AS_6Rnd_HE_Grenade_shell), "SmokeShell"};
	linkedItems[] = {"H_Beret_EAF_01_F", "V_PlateCarrier1_tna_F", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "ItemGPS"};
	respawnLinkedItems[] = {"H_Beret_EAF_01_F", "V_PlateCarrier1_tna_F", "G_Aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "ItemGPS"};
};