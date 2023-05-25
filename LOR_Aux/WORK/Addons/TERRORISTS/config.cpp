#include "config_macros.hpp"

class CfgPatches
{
    class LOR_TERRORISTS
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
            };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
			"LOR_T_C1_RIFLEMAN",
			"LOR_T_C1_GUARD",
			"LOR_T_C1_AUTORIFLEMAN",
			"LOR_T_C1_SNIPER",
			"LOR_T_C1_BOSS",
			"LOR_T_C2_RIFLEMAN",
			"LOR_T_C2_GUARD",
			"LOR_T_C2_AUTORIFLEMAN",
			"LOR_T_C2_SNIPER",
			"LOR_T_C2_BOSS",
			"LOR_T_C3_RIFLEMAN",
			"LOR_T_C3_GUARD",
			"LOR_T_C3_AUTORIFLEMAN",
			"LOR_T_C3_GRENADIER",
			"LOR_T_C3_BOSS",
			"LOR_T_C4_RIFLEMAN",
			"LOR_T_C4_GUARD",
			"LOR_T_C4_AUTORIFLEMAN",
			"LOR_T_C4_SNIPER",
			"LOR_T_C4_BOSS",
			"LOR_T_C5_RIFLEMAN",
			"LOR_T_C5_GUARD",
			"LOR_T_C5_AUTORIFLEMAN",
			"LOR_T_C5_GRENADIER",
			"LOR_T_C5_SNIPER",
			"LOR_T_C5_AT",
			"LOR_T_C5_AA",
			"LOR_T_C5_BOSS"


        };
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {
		};
    };
};

class cfgFactionClasses 
    { 
        class LOR_TERROR
        { 
            displayName = "[LOR] Terrorist Factions";  // Name on ingame menus 
            priority = 3; // Position in list. 
            side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
            icon = ""; // Leave as is
        };
};

class cfgVehicleClasses
{
	class LOR_TERROR_C_1
	{
		displayName="Cell 1";
	};
    class LOR_TERROR_C_2
	{
		displayName="Cell 2";
	};
    class LOR_TERROR_C_3
	{
		displayName="Cell 3";
	};
    class LOR_TERROR_C_4
	{
		displayName="Cell 4";
	};
    class LOR_TERROR_C_5
	{
		displayName="Cell 5";
	};
};

class CfgEditorSubcategories
{
	class LOR_TERROR_C_1
	{
		displayName="Cell 1";
	};
    class LOR_TERROR_C_2
	{
		displayName="Cell 2";
	};
    class LOR_TERROR_C_3
	{
		displayName="Cell 3";
	};
    class LOR_TERROR_C_4
	{
		displayName="Cell 4";
	};
    class LOR_TERROR_C_5
	{
		displayName="Cell 5";
	};
};

class CfgVehicles
{
	#include "universal_uniforms.hpp"
	#include "cells\cell1.hpp"
	#include "cells\cell2.hpp"
	#include "cells\cell3.hpp"
	#include "cells\cell4.hpp"
	#include "cells\cell5.hpp"
};

class CfgGroups
{
	class EAST
	{
		class LOR_TERROR
		{
			name = "[LOR] Terrorist Groups";
			#include "groups\gcell1.hpp"
			#include "groups\gcell2.hpp"
			#include "groups\gcell3.hpp"
			#include "groups\gcell4.hpp"
			#include "groups\gcell5.hpp"
		};
	};
};