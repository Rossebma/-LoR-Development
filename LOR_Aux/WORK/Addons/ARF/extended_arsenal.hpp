//image="#(rgb,8,8,3)color(0.7,0.7,0.7,1)";

class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class LOR_helmets_arf
		{
			label="ARF";
			author="Rossebma";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				values[]=
				{
					"arctic",
					"desert",
                    "jungle",
					"night",
					"woodland",
					"swamp",
					"multicam"
				};
                class arctic
				{
					label="Arctic";
					image="#(rgb,8,8,3)color(1,1,1,1)";
				};
                class desert
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.89,0.73,0.44,1)";
				};
                class jungle
				{
					label="Jungle";
					image="#(rgb,8,8,3)color(0.12,0.41,0.22,1)";
				};
                class night
				{
					label="Night";
					image="#(rgb,8,8,3)color(0,0,0,1)";
				};
				class woodland
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.5,0.6,0.4,1)";
				};
				class swamp
				{
					label="Swamp";
					image="#(rgb,8,8,3)color(0.54,0.52,0.43,1)";
				};
				class multicam
				{
					label="Multicam";
					image="#(rgb,8,8,3)color(0.55,0.50,0.40,1)";
				};
			};
		};
        class LOR_uniform_arf
		{
			label="ARF";
			author="Rossebma";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				values[]=
				{
                    "arctic",
					"desert",
                    "jungle",
					"night",
					"woodland",
					"swamp",
					"multicam"
				};
                class arctic
				{
					label="Arctic";
					image="#(rgb,8,8,3)color(1,1,1,1)";
				};
                class desert
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.89,0.73,0.44,1)";
				};
                class jungle
				{
					label="Jungle";
					image="#(rgb,8,8,3)color(0.12,0.41,0.22,1)";
				};
                class night
				{
					label="Night";
					image="#(rgb,8,8,3)color(0,0,0,1)";
				};
				class woodland
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.5,0.6,0.4,1)";
				};
				class swamp
				{
					label="Swamp";
					image="#(rgb,8,8,3)color(0.89,0.73,0.44,1)";
				};
				class multicam
				{
					label="Multicam";
					image="#(rgb,8,8,3)color(0.55,0.50,0.40,1)";
				};
			};
		};
		class LOR_vests_arf
		{
			label="ARF";
			author="Rossebma";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				values[]=
				{
                    "arctic",
					"desert",
                    "jungle",
					"night",
					"woodland",
					"swamp",
					"multicam"
				};
                class arctic
				{
					label="Arctic";
					image="#(rgb,8,8,3)color(1,1,1,1)";
				};
                class desert
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.89,0.73,0.44,1)";
				};
                class jungle
				{
					label="Jungle";
					image="#(rgb,8,8,3)color(0.12,0.41,0.22,1)";
				};
                class night
				{
					label="Night";
					image="#(rgb,8,8,3)color(0,0,0,1)";
				};
				class woodland
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.5,0.6,0.4,1)";
				};
				class swamp
				{
					label="Swamp";
					image="#(rgb,8,8,3)color(0.89,0.73,0.44,1)";
				};
				class multicam
				{
					label="Multicam";
					image="#(rgb,8,8,3)color(0.55,0.50,0.40,1)";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
        class LOR_ARF_Helmet_Arctic
        {
            model="LOR_helmets_arf";
			camo="arctic";
        };
        class LOR_ARF_Helmet_Desert
        {
            model="LOR_helmets_arf";
			camo="desert";
        };
        class LOR_ARF_Helmet_Jungle
        {
            model="LOR_helmets_arf";
			camo="jungle";
        };
        class LOR_ARF_Helmet_Night
        {
            model="LOR_helmets_arf";
			camo="night";
        };
        class LOR_ARF_Helmet_Woodland
        {
            model="LOR_helmets_arf";
			camo="woodland";
        };
		class LOR_ARF_Helmet_Swamp
        {
            model="LOR_helmets_arf";
			camo="swamp";
        };
		class LOR_ARF_Helmet_Multicam
        {
            model="LOR_helmets_arf";
			camo="multicam";
        };


		class LOR_ARF_Uniform_Arctic
        {
            model="LOR_uniform_arf";
			camo="arctic";
        };
		class LOR_ARF_Uniform_Desert
        {
            model="LOR_uniform_arf";
			camo="desert";
        };
		class LOR_ARF_Uniform_Jungle
        {
            model="LOR_uniform_arf";
			camo="jungle";
        };
		class LOR_ARF_Uniform_Night
        {
            model="LOR_uniform_arf";
			camo="night";
        };
		class LOR_ARF_Uniform_Woodland
        {
            model="LOR_uniform_arf";
			camo="woodland";
        };
		class LOR_ARF_Uniform_Swamp
        {
            model="LOR_uniform_arf";
			camo="swamp";
        };
		class LOR_ARF_Uniform_Multicam
        {
            model="LOR_uniform_arf";
			camo="multicam";
        };

		
		class LOR_ARF_Vest_Arctic
        {
            model="LOR_vests_arf";
			camo="arctic";
        };
        class LOR_ARF_Vest_Desert
        {
            model="LOR_vests_arf";
			camo="desert";
        };
        class LOR_ARF_Vest_Jungle
        {
            model="LOR_vests_arf";
			camo="jungle";
        };
        class LOR_ARF_Vest_Night
        {
            model="LOR_vests_arf";
			camo="night";
        };
        class LOR_ARF_Vest_Woodland
        {
            model="LOR_vests_arf";
			camo="woodland";
        };
		class LOR_ARF_Vest_Swamp
        {
            model="LOR_vests_arf";
			camo="swamp";
        };
		class LOR_ARF_Vest_Multicam
        {
            model="LOR_vests_arf";
			camo="multicam";
        };


	};
};