class LOR_INF_UNIFORM_CR: Uniform_Base
{
	author = "Rossebma";
	scope = 2;
	nakedUniform = "U_BasicBody";
	displayName = "[LoR] RECRUIT UNIFORM";
	picture = "\SWLB_units\data\ui\icon_SWLB_clone_501stTrooper_uniform_ca.paa";
	model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	class ItemInfo: UniformItem
	{
		uniformClass = LOR_INF_UNIFORM_CR
		armor=2;
        armorStructural=4;
        explosionShielding=40.40000001;
        impactDamageMultiplier=0.5;
		modelSides[] = {6};
		uniformType = "Neopren";
		containerClass = "Supply100";
		mass = 40;
	};
};

//Custom
class LOR_INF_UNIFORM_CUSTOM_THINKER: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Uniform Thinker";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_CUSTOM_THINKER;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_CUSTOM_SOAP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Uniform SOAP";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_CUSTOM_SOAP;
		containerClass = "Supply100";
	};
};

//Lighning Platoon
class LOR_INF_UNIFORM_LP_CL: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Lighning Platoon (1-CL)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_LP_CL;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_LP_CMS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Lighning Platoon (2-CMS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_LP_CMS;
		containerClass = "Supply100";
	};
};
//Phoenix Section
class LOR_INF_UNIFORM_PHO_CSS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (3-CSS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CSS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (4-CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (5-CP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CSP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (6-CSP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CSP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CLT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (7-CLT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CLT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CST: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (8-CST)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CST;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CFT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (9-CFT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CFT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_PHO_CT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Phoenix Section (91-CT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_PHO_CT;
		containerClass = "Supply100";
	};
};
//Medical Section
class LOR_INF_UNIFORM_MED_CSS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (3-CSS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CSS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (4-CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (5-CP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CSP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (6-CSP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CSP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CLT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (7-CLT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CLT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CST: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (8-CST)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CST;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CFT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (9-CFT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CFT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_MED_CT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Medical Section (91-CT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_MED_CT;
		containerClass = "Supply100";
	};
};
//AVP
class LOR_INF_UNIFORM_AVP_CL: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (1-CL)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CL;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CMS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (2-CMS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CMS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CSS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (3-CSS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CSS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (4-CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CS;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (5-CP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CSP: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (6-CSP)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CSP;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CLT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (7-CLT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CLT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CST: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (8-CST)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CST;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CFT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (9-CFT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CFT;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_AVP_CT: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Amored Vehicle Platoon (91-CT)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_AVP_CT;
		containerClass = "Supply100";
	};
};
//Company Command
class LOR_INF_UNIFORM_HQ_CO: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Company Command (CO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_HQ_CO;
		containerClass = "Supply100";
	};
};
class LOR_INF_UNIFORM_HQ_CFS: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Company Command (CFS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_UNIFORM_HQ_CFS;
		containerClass = "Supply100";
	};
};

//TARN 
class LOR_INF_CAMO_JUNGLE: LOR_INF_UNIFORM_CR
{
	displayName = "[LoR] Jungle Uniform (INF)";
	class ItemInfo: ItemInfo
	{
		uniformClass = LOR_INF_CAMO_JUNGLE;
		containerClass = "Supply100";
	};
};