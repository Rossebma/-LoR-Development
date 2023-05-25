class CfgPatches
{
	class RD501_patch_jumppack
	{
		author="[LOR] Thinker";
		requiredAddons[]=
		{};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		vehicles[]={
			"LOR_JP_ARCTIC",
			"LOR_JP_JUNGLE",
			"LOR_JP_MULTICAM",
			"LOR_JP_NIGHT",
			"LOR_JP_SWAMP",
			"LOR_JP_WOODLAND",
			"LOR_JP_S_ARCTIC",
			"LOR_JP_S_JUNGLE",
			"LOR_JP_S_MULTICAM",
			"LOR_JP_S_NIGHT",
			"LOR_JP_S_SWAMP",
			"LOR_JP_S_WOODLAND"
		};
	};
};

class CfgVehicles
{
	class B_AssaultPack_blk;
	class JLTS_Clone_jumppack_mc;
	class JLTS_Clone_jumppack;
	class JLTS_Clone_jumppack_JT12;
	
	class RD501_JLTS_Clone_jumppack_mc;
	class LOR_JP : RD501_JLTS_Clone_jumppack_mc {
		maximumLoad=1000;
	};
	class RD501_JLTS_Clone_jumppack_mc2;
	class LOR_JP_S : RD501_JLTS_Clone_jumppack_mc2 {
		maximumLoad=1000;
	};

	//Normale Jumppacks

	class LOR_JP_ARCTIC : LOR_JP {
		displayname = "[LOR] AB Jumppack (ARCTIC)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_ARCTIC.paa" };
	};

	class LOR_JP_JUNGLE : LOR_JP {
		displayname = "[LOR] AB Jumppack (JUNGLE)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_JUNGLE.paa" };
	};

	class LOR_JP_MULTICAM : LOR_JP {
		displayname = "[LOR] AB Jumppack (MULTICAM)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_MULTICAM.paa" };
	};

	class LOR_JP_NIGHT : LOR_JP {
		displayname = "[LOR] AB Jumppack (NIGHT)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_NIGHT.paa" };
	};

	class LOR_JP_SWAMP : LOR_JP {
		displayname = "[LOR] AB Jumppack (SWAMP)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_SWAMP.paa" };
	};

	class LOR_JP_WOODLAND : LOR_JP {
		displayname = "[LOR] AB Jumppack (WOODLAND)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_WOODLAND.paa" };
	};

	//Kleine Jumppacks

	class LOR_JP_S_ARCTIC : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (ARCTIC)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_ARCTIC.paa" };
	};

	class LOR_JP_S_JUNGLE : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (JUNGLE)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_JUNGLE.paa" };
	};

	class LOR_JP_S_MULTICAM : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (MULTICAM)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_MULTICAM.paa" };
	};

	class LOR_JP_S_NIGHT : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (NIGHT)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_NIGHT.paa" };
	};

	class LOR_JP_S_SWAMP : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (SWAMP)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_SWAMP.paa" };
	};

	class LOR_JP_S_WOODLAND : LOR_JP_S {
		displayname = "[LOR] CDV - Camo (WOODLAND)";
		hiddenSelectionsTextures[] = { "\JUMPPACKS\textures\JP_S_WOODLAND.paa" };
	};
	
};