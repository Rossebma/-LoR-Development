class CfgPatches
{
    class LOR_DROIDS
    {
		// Meta information for editor
		name = "Legacy of Republic Droids";
		author = "[LOR] Dev Team";
		url = "discord.legacy-republic.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 0.1;
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { 
            "3AS_Weapons",
            "327th_CIS"
            };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
			"LOR_B1_SENTRY",
            "LOR_B1_RIFLEMAN",
			"LOR_B1_RIFLEMAN_AT",
			"LOR_B1_TEAMLEADER",
			"LOR_B1_SQUADLEADER",
			"LOR_B1_PLATOONLEADER",
			"LOR_B1_GRENADIER",
			"LOR_B1_MACHINEGUNNER",
			"LOR_B1_HEAVYGUNNER",
			"LOR_B1_MARKSMAN",
			"LOR_B1_SHARPSHOOTER",
			"LOR_B1_AT_SPECIALIST",
			"LOR_B1_AA_SPECIALIST",
			"LOR_B1_MEDIC",
			"LOR_B1_ENGINEER"
        };
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
    };
};

class cfgFactionClasses 
    { 
        class LOR_CIS
        { 
            displayName = "[LOR] CIS";  // Name on ingame menus 
            priority = 3; // Position in list. 
            side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
            icon = ""; // Leave as is
        };
};

class cfgVehicleClasses
{
	class LOR_CIS_B1
	{
		displayName="B1 Battledroids";
	};
	class LOR_CIS_B2
	{
		displayName="B2 Battledroids";
	};
	class LOR_CIS_BX
	{
		displayName="BX Battledroids";
	};
};

class CfgEditorSubcategories
{
	class LOR_CIS_B1
	{
		displayName="B1 Battledroids";
	};
	class LOR_CIS_B2
	{
		displayName="B2 Battledroids";
	};
	class LOR_CIS_BX
	{
		displayName="BX Battledroids";
	};
};

class CfgVehicles
{
	class MRC_B1;
	class LOR_B1_RIFLEMAN : MRC_B1
	{
		displayName = "B1 | Rifleman";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell"
		};
		items[] = 
		{

		};
		respawnItems[] = 
		{

		};
	};
	class MRC_B1_Support;
	class LOR_B1_SENTRY : MRC_B1_Support
	{
		displayName = "B1 | Sentry";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "Rifleman";
		backpack = "";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma"
		};
	};
	class MRC_B1_Darkgreen;
	class LOR_B1_TEAMLEADER : MRC_B1_Darkgreen
	{
		displayName = "B1 | Teamleader";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell"
		};
	};
	class MRC_B1_Swampcolour;
	class LOR_B1_SQUADLEADER : MRC_B1_Swampcolour
	{
		displayName = "B1 | Squadleader";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell",
			"SmokeShell",
			"SquadShieldMagazine"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell",
			"SmokeShell",
			"SquadShieldMagazine"
		};
	};
	class MRC_B1_Officer;
	class LOR_B1_PLATOONLEADER : MRC_B1_Officer
	{
		displayName = "B1 | Platoonleader";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell",
			"SmokeShell",
			"SquadShieldMagazine"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator",
            "SmokeShell",
			"SmokeShell",
			"SquadShieldMagazine"
		};
	};
	class MRC_B1_AT;
	class LOR_B1_RIFLEMAN_AT : MRC_B1_AT
	{
		displayName = "B1 | Rifleman (AT)";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"JLTS_RPS6_mag",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"JLTS_RPS6_mag",
			"Aux501_Weapons_Mags_CISDetonator"
		};
	};
	class MRC_B1_Grey;
	class LOR_B1_GRENADIER : MRC_B1_Grey
	{
		displayName = "B1 | Grenadier";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "Grenadier";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"MRC_EPL2",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"MRC_EPL2",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"epl_mag",
			"epl_mag",
			"epl_mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30"
		};
		respawnMagazines[] = 
		{
			"epl_mag",
			"epl_mag",
			"epl_mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30"
		};
	};
	class MRC_B1_Black;
	class LOR_B1_MACHINEGUNNER : MRC_B1_Black
	{
		displayName = "B1 | Machinegunner";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "MachineGunner";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"E5C_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"E5C_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_130Rnd_EM50_RedPlasma",
			"3AS_130Rnd_EM50_RedPlasma",
			"3AS_130Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"3AS_130Rnd_EM50_RedPlasma",
			"3AS_130Rnd_EM50_RedPlasma",
			"3AS_130Rnd_EM50_RedPlasma",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
	};
	class LOR_B1_HEAVYGUNNER: LOR_B1_RIFLEMAN
	{
		displayName = "B1 | Heavy Gunner (Shotgun)";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "Sapper";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"JLTS_DP23",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"JLTS_DP23",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"JLTS_DP23_MAG",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
	};
	class MRC_B1_Sniper;
	class LOR_B1_MARKSMAN : MRC_B1_Sniper
	{
		displayName = "B1 | Marksman";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "Marksman";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5S_F",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5S_F",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_10Rnd_EM90_Mag",
			"3AS_10Rnd_EM90_Mag",
			"3AS_10Rnd_EM90_Mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"3AS_10Rnd_EM90_Mag",
			"3AS_10Rnd_EM90_Mag",
			"3AS_10Rnd_EM90_Mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_CISDetonator",
			"Aux501_Weapons_Mags_CISDetonator"
		};
	};
	class LOR_B1_SHARPSHOOTER : LOR_B1_MARKSMAN
	{
		displayName = "B1 | Sharpshooter";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "Marksman";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_DroidBinocular",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_DroidBinocular",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"JLTS_E5S",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"JLTS_E5S",
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
            "SmokeShell"
		};
		respawnMagazines[] = 
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
            "SmokeShell"
		};
	};
	class LOR_B1_AT_SPECIALIST : LOR_B1_RIFLEMAN_AT
	{
		displayName = "B1 | AT-Specialist";
		role = "MissileSpecialist";
	};
	class MRC_B1_AA;
	class LOR_B1_AA_SPECIALIST : MRC_B1_AA
	{
		displayName = "B1 | AA-Specialist";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "MissileSpecialist";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"3AS_E5_F",
			"MRC_e60r",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"3AS_E5_F",
			"MRC_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"MRC_e60r_aa",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"MRC_e60r_aa",
			"Aux501_Weapons_Mags_CISDetonator"
		};
	};
	class MRC_B1_White;
	class LOR_B1_MEDIC : MRC_B1_White
	{
		displayName = "B1 | Medic";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		role = "CombatLifeSaver";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"SmokeShell"
		};
		respawnMagazines[] = 
		{
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"SmokeShell"
		};
		items[] = 
		{
			"Medikit"
		};
		respawnItems[] = 
		{
			"Medikit"
		};
	};
	class MRC_B1_Firefighter;
	class LOR_B1_ENGINEER : MRC_B1_Firefighter
	{
		displayName = "B1 | Engineer";
		faction="LOR_CIS";
		editorSubcategory="LOR_CIS_B1";
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
            "ItemGPS",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[] = 
		{
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"Aux501_Weaps_RG4D",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		respawnMagazines[] = 
		{
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_RG4D30",
			"Aux501_Weapons_Mags_CISDetonator"
		};
		items[] = 
		{
			"ToolKit"
		};
		respawnItems[] = 
		{
			"ToolKit"
		};
	};
};

class CfgGroups
{
	class EAST
	{
		class LOR_CIS
		{
			name="[LOR] CIS";
			#include "groups.hpp"
		};
	};
};