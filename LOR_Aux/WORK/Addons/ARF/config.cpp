class CfgPatches
{
	class LOR_ARF
	{
		requiredAddons[]=
		{
			"RD501_patch_clones",
			"212th_Helmets"
		};
		requiredVersion=1.0;
		author="LoR";
		units[]={};
		weapons[]=
		{
			//Helmets
			"LOR_ARF_Helmet",
			"LOR_ARF_Helmet_alt",
			"LOR_ARF_Helmet_alt2",
			"LOR_ARF_Helmet_Arctic",
			"LOR_ARF_Helmet_Desert",
			"LOR_ARF_Helmet_Jungle",
			"LOR_ARF_Helmet_Night",
			"LOR_ARF_Helmet_Woodland",
			"LOR_ARF_Helmet_Swamp",
			"LOR_ARF_Helmet_Multicam",
			//Uniforms
			"LOR_ARF_Uniform",
			"LOR_ARF_Uniform_alt",
			"LOR_ARF_Uniform_alt2",
			"LOR_ARF_Uniform_med",
			"LOR_ARF_Uniform_alt_med",
			"LOR_ARF_Uniform_alt2_med",
			"LOR_ARF_Uniform_Arctic",
			"LOR_ARF_Uniform_Desert",
			"LOR_ARF_Uniform_Jungle",
			"LOR_ARF_Uniform_Night",
			"LOR_ARF_Uniform_Woodland",
			"LOR_ARF_Uniform_Swamp",
			"LOR_ARF_Uniform_Multicam",
			//Vests
			"LOR_ARF_Vest",
			"LOR_ARF_Vest_Arctic",
			"LOR_ARF_Vest_Desert",
			"LOR_ARF_Vest_Jungle",
			"LOR_ARF_Vest_Night",
			"LOR_ARF_Vest_Woodland",
			"LOR_ARF_Vest_Swamp",
			"LOR_ARF_Vest_Multicam"
		};
	};
};

#include "extended_arsenal.hpp"

class cfgWeapons
{
	/*** *** *** *** ***
		HELMETS
	*** *** *** *** ***/

	class 212th_ARF_Helm;
	class HeadgearItem;

	class LOR_ARF_Helmet_Base: 212th_ARF_Helm
	{
		scope=1;
		displayName="[501st] ARF Helmet";
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\212th\Armor\212th_Helms\ARF_Helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
			//Armor:
			material=-1;
			explosionShielding=2.2;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.60000002;
				};
			};
		};
	};
	class LOR_ARF_Helmet: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf.paa",
			"ARF\data\H_arf.paa"
		};
	};
	class LOR_ARF_Helmet_alt: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (alt)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_alt.paa",
			"ARF\data\H_arf_alt.paa"
		};
	};
	class LOR_ARF_Helmet_alt2: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (alt2)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_alt2.paa",
			"ARF\data\H_arf_alt2.paa"
		};
	};
	class LOR_ARF_Helmet_Arctic: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_arctic.paa",
			"ARF\data\H_arf_arctic.paa"
		};
	};
	class LOR_ARF_Helmet_Desert: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Desert)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_desert.paa",
			"ARF\data\H_arf_desert.paa"
		};
	};
	class LOR_ARF_Helmet_Jungle: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Jungle)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_jungle.paa",
			"ARF\data\H_arf_jungle.paa"
		};
	};
	class LOR_ARF_Helmet_Night: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Night)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_night.paa",
			"ARF\data\H_arf_night.paa"
		};
	};
	class LOR_ARF_Helmet_Woodland: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_woodland.paa",
			"ARF\data\H_arf_woodland.paa"
		};
	};
	class LOR_ARF_Helmet_Swamp: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Swamp)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_swamp.paa",
			"ARF\data\H_arf_swamp.paa"
		};
	};
	class LOR_ARF_Helmet_Multicam: LOR_ARF_Helmet_Base
	{
		scope=2;
		displayName="[LoR] ARF Helmet (Multi-Purpose)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\H_arf_multicam.paa",
			"ARF\data\H_arf_multicam.paa"
		};
	};

	/*** *** *** *** ***
		UNIFORMS
	*** *** *** *** ***/

	class RD501_501_inf_uniform_trooper;
	class ItemInfo;

	class LOR_ARF_Uniform_Arctic: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Arctic)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Arctic";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Desert: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Desert)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Desert";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Jungle: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Jungle)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Jungle";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Night: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Night)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Night";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Woodland: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Woodland)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Woodland";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Swamp: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Swamp)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Swamp";
			containerClass="Supply100";
		};
	};
	class LOR_ARF_Uniform_Multicam: RD501_501_inf_uniform_trooper
	{
		displayName="[LoR] ARF Uniform (Multi-Purpose)";
		class ItemInfo: ItemInfo
		{
			uniformClass="LOR_ARF_Multicam";
			containerClass="Supply100";
		};
	};

	/*** *** *** *** ***
		VESTS
	*** *** *** *** ***/

	class RD501_501_holster_vest_vest;

	class LOR_ARF_Vest_Arctic: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_arctic.paa"
		};
	};
	class LOR_ARF_Vest_Desert: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Desert)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_desert.paa"
		};
	};
	class LOR_ARF_Vest_Jungle: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Jungle)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_jungle.paa"
		};
	};
	class LOR_ARF_Vest_Night: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Night)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_night.paa"
		};
	};
	class LOR_ARF_Vest_Woodland: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_woodland.paa"
		};
	};
	class LOR_ARF_Vest_Swamp: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Swamp)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_Swamp.paa"
		};
	};
	class LOR_ARF_Vest_Multicam: RD501_501_holster_vest_vest
	{
		displayName="[LoR] ARF Vest (Multi-Purpose)";
		hiddenSelectionsTextures[]=
		{
			"ARF\data\V_arf_Multicam.paa"
		};
	};
};

class cfgVehicles
{
	class RD501_501_inf_uniform_skin_trooper;
	
	class LOR_ARF_Arctic: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_arctic1.paa",
			"ARF\data\U_arf_arctic2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Desert: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_desert1.paa",
			"ARF\data\U_arf_desert2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Jungle: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_jungle1.paa",
			"ARF\data\U_arf_jungle2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Night: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_night1.paa",
			"ARF\data\U_arf_night2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Woodland: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_woodland1.paa",
			"ARF\data\U_arf_woodland2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Swamp: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_Swamp1.paa",
			"ARF\data\U_arf_Swamp2.paa"
		};
		camouflage = 0.1;
	};
	class LOR_ARF_Multicam: RD501_501_inf_uniform_skin_trooper
	{
		hiddenSelectionsTextures[]=
		{
			"ARF\data\U_arf_Multicam1.paa",
			"ARF\data\U_arf_Multicam2.paa"
		};
		camouflage = 0.1;
	};
};