class LOR_TERROR_C_5
{
	name = "Cell 5";
	class LOR_TERROR_C_5_SQUAD_BASIC
	{
		name = "Squad (Basic)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			rank = "PRIVATE";
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			position[] = {-2,0,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_T_C5_AT";
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			vehicle = "LOR_T_C5_GRENADIER";
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_T_C5_AUTORIFLEMAN";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_5_SQUAD_AT
	{
		name = "Squad (AT)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			rank = "PRIVATE";
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			position[] = {-2,0,0};
		};
		class Unit4: Unit3
		{
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			vehicle = "LOR_T_C5_AT";
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_5_TEAM_BASIC
	{
		name = "TEAM (Basic)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			rank = "PRIVATE";
			position[] = {-1,0,0};
		};
		class Unit2: Unit1
		{
			position[] = {1,0,0};
		};
		class Unit3: Unit2
		{
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			position[] = {1,-2,0};
		};
	};
	class LOR_TERROR_C_5_TEAM_AT
	{
		name = "TEAM (AT)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C5_AT";
			rank = "PRIVATE";
			position[] = {-1,0,0};
		};
		class Unit2: Unit1
		{
			position[] = {1,0,0};
		};
		class Unit3: Unit2
		{
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			position[] = {1,-2,0};
		};
	};
	class LOR_TERROR_C_5_TEAM_AA
	{
		name = "TEAM (AA)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C5_AA";
			rank = "PRIVATE";
			position[] = {-1,0,0};
		};
		class Unit2: Unit1
		{
			position[] = {1,0,0};
		};
		class Unit3: Unit2
		{
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			position[] = {1,-2,0};
		};
	};
	class LOR_TERROR_C_5_SQUAD_HEAVY
	{
		name = "Squad (Heavy)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			vehicle = "LOR_T_C5_AUTORIFLEMAN";
			rank = "PRIVATE";
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			position[] = {-2,0,0};
		};
		class Unit4: Unit3
		{
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			vehicle = "LOR_T_C5_AT";
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_T_C5_GRENADIER"
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_5_TEAM_HEAVY
	{
		name = "TEAM (Heavy)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_T_C5_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C5_AUTORIFLEMAN";
			rank = "PRIVATE";
			position[] = {-1,0,0};
		};
		class Unit2: Unit1
		{
			position[] = {1,0,0};
		};
		class Unit3: Unit2
		{
			vehicle = "LOR_T_C5_GRENADIER";
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			position[] = {1,-2,0};
		};
	};
	class LOR_TERROR_C_5_PATROL_SMALL
	{
		name = "Patrol (small)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_GUARD";
		};
		class Unit1: Unit0
		{
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_5_PATROL_MEDIUM
	{
		name = "Patrol (medium)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_GUARD";
		};
		class Unit1: Unit0
		{
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
		class Unit2: Unit1
		{
			position[] = {0,-4,0};
		};
		class Unit3: Unit2
		{
			position[] = {2,-6,0};
		};
	};
	class LOR_TERROR_C_5_PATROL_LARGE
	{
		name = "Patrol (large)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_T_C5_GUARD";
		};
		class Unit1: Unit0
		{
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
		class Unit2: Unit1
		{
			position[] = {0,-4,0};
		};
		class Unit3: Unit2
		{
			position[] = {2,-6,0};
		};
		class Unit4: Unit3
		{
			position[] = {0,4,0};
		};
		class Unit5: Unit4
		{
			position[] = {2,2,0};
		};
		class Unit6: Unit5
		{
			position[] = {0,8,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_T_C5_GRENADIER"
			position[] = {2,6,0};
		};
	};
};