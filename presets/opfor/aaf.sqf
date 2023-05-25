//
//
//STANDARD CIS ENEMY
//
//


/*
    Needed Mods:
    - Auxillary 327th
    - Auxillary 212th
    - Auxillary 501st
    - [K]
    - Legion Studios 
    - 3AS

    
    Optional Mods:
    - 
*/



// Enemy infantry classes
opfor_officer = "3AS_CIS_TS_F";                                         // Officer - Taktikdroide
opfor_squad_leader = "O_Kalani_B1_Commander_Battledroid_V3_01";         // Squad Leader - B1 gold
opfor_team_leader = "O_Kalani_B1_Sergeant_Battledroid_V3_01";           // Team Leader - B1 tuerkis
opfor_sentry = "O_Kalani_B1_Scatter_Battledroid_V3_01";                 // Rifleman (Lite) - B1 shotgun
opfor_rifleman = "O_Kalani_B1_Battledroid_V3_01";                       // Rifleman - B1
opfor_rpg = "O_Kalani_B1_AT_Battledroid_V3_01";                         // Rifleman (LAT) - B1 (AT)
opfor_grenadier = "O_Kalani_B1_Grenadier_Battledroid_V3_01";            // Grenadier - B2 Super Grenadier
opfor_machinegunner = "O_Kalani_B1_Heavy_Battledroid_V3_01";            // Autorifleman - B1 Autorifleman
opfor_heavygunner = "3AS_CIS_B2_F";                                     // Heavy Gunner - B2 normal
opfor_marksman = "O_Kalani_B1_Scout_Battledroid_V3_01";                 // Marksman - B1 Sniper
opfor_sharpshooter = "212_Arcus_B1_Scout";                              // Sharpshooter - B1 Scout
opfor_sniper = "212_Arcus_BX_Sniper";                                   // Sniper - BX Sniper
opfor_at = "212_Arcus_B1_AT";                                           // AT Specialist - B2 Rocket
opfor_aa = "O_Kalani_B1_AA_Battledroid_V3_01";                          // AA Specialist - B1 AA
opfor_medic = "O_Kalani_B1_Medic_Battledroid_V3_01";                    // Combat Life Saver - B1 Medic
opfor_engineer = "O_Kalani_B1_EOD_Battledroid_V3_01";                   // Engineer - B1 Engineer
opfor_paratrooper = "212_Arcus_B1_SpecOps";                             // Paratrooper - B1 Spec Ops

// Enemy vehicles used by secondary objectives.
opfor_mrap = "3as_SAC_Trade";                                           // SPW40-P2UM
opfor_mrap_armed = "3as_SAC_Trade";                                     // SPW-40P2
opfor_transport_helo = "327th_HMP_transport";                           // Truck gel. 5 Transport
opfor_transport_truck = "442_argon_transport_cis";                      // Truck gel. 5 Transport
opfor_ammobox_transport = "442_argon_transport_cis";                    // Truck gel. 5 Transport -> Has to be able to transport resource crates!
opfor_fuel_truck = "442_argon_fuel_cis";                                // Truck gel. 5 Fuel
opfor_ammo_truck = "442_argon_ammo_cis";                                // Truck gel. 5 Ammo
opfor_fuel_container = "B_Slingload_01_Fuel_F";                         // Taru Fuel Pod
opfor_ammo_container = "B_Slingload_01_Ammo_F";                         // Taru Ammo Pod
opfor_flag = "ls_flag_cis";                                             // Flag

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Sector Defender infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    "O_Kalani_B1_Commander_Battledroid_V3_01",                                           // B1 gold
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_Battledroid_V3_01",                                            // Security Droid
    "O_Kalani_B1_AT_Battledroid_V3_01",                                                  // B1 (AT)
    "O_Kalani_B1_AT_Battledroid_V3_01",                                                  // B1 (AT)
    "O_Kalani_B1_AT_Battledroid_V3_01",                                               // B1 (Autorifleman)
    "O_Kalani_B1_Heavy_Battledroid_V3_01"                                                // B1 (Autorifleman)
];

// Sector Defender vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [
    "lsd_car_ast"                                                       // Squad Assault Craft
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    "3as_SAC_Trade",                                                    // Squad Assault Craft
    "Aux327th_CIS_Snail",                                               // Snail Droid
    "3AS_Hailfire_SAM",                                            // CIS Hailfire (SAM)
    "3AS_Hailfire_Rocket",                                   // CIS Hailfire
    "3AS_AAT",                                                   // AAT
    "3AS_GAT"                                                    // GAT Light
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    "3as_SAC_Trade",                                                   // Squad Assault Craft
    "Aux327th_CIS_Snail",                                               // Snail Droid
    "3AS_Hailfire_SAM"                                             // CIS Hailfire (SAM)
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    "3AS_Hailfire_Rocket",                                             // Hailfire
    "3AS_Hailfire_SAM",                                            // Hailfire (SAM)
    "3AS_GAT",                                                    // GAT
    "3AS_AAT",                                                   // AAT
    "AUX327th_CIS_Snail",                                               // Snailtank
    "3AS_Advanced_DSD",                                                  // Advanced DSD
    "3AS_AAT_Red"                                                   //AAT (Heavy)
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    "3AS_Hailfire_Rocket",                                             // Hailfire
    "3AS_GAT",                                                    // GAT
    "3AS_AAT",                                                   // AAT
    "Aux327th_CIS_Snail"                                                // Snailfire
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.   */
opfor_troup_transports = [
    "3as_SAC_Trade"                                                     // Squad Assault Craft
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    "327th_HMP_gunship",                                                // H.M.P. Gunship
    "442_hmp",                                                          // H.M.P. Gunship
    "442_hmp_transport",                                                // H.M.P. Gunship (Transport)
    "327th_CISVultureCAS",                                              // Vulture Droid (CAS)
    "327th_CISVultureElite",                                            // Vulture Droid (Elite)
    "327th_CISVultureDF",                                               // Vulture Droid Guns
    "3AS_CIS_Vulture_CAS_F"                                             // Vulture Droid (CAS)
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    "3as_Tri_Fighter_dynamicLoadout",                                   // Tri-Fighter Droid
    "RD501_Vulture"                                                    // CIS Vulture (Fixed-Wing)
];