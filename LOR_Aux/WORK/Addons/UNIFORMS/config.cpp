class CfgPatches
{
	class LOR_UNIFORMS
	{
		requiredAddons[]=
		{
			"RD501_patch_clones"
		};
		requiredVersion=0.1;
		author="Rossebma";
		units[]={};
		weapons[]=
		{
            //Recruit
            "LOR_INF_UNIFORM_CR",
            //Custom
            "LOR_INF_UNIFORM_CUSTOM_THINKER",
            "LOR_INF_UNIFORM_CUSTOM_SOAP",
            //Lightning Platoon
            "LOR_INF_UNIFORM_LP_CL",
            "LOR_INF_UNIFORM_LP_CMS",
            //Phoenix Section
            "LOR_INF_UNIFORM_PHO_CSS",
            "LOR_INF_UNIFORM_PHO_CS",
            "LOR_INF_UNIFORM_PHO_CP",
            "LOR_INF_UNIFORM_PHO_CSP",
            "LOR_INF_UNIFORM_PHO_CLT",
            "LOR_INF_UNIFORM_PHO_CST",
            "LOR_INF_UNIFORM_PHO_CFT",
            "LOR_INF_UNIFORM_PHO_CT",
            //Medical Section
            "LOR_INF_UNIFORM_MED_CSS",
            "LOR_INF_UNIFORM_MED_CS",
            "LOR_INF_UNIFORM_MED_CP",
            "LOR_INF_UNIFORM_MED_CSP",
            "LOR_INF_UNIFORM_MED_CLT",
            "LOR_INF_UNIFORM_MED_CST",
            "LOR_INF_UNIFORM_MED_CFT",
            "LOR_INF_UNIFORM_MED_CT",
            //Armored Vehicle Platoon
            "LOR_INF_UNIFORM_AVP_CL",
            "LOR_INF_UNIFORM_AVP_CMS",
            "LOR_INF_UNIFORM_AVP_CSS",
            "LOR_INF_UNIFORM_AVP_CS",
            "LOR_INF_UNIFORM_AVP_CP",
            "LOR_INF_UNIFORM_AVP_CSP",
            "LOR_INF_UNIFORM_AVP_CLT",
            "LOR_INF_UNIFORM_AVP_CST",
            "LOR_INF_UNIFORM_AVP_CFT",
            "LOR_INF_UNIFORM_AVP_CT",
            "LOR_INF_UNIFORM_HQ_CO",
            "LOR_INF_UNIFORM_HQ_CFS",
            //TARN
            "LOR_INF_CAMO_JUNGLE"
		};
	};
};

class cfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class V_RebreatherB;
    class VestItem;


    //uniforms
    #include "extended_arsenal.hpp"
};




class DefaultEventhandlers;
class CfgVehicles
{
    class B_Soldier_base_f;
    class B_Soldier_f: B_Soldier_base_F
    {
        class HitPoints;
    };

    class O_Soldier_base_F;

