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
FOB_typename = "ls_commandPost_republic_blue";                                       // This is the main FOB HQ building.
FOB_box_typename = "B_Slingload_01_Cargo_F";                          // This is the FOB as a container.
FOB_truck_typename = "B_Truck_01_box_F";                           // This is the FOB as a vehicle.
Arsenal_typename = "B_supplyCrate_F";	                                   	// This is the virtual arsenal as portable supply crates.
Respawn_truck_typename = "B_Truck_01_medical_F";        // This is the mobile respawn (and medical) truck.
huron_typename = "3AS_LAATC";                                        // This is Spartan 01, a multipurpose mobile respawn as a helicopter.
crewman_classname = "B_T_Crew_F";                                 // This defines the crew for vehicles.
pilot_classname = "B_T_Pilot_F";                                   // This defines the pilot for helicopters.
KP_liberation_little_bird_classname = "lsd_heli_laati";                      // These are the little birds which spawn on the Freedom or at Chimera base.
KP_liberation_boat_classname = "3AS_Barc_501";                 			        // These are the boats which spawn at the stern of the Freedom.
KP_liberation_truck_classname = "B_Truck_01_Cargo_F";                          // These are the trucks which are used in the logistic convoy system.
KP_liberation_small_storage_building = "ContainmentArea_02_sand_F";             // A small storage area for resources.
KP_liberation_large_storage_building = "ContainmentArea_01_sand_F";             // A large storage area for resources.
KP_liberation_recycle_building = "Land_RepairDepot_01_tan_F";                   // The building defined to unlock FOB recycling functionality.
KP_liberation_air_vehicle_building = "Land_Airport_01_controlTower_F";                    // The building defined to unlock FOB air vehicle functionality.
KP_liberation_heli_slot_building = "Land_HelipadSquare_F";              // The helipad used to increase the GLOBAL rotary-wing cap.
KP_liberation_plane_slot_building = "Land_TentHangar_V1_F";           // The hangar used to increase the GLOBAL fixed-wing cap.
KP_liberation_supply_crate = "CargoNet_01_box_F";                               // This defines the supply crates, as in resources.
KP_liberation_ammo_crate = "B_CargoNet_01_ammo_F";                              // This defines the ammunition crates.
KP_liberation_fuel_crate = "CargoNet_01_barrels_F";                             // This defines the fuel crates.
 
/*
    --- Friendly classnames ---
    Each array below represents one of the 7 pages within the build menu.
    Format: ["vehicle_classname",supplies,ammunition,fuel],
    Example: ["B_APC_Tracked_01_AA_F",300,150,150],
    The above example is the NATO IFV-6a Cheetah, it costs 300 supplies, 150 ammunition and 150 fuel to build.
    IMPORTANT: The last element inside each array must have no comma at the end!
*/


infantry_units = [
    ["SWLB_clone_501stTrooper_assault",10,0,0],                         // Rifleman (Light)
    ["SWLB_clone_501stTrooper",15,0,0],                                 // Rifleman
    ["SWLB_clone_501stAT",15,5,0],                                      // Rifleman (AT)
    ["B_SCI212thAB_501st_Grenadier_01",15,5,0],                         // Grenadier
    ["B_SCI212thAB_501st_Heavy_Gunner_01",20,0,0],                      // Autorifleman
    ["SWLB_clone_501stSG",20,5,0],                                      // Heavygunner
    ["JLTS_Clone_P2_DP23_501",20,0,0],                                  // Shotgun-Abi
    ["B_SCI212thAB_501st_PLX_Gunner_01",30,10,0],                       // AT Specialist
    ["SWLB_clone_501stCFR",30,0,0],                                     // Combat Life Saver
    ["B_SCI212thAB_501st_Demolitions_01",30,15,0],                      // Explosives Specialist
    ["SWLB_clone_501stSniper",35,5,0],                                  // Sniper
	["JLTS_Clone_P2_AB_501",35,5,0],                                  	// Jumptrooper
    ["SWLB_clone_pilot_base_P2",40,0,0],                                // Pilot
    ["SWLB_clone_aa_base_P2",30,10,0],                                  // AA Specialist
    ["327th_ARF_Arid",35,0,0]                                           // ARF (Arid)
];

