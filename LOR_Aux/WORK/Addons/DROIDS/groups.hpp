class LOR_CIS_B1
{
	name = "B1 Battledroids";
	class LOR_CIS_B1_SQUAD_BASIC
	{
		name = "B1 Squad (Basic)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_TEAMLEADER";
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			vehicle = "LOR_B1_RIFLEMAN";
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
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_CIS_B1_SQUAD_AT
	{
		name = "B1 Squad (AT)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_TEAMLEADER";
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			vehicle = "LOR_B1_RIFLEMAN";
			rank = "PRIVATE";
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			vehicle = "LOR_B1_RIFLEMAN_AT";
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
			vehicle = "LOR_B1_AT_SPECIALIST";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_CIS_B1_TEAM_BASIC
	{
		name = "B1 TEAM (Basic)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_B1_TEAMLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_RIFLEMAN";
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
	class LOR_CIS_B1_TEAM_AT
	{
		name = "B1 TEAM (AT)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_B1_TEAMLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_AT_SPECIALIST";
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
	class LOR_CIS_B1_TEAM_AA
	{
		name = "B1 TEAM (AA)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_B1_TEAMLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_AA_SPECIALIST";
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
	class LOR_CIS_B1_SQUAD_HEAVY
	{
		name = "B1 Squad (Heavy)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_TEAMLEADER";
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			vehicle = "LOR_B1_MACHINEGUNNER";
			rank = "PRIVATE";
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			position[] = {-2,0,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_B1_MARKSMAN";
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			vehicle = "LOR_B1_HEAVYGUNNER";
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_B1_GRENADIER";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
	class LOR_CIS_B1_TEAM_HEAVY
	{
		name = "B1 TEAM (Heavy)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "CORPORAL";
			position[] = {0,2,0};
			vehicle = "LOR_B1_TEAMLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_MACHINEGUNNER";
			rank = "PRIVATE";
			position[] = {-1,0,0};
		};
		class Unit2: Unit1
		{
			position[] = {1,0,0};
		};
		class Unit3: Unit2
		{
			vehicle = "LOR_B1_GRENADIER";
			position[] = {-1,-2,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_B1_HEAVYGUNNER";
			position[] = {1,-2,0};
		};
	};
	class LOR_CIS_B1_PATROL_SMALL
	{
		name = "B1 Patrol (small)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_SENTRY";
			rank = "PRIVATE";
			position[] = {2,-2,0};
		};
	};
	class LOR_CIS_B1_PATROL_MEDIUM
	{
		name = "B1 Patrol (medium)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_SENTRY";
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
	class LOR_CIS_B1_PATROL_LARGE
	{
		name = "B1 Patrol (large)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_SENTRY";
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
			position[] = {2,6,0};
		};
	};
	class LOR_CIS_B1_COMBAT_PATROL
	{
		name = "B1 Combat Patrol";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "LOR_B1_SQUADLEADER";
		};
		class Unit1: Unit0
		{
			vehicle = "LOR_B1_TEAMLEADER";
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			vehicle = "LOR_B1_GRENADIER";
			position[] = {-2,0,0};
		};
		class Unit4: Unit3
		{
			vehicle = "LOR_B1_RIFLEMAN_AT";
			position[] = {-2,2,0};
		};
		class Unit5: Unit4
		{
			vehicle = "LOR_B1_MACHINEGUNNER";
			position[] = {0,2,0};
		};
		class Unit6: Unit5
		{
			vehicle = "LOR_B1_MARKSMAN";
			position[] = {2,2,0};
		};
		class Unit7: Unit6
		{
			vehicle = "LOR_B1_RIFLEMAN";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
};

class LOR_CIS_B2
{
	name = "B2 Battledroids";
	class LOR_CIS_B2_2
	{
		name = "B2 Team (2)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_B2_Mod_Standart";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
	};
	class LOR_CIS_B2_4
	{
		name = "B2 Team (4)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_B2_Mod_Standart";
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
	};
	class LOR_CIS_B2_6
	{
		name = "B2 Team (6)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_B2_Mod_Standart";
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
			vehicle = "WBK_B2_Mod_GL";
			position[] = {0,2,0};
		};
	};
	class LOR_CIS_B2_9
	{
		name = "B2 Team (9)";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_B2_Mod_Standart";
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
			vehicle = "WBK_B2_Mod_GL";
			position[] = {2,0,0};
		};
		class Unit8: Unit7
		{
			position[] = {2,-2,0};
		};
	};
};

class LOR_CIS_BX
{
	name = "BX Battledroids";
	class LOR_CIS_BX_TEAM
	{
		name = "BX Commando Team";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_BX_Assasin_Commander";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			vehicle = "WBK_BX_Assasin_1";
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
	};
	class LOR_CIS_BX_SQUAD
	{
		name = "BX Commando Squad";
		side = 0;
		faction = "LOR_CIS";
		rarityGroup = 1;
		class Unit0
		{
			side = 0;
			rank = "SERGEANT";
			position[] = {0,0,0};
			vehicle = "WBK_BX_Assasin_Commander";
		};
		class Unit1: Unit0
		{
			rank = "CORPORAL";
			position[] = {0,-2,0};
		};
		class Unit2: Unit1
		{
			position[] = {-2,-2,0};
		};
		class Unit3: Unit2
		{
			rank = "PRIVATE";
			vehicle = "WBK_BX_Assasin_1";
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
			position[] = {2,0,0};
		};
	};
};