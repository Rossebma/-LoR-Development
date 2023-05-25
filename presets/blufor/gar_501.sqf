/*
    Needed Mods:
    - Auxillary Mod 501
	- Auxillary Mod 212th
	- Auxillary Mod 91st
	- Legion Studios
	- 3AS
    Optional Mods:

*/

/*
    --- Support classnames ---
    Each of these should be unique.
    The same classnames for different purposes may cause various unpredictable issues with player actions.
    Or not, just don't try!
*/
FOB_typename = "3as_FOB_Building_2_prop";                                       // This is the main FOB HQ building.
FOB_box_typename = "land_3as_Republic_Container_prop";                          // This is the FOB as a container.
FOB_truck_typename = "212th_B_APC_Wheeled_unarmed_F";                          // This is the FOB as a vehicle.
Arsenal_typename = "3as_Small_Box_7_prop";	                                   	// This is the virtual arsenal as portable supply crates.
Respawn_truck_typename = "RD501_fast_infantry_transport_republic_medic";        // This is the mobile respawn (and medical) truck.
huron_typename = "3AS_Republic_Transport_01";                           // This is Spartan 01, a multipurpose mobile respawn as a helicopter.
crewman_classname = "SWLB_clone_pilot_base_P2";                         // This defines the crew for vehicles.
pilot_classname = "SWLB_clone_pilot_base_P2";                           // This defines the pilot for helicopters.
KP_liberation_little_bird_classname = "3AS_Patrol_LAAT_Republic";       // These are the little birds which spawn on the Freedom or at Chimera base.
KP_liberation_boat_classname = "3AS_Barc_501";                 			// These are the boats which spawn at the stern of the Freedom.
KP_liberation_truck_classname = "442_argon_transport";                   // These are the trucks which are used in the logistic convoy system.
KP_liberation_small_storage_building = "ContainmentArea_02_sand_F";     // A small storage area for resources.
KP_liberation_large_storage_building = "ContainmentArea_01_sand_F";     // A large storage area for resources.
KP_liberation_recycle_building = "Land_RepairDepot_01_tan_F";           // The building defined to unlock FOB recycling functionality.
KP_liberation_air_vehicle_building = "Land_Airport_Tower_F";          // The building defined to unlock FOB air vehicle functionality.
KP_liberation_heli_slot_building = "3as_Landingpad_R3_prop";            // The helipad used to increase the GLOBAL rotary-wing cap.
KP_liberation_plane_slot_building = "3as_FOB_Hangar_Prop";              // The hangar used to increase the GLOBAL fixed-wing cap.
KP_liberation_supply_crate = "CargoNet_01_box_F";                       // This defines the supply crates, as in resources.
KP_liberation_ammo_crate = "B_CargoNet_01_ammo_F";                      // This defines the ammunition crates.
KP_liberation_fuel_crate = "CargoNet_01_barrels_F";                     // This defines the fuel crates.

/*
    --- Friendly classnames ---
    Each array below represents one of the 7 pages within the build menu.
    Format: ["vehicle_classname",supplies,ammunition,fuel],
    Example: ["B_APC_Tracked_01_AA_F",300,150,150],
    The above example is the NATO IFV-6a Cheetah, it costs 300 supplies, 150 ammunition and 150 fuel to build.
    IMPORTANT: The last element inside each array must have no comma at the end!
*/


infantry_units = [
    ["SWLB_clone_501stTrooper_assault",15,0,0],                         // Rifleman (Light)
    ["SWLB_clone_501stTrooper",20,0,0],                                 // Rifleman
    ["SWLB_clone_501stAT",30,0,0],                                      // Rifleman (AT)
    ["B_SCI212thAB_501st_Grenadier_01",25,0,0],                         // Grenadier
    ["B_SCI212thAB_501st_Heavy_Gunner_01",25,0,0],                      // Autorifleman
    ["SWLB_clone_501stSG",35,0,0],                                      // Heavygunner
    ["JLTS_Clone_P2_DP23_501",30,0,0],                                  // Shotgun-Abi
    ["B_SCI212thAB_501st_PLX_Gunner",50,10,0],                          // AT Specialist
    ["SWLB_clone_501stCFR",30,0,0],                                     // Combat Life Saver
    ["B_SCI212thAB_501st_Demolitions_01",30,0,0],                       // Explosives Specialist
    ["SWLB_clone_501stSniper",70,5,0],                                  // Sniper
	["JLTS_Clone_P2_AB_501",70,5,0],                                  	// Jumptrooper
    ["SWLB_clone_pilot_base_P2",10,0,0]                                 // Pilot
];