light_vehicles = [
    ["212th_3AS_ATRT",150,25,10],                                       // AT-RT
    ["3AS_Barc_501",50,0,5],                                            // BARC-Speeder
    ["3AS_BarcSideCar_501",55,10,5],                                    // BARC-Speeder (Sidecar)
    ["442_argon_transport",100,0,10],                                   // BARC-Speeder (Sidecar)
    ["212th_B_APC_Wheeled_unarmed_F",200,0,20],                         // Bantha (Transport)
    ["212th_B_APC_Wheeled_02_cannon_F",200,10,20],                      // Bantha (Mk2)
    ["212th_B_APC_Wheeled_fs_cannon_F",200,30,20],                      // Bantha (Mortar)
    ["212th_B_APC_Wheeled_aa_cannon_F",200,20,20],                      // Bantha (AA)
    ["212th_B_APC_Wheeled_mg_F",200,20,20],                             // Bantha (MG)
    ["RD501_fast_infantry_transport_republic",100,0,20],                // Pathfinder 
    ["O_T_MRAP_02_ghex_F",100,0,20]                                     // Pathfinder Tarn    
];

heavy_vehicles = [
    ["3as_saber_super_501",350,50,40],                                  // TX-130 Super Saber
    ["3as_saber_m1G_501",250,30,30],                                    // TX-130 (GL)
    ["3as_saber_m1_501",300,40,30],                                     // TX-130
    ["3as_saber_m1Recon_501",250,20,30],                                // RX-130 (Recon)
    ["3as_ATTE_TCW",500,100,50],                                       // AT-TE
    ["3as_ATAP_Base",400,100,40],                                       // AT-AP
    ["3as_AV7",400,300,40],                                             // AV-7
    ["3as_ATJT_Shark",450,100,75],                                      // AT-JT Camo Shark
    ["3as_ATJT_TCW",450,100,75],                                         // AT-JT TCW
    ["3AS_RTT_Wheeled",200,0,30],                                       // RTT
    ["3as_Jug",750,75,150],                                             // HAVw-A6
    ["3as_UTAT",500,100,75],                                            // UT-AT
    ["3as_RX200_Base",400,300,50]                                       // RX-200
];

air_vehicles = [
    ["lsd_heli_laati_transport",500,50,100],                            // LAAT/i Transport
    ["lsd_heli_laati_medevac",500,100,100],                             // LAAT/i MedEvac
    ["lsd_heli_laati_ab",500,100,100],                                  // LAAT/i Gunship
    ["lsd_heli_laati",500,150,100],                                     // LAAT/i Gunship (Pylons)
    ["3AS_LAATC",500,50,125],                                           // LAAT/c
    ["RD501_v19_MKI",400,100,50],                                       // V-19 Torrent
    ["212th_3AS_Nu_Shuttle",600,0,300],                            		// NuClass Shuttle
    ["RD501_arc_170_blue",1000,300,200]                                 // ARC-170
];

static_vehicles = [
    ["RD501_Republic_Static_AA_LR",200,0,0],                            // Radar
	["RD501_Republic_Static_AA_sr_ml",100,200,0],                       // RAM
	["RD501_stat_reweb",50,25,0],                                       // E-WEB
	["3AS_Republic_Mortar",50,50,0]                                     // Mörser
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
	["3as_Landingpad_R3_prop",0,0,0],
	["3as_FOB_Hangar_Prop",0,0,0],
    ["TargetP_Alien1_F",0,0,0],
    ["Land_ClutterCutter_large_F",0,0,0],
    ["Land_lsb_fob_hBarrier_3",0,0,0],
    ["Land_lsb_fob_hBarrier_5",0,0,0],
    ["Land_lsb_fob_hBarrier_corridor",0,0,0],
    ["Land_lsb_fob_hBarrier_ramp",0,0,0],
    ["Land_lsb_fob_hBarrierBig_4",0,0,0],
    ["Land_lsb_fob_hBarrierBig_1",0,0,0],
    ["Land_lsb_fob_hBarrier_wall",0,0,0],
    ["Land_lsb_fob_hBarrierWall_4",0,0,0],
    ["Land_lsb_fob_hBarrierWall_7",0,0,0],
    ["Land_lsb_fob_hBarrierWall_invertedCorner",0,0,0],
    ["Land_lsb_fob_hBarrierWall_ramp",0,0,0],
    ["Land_lsb_fob_hBarrierWall_exvertedCorner",0,0,0],
    ["Land_lsb_fob_hBarrier_tower",0,0,0]
];

