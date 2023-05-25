//
//
//MANDALORIAN ENEMY
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
opfor_officer = "ls_mandalorian_captain_vizsla";            // Officer - Taktikdroide
opfor_squad_leader = "ls_mandalorian_sergeant_vizsla";      // Squad Leader - B1 gold
opfor_team_leader = "ls_mandalorian_rto_vizsla";            // Team Leader - B1 tuerkis
opfor_sentry = "ls_mandalorian_assault_traditional";        // Rifleman (Lite) - B1 shotgun
opfor_rifleman = "ls_mandalorian_assault_vizsla";           // Rifleman - B1
opfor_rpg = "ls_mandalorian_at_vizsla";                     // Rifleman (LAT) - B1 (AT)
opfor_grenadier = "ls_mandalorian_heavy_traditional";       // Grenadier - B2 Super Grenadier
opfor_machinegunner = "ls_mandalorian_support_vizsla";      // Autorifleman - B1 Autorifleman
opfor_heavygunner = "ls_mandalorian_heavy_vizsla";          // Heavy Gunner - B2 normal
opfor_marksman = "ls_mandalorian_marksman_vizsla";          // Marksman - B1 Sniper
opfor_sharpshooter = "ls_mandalorian_marksman_traditional"; // Sharpshooter - B1 Scout
opfor_sniper = "OPTRE_CMA_Army_Soldier_Sniper";             // Sniper - BX Sniper
opfor_at = "ls_mandalorian_heavyAT_vizsla";                 // AT Specialist - B2 Rocket
opfor_aa = "ls_mandalorian_aa_vizsla";                      // AA Specialist - B1 AA
opfor_medic = "ls_mandalorian_medic_vizsla";                // Combat Life Saver - B1 Medic
opfor_engineer = "ls_mandalorian_demo_vizsla";              // Engineer - B1 Engineer
opfor_paratrooper = "ls_mandalorian_heavy_traditional";     // Paratrooper - B1 Spec Ops

// Enemy vehicles used by secondary objectives.
opfor_mrap = "OPTRE_M12_FAV_APC_CMA";                       // M12 APC [CMA]
opfor_mrap_armed = "OPTRE_M12_LRV_CMA";                     // M12 LRV (MG) [CMA]
opfor_transport_helo = "327th_HMP_transport";               // H.M.P. Transport
opfor_transport_truck = "OPTRE_m1015_mule_cover_cma";       // M1015 Mule (Covered) [CMA]
opfor_ammobox_transport = "OPTRE_m1015_mule_cma";           // M1015 Mule [CMA] | >>> Has to be able to transport resource crates! <<<
opfor_fuel_truck = "OPTRE_m1015_mule_fuel_cma";             // M1015 Mule (Fuel) [CMA]
opfor_ammo_truck = "OPTRE_m1015_mule_ammo_cma";             // M1015 Mule (Ammo) [CMA]
opfor_fuel_container = "B_Slingload_01_Fuel_F";             // FUEL CONTAINER
opfor_ammo_container = "B_Slingload_01_Ammo_F";             // AMMO CONTAINER
opfor_flag = "ls_commandPost_mandalorian_yellow";           // Mandalorian (Yellow) [Command Post]

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Sector Defender infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_sentry,
    opfor_team_leader,
    opfor_rpg,
    opfor_rpg,
    opfor_medic,
    opfor_grenadier,
    opfor_grenadier,
    opfor_grenadier,
    opfor_grenadier
];

// Sector Defender vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [
    "OPTRE_m1015_mule_cover_cma",                           // Covered Truck
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_M12_LRV_CMA",                                    // M12 LRV (MG) [CMA]
    "O_Quadbike_01_F"                                       // Quad Bike
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_M12_LRV_CMA",                                    // M12 LRV (MG) [CMA]
    "OPTRE_M494_CMA",                                       // M494 Oryx IFV [CMA]
    "OPTRE_m1015_mule_mlr_cma",                             // M1015 Mule (MLR) [CMA]
    "OPTRE_M875_SPH_CMA",                                   // M875 Scorpion Self Prepelled Howitzer [CMA]
    "OPTRE_M808B_CMA",                                      // M808B Scorpion MBT [CMA]
    "OPTRE_M12_TD_CMA"                                      // M12 TD [CMA]
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    "OPTRE_m1015_mule_cover_cma",                           // Covered Truck
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_M12_LRV_CMA",                                    // M12 LRV (MG) [CMA]
    "O_Quadbike_01_F",                                      // Quad Bike
    "OPTRE_M494_CMA",                                       // M494 Oryx IFV [CMA]
    "OPTRE_M808B_CMA",                                      // M808B Scorpion MBT [CMA]
    "OPTRE_M12_TD_CMA"                                      // M12 TD [CMA]
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_M12_LRV_CMA",                                    // M12 LRV (MG) [CMA]
    "OPTRE_M875_SPH_CMA",                                   // M875 Scorpion Self Prepelled Howitzer [CMA]
    "OPTRE_M808B_CMA"                                       // M808B Scorpion MBT [CMA]
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    "OPTRE_m1015_mule_cover_cma",                           // Covered Truck
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_M12_LRV_CMA"                                     // M12 LRV (MG) [CMA]
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.   */
opfor_troup_transports = [
    "OPTRE_M12_FAV_APC_CMA",                                // M12 APC [CMA]
    "OPTRE_m1015_mule_cover_cma"                            // Covered Truck
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    "327th_HMP_gunship",                                    // H.M.P. Gunship
    "327th_HMP_transport",                                  // H.M.P. Transport
    "327th_CISVultureCAS",                                  // [327th] Vulture CAS
    "327th_CISVultureElite",                                // [327th] Vulture Elite
    "327th_CISVultureDF"                                    // [327th] Vulture Guns
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    "OPTRE_Pelican_unarmed_CMA",                            // D77H-TCI Pelican [CMA]
    "OPTRE_CMA_hornet",                                     // AV-14 Hornet [CMA]
    "3as_Tri_Fighter_dynamicLoadout"                        // Tri-Fighter Droid
];