#define MODNAME LOR

#define CONCAT(a,b) a##b
#define CONCAT_3(a,b,c) CONCAT(a,CONCAT(b,c))
#define CONCAT_4(a,b,c,d) CONCAT(a,CONCAT_3(b,c,d))
#define CONCAT_5(a,b,c,d,e) CONCAT(a,CONCAT_4(b,c,d,e))
#define CONCAT_6(a,b,c,d,e,f) CONCAT(a,CONCAT_5(b,c,d,e,f))
#define CONCAT_7(a,b,c,d,e,f,g) CONCAT(a,CONCAT_6(b,c,d,e,f,g))

#define UNDERSCORE_CONCAT(a,b) CONCAT_3(a,_,b)
#define ADDON UNDERSCORE_CONCAT(MODNAME,COMPONENT)

#define macro_new_helmet(group,name) CONCAT_5(MODNAME,_,group,_helmet_,name)

#define macro_custom_helmet_textures \HELMETS\textures

//Normal Infantry ones JLTS
	#define NEW_LOR_Inf_Helm_JLTS(NAME)\
		class macro_new_helmet(infantry,NAME) : macro_new_helmet(infantry,jlts_recruit)\
		{\
			scope = 2;\
			displayName = [LoR] Helmet ('##NAME##');\
			hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\##NAME##.paa};\
		};

//ARC JLTS
	#define NEW_LOR_Arc_Helm_JLTS(NAME)\
		class macro_new_helmet(arc,NAME) : macro_new_helmet(arc,base_jlts)\
		{\
			scope = 2;\
			displayName = [LOR] ARC HELM ('##NAME##');\
			hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\arc\##NAME##.paa};\
		};