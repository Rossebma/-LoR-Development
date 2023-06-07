class CfgPatches
{
	class LOR_ARF
	{
		requiredAddons[]=
		{
			"RD501_patch_clones"
		};
		requiredVersion=1.0;
		author="LoR - VYKE";
		units[]={};
		weapons[]=
		{
			//Vests
			"LOR_ARC_VEST_A",
			"LOR_ARC_VEST_B",
			"LOR_ARC_VEST_C",
			"LOR_ARC_VEST_D",
			"LOR_ARC_VEST_E"
		};
	};
};


class cfgWeapons
{
	class RD501_501_arc_vest_acc_5_A;
	class ItemInfo;

    class LOR_ARC_VEST_BASE: RD501_501_arc_vest_acc_5_A
    {
        displayname = "[LOR] ARC ACC 01 A";
        picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
        model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {LOR_WESTEN\data\arc_acc_05_A.paa};
        hiddenSelectionsMaterials[]=
        {
            "\RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
            containerClass="Supply100";
            hiddenSelections[]=
            {
                "camo1"
            };
            hiddenSelectionsMaterials[]=
            {
                "RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
            };
			class HitpointsProtectionInfo
            {
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 9500;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 9000;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8000;
                    passThrough = 0.4;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 8700;
                    passThrough = 0.4;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 4000;
                    passThrough = 0.2;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 6000;
                    passThrough = 0.2;
                };
                class Body
                {
                    armor = 10000;
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };

	/*** *** *** *** ***
		VESTS
	*** *** *** *** ***/

	class LOR_ARC_VEST_A: LOR_ARC_VEST_BASE
	{
		displayName="[LoR] ARC Weste (Montes)";
		hiddenSelectionsTextures[]=
		{
			"LOR_WESTEN\data\arc_acc_05_A.paa"
		};
	};
	class LOR_ARC_VEST_B: LOR_ARC_VEST_BASE
	{
		displayName="[LoR] ARC Weste (Ants)";
		hiddenSelectionsTextures[]=
		{
			"LOR_WESTEN\data\arc_acc_05_B.paa"
		};
	};
	class LOR_ARC_VEST_C: LOR_ARC_VEST_BASE
	{
		displayName="[LoR] ARC Weste (Wolf)";
		hiddenSelectionsTextures[]=
		{
			"LOR_WESTEN\data\arc_acc_05_C.paa"
		};
	};
	class LOR_ARC_VEST_D: LOR_ARC_VEST_BASE
	{
		displayName="[LoR] ARC Weste (VYKE)";
		hiddenSelectionsTextures[]=
		{
			"LOR_WESTEN\data\arc_acc_05_D.paa"
		};
	};
	class LOR_ARC_VEST_E: LOR_ARC_VEST_BASE
	{
		displayName="[LoR] ARC Weste (Wood)";
		hiddenSelectionsTextures[]=
		{
			"LOR_WESTEN\data\arc_acc_05_E.paa"
		};
	};
};