light_vehicles = [
    ["212th_3AS_ATRT",50,0,25],                                         // AT-RT
    ["3AS_Barc_501",140,60,60],                                         // BARC-Speeder
    ["3AS_BarcSideCar_501",120,0,60],                                   // BARC-Speeder (Sidecar)
    ["212th_B_APC_Wheeled_unmarked_F",120,0,60],                        // Bantha (Transport)
    ["212th_B_APC_Wheeled_02_cannon_F",120,0,60],                       // Bantha (Mk2)
    ["212th_B_APC_Wheeled_fs_cannon_F",120,0,60],                       // Bantha (Mortar)
    ["212th_B_APC_Wheeled_aa_cannon_F",120,0,60]                        // Bantha (AA)
];

heavy_vehicles = [
    ["3as_saber_m1G_501",200,40,100],                                   // TX-130 (GL)
    ["3as_saber_super_501",200,40,100],                                 // TX-130 (Super)
    ["3as_saber_m1Recon_501",200,40,100],                               // RX-130 (Recon)
    ["3as_ATTE_Base",200,40,100],                                       // AT-TE
    ["3as_ATAP_Base",200,40,100],                                       // AT-AP
    ["3as_AV7",200,40,100],                                             // AV-7
    ["MRC_ATJT",200,40,100],                                            // AT-JT
    ["3AS_RTT_Wheeled",200,40,100],                                     // RTT
    ["3as_Jug",200,40,100],                                             // HAVw-A6
    ["3as_UTAT",200,40,100],                                            // UT-AT
    ["3as_RX200_Base",200,40,100]                                       // RX-200
    
];

air_vehicles = [
    ["lsd_heli_laati_transport",75,0,25],                                 // LAAT/i (Transport)
    ["lsd_heli_laati_medevac",100,0,250],                                 // LAAT/i (MedEvac)
    ["lsd_heli_laati",200,0,100],                                         // LAAT/i (Gunship, Pylons)
    ["lsd_heli_laati_ab",1250,450,175],                               	  // LAAT/i
    ["lsd_heli_laatc",1250,450,175],                                      // LAAT/c
	["3AS_Patrol_LAAT_Republic",1250,450,175],                                      // LAAT/e
    ["3AS_Nuclass",1250,450,175],                            			  // NuClass Shuttle
    ["3as_arc_170_blue",1250,450,175],                            		  // ARC-170
    ["3AS_BTLB_Bomber",1250,450,175],                            // BTL-Y-Wing
    ["3AS_Republic_Transport_01",1250,450,175]                            // Republic Transport
];

static_vehicles = [
    ["RD501_Republic_Static_AA_LR",200,40,100],                        // Radar
	["RD501_Republic_Static_AA_sr_ml",250,500,0],                      // RAM
	["RD501_stat_reweb",250,500,0],                                    // E-WEB
	["3AS_Republic_Mortar",250,500,0]                                  // Mörser
];

buildings = [
    ["Land_Cargo_House_V1_F",0,0,0],
	["3AS_Short_Wall",0,0,0],
	["3AS_Short_Wall_Bunker",0,0,0],
	["3AS_Short_Wall_Curved",0,0,0],
	["3AS_Short_Wall_Long",0,0,0],
	["3AS_Short_Wall_Post",0,0,0],
	["land_3as_Bunker_Metal_Command",0,0,0],
	["3as_prop_fob_modular_wall_bunker",0,0,0],
	["3as_prop_fob_modular_wall_corner_inversed",0,0,0],
	["3as_prop_fob_modular_wall_corner",0,0,0],
	["3as_prop_fob_modular_wall_ramp",0,0,0],
	["3as_prop_fob_modular_wall_watchtower",0,0,0],
	["3AS_Wall_Laser",0,0,0],
	["3AS_Wall_Laser_Corner",0,0,0],
	["3AS_Wall_Laser_Door",0,0,0],
	["land_3AS_Wall_Laser_v2",0,0,0],
	["land_3AS_Wall_Laser_Corner",0,0,0],
	["land_3AS_Wall_Laser_Door_v2",0,0,0],
	["Land_JMS_build_Colony_InsideWall",0,0,0],
	["k_wall1",0,0,0],
	["k_wall1_corner",0,0,0],
	["k_wall1_ramp",0,0,0],
	["3AS_Tent_Med",0,0,0],
	["3as_FOB_Building_1_prop",0,0,0],
	["3as_FOB_Building_2_prop",0,0,0],
	["3as_large_crate_stack_3_prop",0,0,0],
    ["ls_flag_republic",0,0,0],                                        //Republic flag
    ["ls_commandPost_republic_blue",0,0,0],                            //Command Post Flag
    ["Land_Medevac_house_V1_F",0,0,0],
    ["Land_Medevac_HQ_V1_F",0,0,0],
    ["Flag_RedCrystal_F",0,0,0],
    ["Land_PortableLight_single_F",0,0,0],
    ["Land_PortableLight_double_F",0,0,0],
    ["Land_LampSolar_F",0,0,0],
    ["Land_LampAirport_F",0,0,0],
    ["PortableHelipadLight_01_blue_F",0,0,0],
    ["PortableHelipadLight_01_green_F",0,0,0],
    ["PortableHelipadLight_01_red_F",0,0,0],
    ["Land_CampingTable_F",0,0,0],
    ["Land_BagFence_Round_F",0,0,0],
    ["Land_BagFence_Short_F",0,0,0],
    ["Land_BagFence_Long_F",0,0,0],
    ["Land_BagFence_Corner_F",0,0,0],
    ["Land_BagFence_End_F",0,0,0],
    ["Land_BagBunker_Small_F",0,0,0],
    ["Land_BagBunker_Large_F",0,0,0],
    ["Land_BagBunker_Tower_F",0,0,0],
    ["Land_Sign_WarningMilitaryArea_F",0,0,0],
    ["Land_Sign_WarningMilAreaSmall_F",0,0,0],
    ["Land_Sign_WarningMilitaryVehicles_F",0,0,0],
    ["Land_Razorwire_F",0,0,0],
	["3as_Landingpad_prop",0,0,0],
	["3as_Landingpad_2_prop",0,0,0],
	["3as_Landingpad_3_prop",0,0,0],
	["3as_Landingpad_4_prop",0,0,0],
	["3as_Landingpad_5_prop",0,0,0],
    ["3as_planetaryshield_50",0,0,0],
    ["3as_planetaryshield_100",0,0,0],
    ["3as_planetaryshield_150",0,0,0],
    ["3as_planetaryshield_200",0,0,0],
	["3as_planetaryshield_500",0,0,0],
	["3as_FOB_Hangar_Prop",0,0,0],
	["Land_TentHangar_V1_F",0,0,0],
    ["Land_ClutterCutter_large_F",0,0,0]
];