support_vehicles = [
    [Arsenal_typename,5,5,0],
    [Respawn_truck_typename,200,50,50],
    [FOB_box_typename,500,100,0],
    [FOB_truck_typename,500,100,50],
    [KP_liberation_small_storage_building,0,0,0],
    [KP_liberation_large_storage_building,0,0,0],
    [KP_liberation_recycle_building,100,0,0],
    [KP_liberation_air_vehicle_building,200,50,50],
    [KP_liberation_heli_slot_building,50,0,0],
    [KP_liberation_plane_slot_building,100,0,0],
    ["ACE_medicalSupplyCrate_advanced",50,0,0],
    ["ACE_Box_82mm_Mo_HE",50,25,0],
    ["ACE_Box_82mm_Mo_Smoke",50,10,0],
    ["ACE_Box_82mm_Mo_Illum",50,10,0],
    ["ACE_Wheel",10,0,0],
    ["ACE_Track",20,0,0],
    ["B_Truck_01_Repair_F",110,0,25],                                // Repair Truck
    ["B_Truck_01_fuel_F",60,0,75],                                 // Fuel Truck
    ["B_Truck_01_ammo_F",60,50,25],                                 // Ammo Truck
    ["B_Truck_01_cargo_F",65,0,25],                                 // Cargo Truck
    ["B_Truck_01_transport_F",65,0,25],                                 // Transport Truck
    ["B_Truck_01_covered_F",65,0,25],                                 // Transport Truck (Covered)
    ["B_Truck_01_flatbed_F",60,50,25],                                 // Flatbed Truck
    ["B_Slingload_01_Repair_F",100,0,0],                                // Repair Container
    ["B_Slingload_01_Fuel_F",50,0,50],                                 // Fuel Container
    ["B_Slingload_01_Ammo_F",50,50,0]                                  // Ammo Container
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
    "SWLB_clone_501stCFR"
];


// Infantry squad.
blufor_squad_inf = [
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stTrooper",
    "SWLB_clone_501stCFR"
];


// AT specialists squad.
blufor_squad_at = [
    "B_SCI212thAB_501st_PLX_Gunner_01",
    "B_SCI212thAB_501st_PLX_Gunner_01",
    "B_SCI212thAB_501st_PLX_Gunner_01",
    "SWLB_clone_501stAT",
    "SWLB_clone_501stAT",
    "SWLB_clone_501stCFR"
];

// AA specialists squad.
blufor_squad_aa = [
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_aa_base_P2",
    "SWLB_clone_501stCFR"
];

// Force recon squad.
blufor_squad_recon = [
    "327th_ARF_Arid",
    "327th_ARF_Arid",
    "327th_ARF_Arid",
    "327th_ARF_Arid",
    "327th_ARF_Arid",
    "327th_ARF_Arid"
];

// Paratroopers squad (The units of this squad will automatically get parachutes on build)
blufor_squad_para = [
    "JLTS_Clone_P2_AB_501",
    "JLTS_Clone_P2_AB_501",
    "JLTS_Clone_P2_AB_501",
    "JLTS_Clone_P2_AB_501",
    "JLTS_Clone_P2_AB_501",
    "JLTS_Clone_P2_AB_501"
];

/*
    --- Elite vehicles ---
    Classnames below have to be unlocked by capturing military bases.
    Which base locks a vehicle is randomized on the first start of the campaign.
*/
elite_vehicles = [
    "212th_B_APC_Wheeled_02_cannon_F",
    "212th_B_APC_Wheeled_fs_cannon_F",
    "3as_saber_m1G_501",
    "3as_ATTE_TCW",
    "3as_ATAP_Base",
    "3as_ATJT_Shark",
    "3as_AV7",
    "3as_ATJT_TCW",
    "3AS_RTT_Wheeled",
    "3as_Jug",
    "3as_RX200_Base",
    "3as_UTAT",
    "RD501_arc_170_blue",
    "3AS_BTLB_Bomber"
];