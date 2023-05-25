#include "config_macros.cpp"

class CfgPatches
{
    class LOR_HELMETS
    {
        author=DANKAUTHORS;
        requiredAddons[]=
        {
            "RD501_patch_main"
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]={
            macro_new_helmet(infantry,jlts_recruit),
            "LOR_HELMET_INF_JUNGLE",
            macro_new_helmet(infantry,Thinker)
        };
    };
};

class CfgWeapons
{
    class HeadgearItem;
    class H_HelmetB;
    class SWLB_P2_SpecOps_Helmet;
    class 21st_clone_P2_helmet;
    class 3as_P1_Base;
    class 21st_clone_P2_ENG_helmet;
    class JLTS_CloneHelmetP2;
    class JLTS_CloneHelmetARC;

    class macro_new_helmet(infantry,jlts_recruit): H_HelmetB
    {
        scope = 2;
        scopeArsenal = 2;
        author = "501st Aux Team";
        weaponPoolAvailable = 1;       
        subItems[] = {"G_B_Diving","ItemcTabHCam"};
        ace_hearing_protection = 0.85; 		
        ace_hearing_lowerVolume = 0;   

        displayName = "[LoR] Trooper";
        picture = "\SWLB_units\data\ui\icon_SWLB_clone_501stTrooper_helmet_ca.paa";
        model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\inf\trooper_helmet.paa"};
        hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
            modelSides[] = {6};
            hiddenSelections[] = {"Camo1"};
            material = -1;
            explosionShielding = 2.2;
            minimalHit = 0.01;
            passThrough = 0.01;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.6;
                };
            };
        };
    };

    class LOR_HELMET_INF_JUNGLE : macro_new_helmet(infantry,jlts_recruit)
    {
        displayName = "[LoR] INF HELMET JUNGLE";
        hiddenSelectionsTextures[] = {"\HELMETS\textures\inf_helmet_jungle.paa"};
    };

    //INFANTRY//
    NEW_LOR_Inf_Helm_JLTS(Thinker);
    NEW_LOR_Inf_Helm_JLTS(Wolf);

};