support_vehicles = [
    [Arsenal_typename,100,200,0],
    [Respawn_truck_typename,200,0,100],
    [FOB_box_typename,300,500,0],
    [FOB_truck_typename,300,500,75],
    [KP_liberation_small_storage_building,0,0,0],
    [KP_liberation_large_storage_building,0,0,0],
    [KP_liberation_recycle_building,250,0,0],
    [KP_liberation_air_vehicle_building,1000,0,0],
    [KP_liberation_heli_slot_building,250,0,0],
    [KP_liberation_plane_slot_building,500,0,0],
    ["ACE_medicalSupplyCrate_advanced",50,0,0],
    ["ACE_Box_82mm_Mo_HE",50,40,0],
    ["ACE_Box_82mm_Mo_Smoke",50,10,0],
    ["ACE_Box_82mm_Mo_Illum",50,10,0],
    ["ACE_Wheel",10,0,0],
    ["ACE_Track",10,0,0],
    ["442_argon_repair",275,0,0],                                // Repair Truck
    ["442_argon_fuel",75,0,200],                                 // Fuel Truck
    ["442_argon_ammo",75,200,0],                                 // Ammo Truck
    ["442_argon_medical",75,200,0],                                 // Medical Truck
    ["B_Slingload_01_Repair_F",275,0,0],                                // Repair Container
    ["B_Slingload_01_Fuel_F",75,0,200],                                 // Fuel Container
    ["B_Slingload_01_Ammo_F",75,200,0]                                  // Ammo Container
];

/*
    --- Squads ---
    Pre-made squads for the commander build menu.
    These shouldn't exceed 10 members.
*/

// Light infantry squad.
blufor_squad_inf_light = [
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stTrooper_assault",
    "SWLB_clone_501stCFR",
    "SWLB_clone_501stAT"
];


// Infantry squad.
blufor_squad_inf = [
    "B_SCI212thAB_501st_Squad_Lead_01",
    "JLTS_Clone_P2_at_501",
    "JLTS_Clone_P2_at_501",
    "SWLB_clone_501stCFR",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stSniper"
];

// AT specialists squad.
blufor_squad_at = [
    "B_SCI212thAB_501st_Squad_Lead_01",
    "SWLB_clone_501stCFR",
    "JLTS_Clone_P2_at_501"
    "JLTS_Clone_P2_at_501",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "B_SCI212thAB_501st_PLX_Gunner",
    "B_SCI212thAB_501st_PLX_Gunner"
];

// AA specialists squad.
blufor_squad_aa = [
    "B_SCI212thAB_501st_Squad_Lead_01",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stCFR"

];

// Force recon squad.
blufor_squad_recon = [
    "327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid",
	"327th_ARF_Arid"
];

// Paratroopers squad (The units of this squad will automatically get parachutes on build)
blufor_squad_para = [
    "JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_AB_501",
	"JTLS_Clone_P2_ABNCO_501"

];

/*
    --- Elite vehicles ---
    Classnames below have to be unlocked by capturing military bases.
    Which base locks a vehicle is randomized on the first start of the campaign.
*/
elite_vehicles = [
    //test
];
