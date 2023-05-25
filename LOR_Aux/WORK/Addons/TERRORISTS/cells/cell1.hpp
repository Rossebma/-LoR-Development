class C_E_LooterJacket_01_F;					// For inheritance to work, the base class has to be defined.
class LOR_T_C1_BASE : C_E_LooterJacket_01_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
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

	faction="LOR_TERROR";
	editorSubcategory="LOR_TERROR_C_1";
	role = "Rifleman";
};

class LOR_T_C1_RIFLEMAN : LOR_T_C1_BASE
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";

	weapons[] = {"3AS_E5_F", Throw, Put};
	respawnWeapons[] = {"3AS_E5_F", Throw, Put};
	magazines[] = {MAG_6(3AS_60Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_60Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	linkedItems[] = {"OPTRE_CPD_Cap", "V_BandollierB_blk", "G_Bandanna_aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"OPTRE_CPD_Cap", "V_BandollierB_blk", "G_Bandanna_aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	Items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
};

class LOR_T_C1_GUARD : LOR_T_C1_RIFLEMAN
{
	displayName = "Guard";

	weapons[] = {"DymekBlasterPistol_F", Throw, Put};
	respawnWeapons[] = {"DymekBlasterPistol_F", Throw, Put};
	magazines[] = {MAG_4(3AS_16Rnd_EY20_Mag)};
	respawnMagazines[] = {MAG_4(3AS_16Rnd_EY20_Mag)};
};

class LOR_T_C1_AUTORIFLEMAN : LOR_T_C1_RIFLEMAN
{
	displayName = "Autorifleman";

	weapons[] = {"E5C_F", Throw, Put};
	respawnWeapons[] = {"E5C_F", Throw, Put};
	magazines[] = {MAG_6(3AS_130Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
	respawnMagazines[] = {MAG_6(3AS_130Rnd_EM50_RedPlasma), "Aux501_Weapons_Mags_Thermal_Detonator"};
};

class LOR_T_C1_SNIPER : LOR_T_C1_RIFLEMAN
{
	displayName = "Sniper";

	weapons[] = {"SWLW_sniper", "DymekBlasterPistol_F", Throw, Put};
	respawnWeapons[] = {"SWLW_sniper", "DymekBlasterPistol_F", Throw, Put};
	magazines[] = {MAG_5(SWLW_sniper_Mag), MAG_3(3AS_16Rnd_EY20_Mag)};
	respawnMagazines[] = {MAG_5(SWLW_sniper_Mag), MAG_3(3AS_16Rnd_EY20_Mag)};
	linkedItems[] = {"OPTRE_CPD_Cap", "V_BandollierB_blk", "G_Bandanna_aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_sniper_scope"};
	respawnLinkedItems[] = {"OPTRE_CPD_Cap", "V_BandollierB_blk", "G_Bandanna_aviator", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "swlw_sniper_scope"};
};

class LOR_T_C1_BOSS : LOR_T_C1_RIFLEMAN
{
	displayName = "Boss";

	weapons[] = {"JLTS_DP23", "DymekBlasterPistol_F", Throw, Put};
	respawnWeapons[] = {"JLTS_DP23", "DymekBlasterPistol_F", Throw, Put};
	magazines[] = {MAG_6(JLTS_DP23_MAG), MAG_3(3AS_16Rnd_EY20_Mag), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
	respawnMagazines[] = {MAG_6(JLTS_DP23_MAG), MAG_3(3AS_16Rnd_EY20_Mag), MAG_4(Aux501_Weapons_Mags_Thermal_Detonator)};
	linkedItems[] = {"OPTRE_CPD_Beret", "V_BandollierB_blk", "OPTRE_Glasses_Cigar", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
	respawnLinkedItems[] = {"OPTRE_CPD_Beret", "V_BandollierB_blk", "OPTRE_Glasses_Cigar", "JLTS_NVG_droid_chip_1", "Binocular", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch"};
};