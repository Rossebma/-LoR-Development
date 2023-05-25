class LOR_TERROR_C_3
{
	name = "Cell 3";
	class LOR_TERROR_C_3_PATROL_SMALL
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
			vehicle = "LOR_T_C1_GUARD";
		};
		class Unit1: Unit0
		{
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_3_PATROL_MEDIUM
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
			vehicle = "LOR_T_C1_GUARD";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C1_GUARD";
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
	class LOR_TERROR_C_3_PATROL_LARGE
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
			vehicle = "LOR_T_C1_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C1_RIFLEMAN";
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
		class Unit2: Unit1
		{
			position[] = {0,-4,0};
		};
		class Unit3: Unit2
		{
			vehicle = "LOR_T_C3_GRENADIER";
			position[] = {2,-6,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_T_C1_GUARD";
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
			position[] = {2,6,0};
		};
	};
	class LOR_TERROR_C_3_SQUAD_BASIC
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
			vehicle = "LOR_T_C1_RIFLEMAN";
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
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_T_C3_GRENADIER";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			vehicle = "LOR_T_C1_AUTORIFLEMAN";
			position[] = {2,-2,0};
		};
	};
	class LOR_TERROR_C_3_SQUAD_HEAVY
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
			vehicle = "LOR_T_C1_RIFLEMAN";
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
			vehicle = "LOR_T_C3_GRENADIER";
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			vehicle = "LOR_T_C1_AUTORIFLEMAN";
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
	class LOR_TERROR_C_3_TEAM_BASIC
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
			vehicle = "LOR_T_C1_RIFLEMAN";
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
	class LOR_TERROR_C_3_TEAM_HEAVY
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
			vehicle = "LOR_T_C1_RIFLEMAN";
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
			vehicle = "LOR_T_C1_AUTORIFLEMAN";
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_T_C3_GRENADIER";
			position[] = {1,-2,0};
		};
	};
	class LOR_TERROR_C_3_TEAM_GRENADIER
	{
		name = "TEAM (Grenadier)";
		side = 0;
		faction = "LOR_TERROR";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_T_C1_RIFLEMAN";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_T_C3_GRENADIER";
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
};