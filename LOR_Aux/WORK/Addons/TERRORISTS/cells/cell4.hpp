class I_C_Soldier_Bandit_5_F;					// For inheritance to work, the base class has to be defined.
class LOR_T_C4_BASE : I_C_Soldier_Bandit_5_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
	author = "[LOR] Thinker";			// The name of the author of the asset, which is displayed in the editor.
	scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 0;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	displayName = "Cell 1 Base";		// The name of the soldier, which is displayed in the editor.
	camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
	sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
	threat[] = {1, 1, 0.8};				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.1
	side = 0; 							// Opfor = 0, Blufor = 1, Indep = 2. 
	canDeactivateMines = false;				// Can this character deactivate mines?
	engineer = false;						// Can this character repair vehicles?
	attendant = 0;							// Can this character heal soldiers?
	backpack = "";		// Which backpack the character is wearing.
	weapons[] = {Throw, Put};				// Which weapons the character has.
	respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns with.
	Items[] = {};					// Which items the character has.
	RespawnItems[] = {};			// Which items the character respawns with.
	magazines[] = {};				// What ammunition the character has.
	respawnMagazines[] = {};		// What ammunition the character respawns with.
	linkedItems[] = {};				// Which items the character has.
	respawnLinkedItems[] = {};		// Which items the character respawns with.

	uniformClass = "U_BG_Guerilla2_2";							// This links this soldier to a particular uniform. For the details, see below.
	editorSubcategory="LOR_TERROR_C_4";
	faction="LOR_TERROR";
	role = "Rifleman";
};

class LOR_T_C4_RIFLEMAN : LOR_T_C4_BASE
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";

	weapons[] = {"ls_weapon_westar35c_primary", Throw, Put};
	respawnWeapons[] = {"ls_weapon_westar35c_primary", Throw, Put};
	magazines[] = {MAG_6(SWLW_westar35c_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(SWLW_westar35c_Mag), "Aux501_Weapons_Mags_Thermal_Detonator"};
	linkedItems[] = {"H_Cap_oli_hs", "V_Chestrig_blk", "G_Bandanna_beast", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"H_Cap_oli_hs", "V_Chestrig_blk", "G_Bandanna_beast", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	Items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
};

class LOR_T_C4_GUARD : LOR_T_C4_RIFLEMAN
{
	displayName = "Guard";

	uniformClass = "U_BG_Guerilla2_1";	

	weapons[] = {"ls_weapon_westar35sa_secondary", Throw, Put};
	respawnWeapons[] = {"ls_weapon_westar35sa_secondary", Throw, Put};
	magazines[] = {MAG_4(SWLW_westar35sa_Mag)};
	respawnMagazines[] = {MAG_4(SWLW_westar35sa_Mag)};
};

class LOR_T_C4_AUTORIFLEMAN : LOR_T_C4_RIFLEMAN
{
	displayName = "Autorifleman";

	uniformClass = "U_BG_Guerilla2_3";	

	weapons[] = {"E5C_F", Throw, Put};
	respawnWeapons[] = {"E5C_F", Throw, Put};
	magazines[] = {MAG_6(3AS_130Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_130Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
};

class LOR_T_C4_SNIPER : LOR_T_C4_RIFLEMAN
{
	displayName = "Sniper";

	weapons[] = {"3AS_E5S_F", "ls_weapon_westar35sa_secondary", Throw, Put};
	respawnWeapons[] = {"3AS_E5S_F", "ls_weapon_westar35sa_secondary", Throw, Put};
	magazines[] = {MAG_10(3AS_10Rnd_EM90_Mag), MAG_3(SWLW_westar35sa_Mag)};
	respawnMagazines[] = {MAG_10(3AS_10Rnd_EM90_Mag), MAG_3(SWLW_westar35sa_Mag)};
};

class LOR_T_C4_BOSS : LOR_T_C4_RIFLEMAN
{
	displayName = "Boss";

	weapons[] = {"ls_weapon_westar35s_primary", "3AS_S5_f", Throw, Put};
	respawnWeapons[] = {"ls_weapon_westar35s_primary", "3AS_S5_f", Throw, Put};
	magazines[] = {MAG_6(SWLW_Westar35S_Mag), MAG_3(11Rnd_45ACP_Mag), MAG_6(Aux501_Weapons_Mags_Thermal_Detonator)};
	respawnMagazines[] = {MAG_6(SWLW_Westar35S_Mag), MAG_3(11Rnd_45ACP_Mag), MAG_6(Aux501_Weapons_Mags_Thermal_Detonator)};
	linkedItems[] = {"H_ParadeDressCap_01_LDF_F", "V_Chestrig_blk", "OPTRE_Glasses_Cigar", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope", "swlw_westar35s_scope", "3as_s5_scope"};
	respawnLinkedItems[] = {"H_ParadeDressCap_01_LDF_F", "V_Chestrig_blk", "OPTRE_Glasses_Cigar", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_westar35s_scope", "swlw_westar35s_scope", "3as_s5_scope"};
};