    //RECRUIT
    class LOR_INF_UNIFORM_CR: B_Soldier_f
    {
        author = "LoR";
        scope = 1;
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
        nakedUniform = "U_BasicBody";
        picture = "\SWLB_units\data\ui\icon_SWLB_clone_501stTrooper_uniform_ca.paa";
        hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\universal\cr_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
            "MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
        };
        class HitPoints: HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.80000001;
                radius=0.079999998;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitNeck: HitFace
            {
                armor=1;
                material=-1;
                name="neck";
                passThrough=0.80000001;
                radius=0.1;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
            };
            class HitHead: HitNeck
            {
                armor=1;
                material=-1;
                name="head";
                passThrough=0.80000001;
                radius=0.2;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
                depends="HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor=8;
                material=-1;
                name="pelvis";
                passThrough=0.80000001;
                radius=0.23999999;
                explosionShielding=3;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="";
            };
            class HitAbdomen: HitPelvis
            {
                armor=6;
                material=-1;
                name="spine1";
                passThrough=0.80000001;
                radius=0.16;
                explosionShielding=3;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor=6;
                material=-1;
                name="spine2";
                passThrough=0.33000001;
                radius=0.18000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitChest: HitDiaphragm
            {
                armor=8;
                material=-1;
                name="spine3";
                passThrough="0.33000001radius = 0.18";
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitBody: HitChest
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=1;
                radius=0;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor=6;
                material=-1;
                name="arms";
                passThrough=1;
                radius=0.1;
                explosionShielding=3;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="0";
            };
            class HitHands: HitArms
            {
                armor=6;
                material=-1;
                name="hands";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="HitArms";
            };
            class HitLegs: HitHands
            {
                armor=6;
                material=-1;
                name="legs";
                passThrough=1;
                radius=0.14;
                explosionShielding=3;
                visual="injury_legs";
                minimalHit=0.0099999998;
                depends="0";
            };
            class Incapacitated: HitLegs
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=1;
                radius=0;
                explosionShielding=3;
                visual="";
                minimalHit=0;
                depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm
            {
                armor=6;
                material=-1;
                name="hand_l";
                passThrough=1;
                radius=0.079999998;
                explosionShielding=3;
                visual="injury_hands";
                minimalHit=0.0099999998;
            };
            class HitRightArm: HitLeftArm
            {
                name="hand_r";
            };
            class HitLeftLeg
            {
                armor=6;
                material=-1;
                name="leg_l";
                passThrough=1;
                radius=0.1;
                explosionShielding=3;
                visual="injury_legs";
                minimalHit=0.0099999998;
            };
            class HitRightLeg: HitLeftLeg
            {
                name="leg_r";
            };
        };
        armor=2;
        armorStructural=4;
        explosionShielding=40.40000001;
        minTotalDamageThreshold=0.001;
        impactDamageMultiplier=0.5;
    };

    //Custom
    class LOR_INF_UNIFORM_CUSTOM_THINKER: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\custom\thinker_armor_upper.paa",
            "UNIFORMS\data\universal\cl_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_CUSTOM_SOAP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\hq\cfs_armor_upper.paa",
            "UNIFORMS\data\universal\cfs_armor_lower.paa"
        };
    };

    //Lightning Platoon
    class LOR_INF_UNIFORM_LP_CL: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\lp\lig_cl_armor_upper.paa",
            "UNIFORMS\data\universal\cl_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_LP_CMS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\lp\lig_cms_armor_upper.paa",
            "UNIFORMS\data\universal\cms_armor_lower.paa"
        };
    };
    //Phoenix Section
    class LOR_INF_UNIFORM_PHO_CSS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_css_armor_upper.paa",
            "UNIFORMS\data\universal\css_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_cs_armor_upper.paa",
            "UNIFORMS\data\universal\cs_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_cp_armor_upper.paa",
            "UNIFORMS\data\universal\cp_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CSP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_csp_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CLT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_clt_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CST: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_cst_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CFT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_cft_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_PHO_CT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\phoenix\pho_ct_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    //Medical Section
    class LOR_INF_UNIFORM_MED_CSS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_css_armor_upper.paa",
            "UNIFORMS\data\universal\css_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_cs_armor_upper.paa",
            "UNIFORMS\data\universal\cs_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_cp_armor_upper.paa",
            "UNIFORMS\data\universal\cp_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CSP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_csp_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CLT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_clt_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CST: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_cst_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CFT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_cft_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_MED_CT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\medical\med_ct_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    //Armored Vehicle Platoon
    class LOR_INF_UNIFORM_AVP_CL: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cl_armor_upper.paa",
            "UNIFORMS\data\universal\cl_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CMS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cms_armor_upper.paa",
            "UNIFORMS\data\universal\cms_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CSS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_css_armor_upper.paa",
            "UNIFORMS\data\universal\css_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cs_armor_upper.paa",
            "UNIFORMS\data\universal\cs_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cp_armor_upper.paa",
            "UNIFORMS\data\universal\cp_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CSP: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_csp_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CLT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_clt_armor_upper.paa",
            "UNIFORMS\data\universal\clt_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CST: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cst_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CFT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_cft_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_AVP_CT: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\avp\avp_ct_armor_upper.paa",
            "UNIFORMS\data\universal\cr_armor_lower.paa"
        };
    };
    //Company Command
    class LOR_INF_UNIFORM_HQ_CO: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\hq\co_armor_upper.paa",
            "UNIFORMS\data\universal\co_armor_lower.paa"
        };
    };
    class LOR_INF_UNIFORM_HQ_CFS: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\hq\cfs_armor_upper.paa",
            "UNIFORMS\data\universal\cfs_armor_lower.paa"
        };
    };

    //TARN
    class LOR_INF_CAMO_JUNGLE: LOR_INF_UNIFORM_CR
    {
        hiddenSelectionsTextures[] = {
            "UNIFORMS\data\tarn\inf_jungle_armor_upper.paa",
            "UNIFORMS\data\tarn\inf_jungle_armor_lower.paa"
        };
        camouflage = 0.25;
    };
};