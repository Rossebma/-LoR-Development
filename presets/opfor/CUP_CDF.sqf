/*
    CIS OVERSIMPLIFIED
*/

// Enemy infantry classes
opfor_officer = "212_Arcus_B1_Rifleman";                              // Officer
opfor_squad_leader = "212_Arcus_B1_Rifleman";                           // Squad Leader
opfor_team_leader = "212_Arcus_B1_Rifleman";                         // Team Leader
opfor_sentry = "212_Arcus_B1_Rifleman";                                 // Rifleman (Lite)
opfor_rifleman = "212_Arcus_B1_Rifleman";                               // Rifleman
opfor_rpg = "212_Arcus_B1_Rifleman";                              // Rifleman (LAT)
opfor_grenadier = "212_Arcus_B1_Rifleman";                           // Grenadier
opfor_machinegunner = "212_Arcus_B1_Rifleman";                       // Autorifleman
opfor_heavygunner = "212_Arcus_B1_Rifleman";                         // Heavy Gunner
opfor_marksman = "212_Arcus_B1_Rifleman";                      // Marksman
opfor_sharpshooter = "212_Arcus_B1_Rifleman";                  // Sharpshooter
opfor_sniper = "212_Arcus_B1_Rifleman";                                  // Sniper
opfor_at = "212_Arcus_B1_Rifleman";                                 // AT Specialist
opfor_aa = "212_Arcus_B1_Rifleman";                                  // AA Specialist
opfor_medic = "212_Arcus_B1_Rifleman";                                    // Medic
opfor_engineer = "212_Arcus_B1_Rifleman";                              // Engineer
opfor_paratrooper = "212_Arcus_B1_Rifleman";                      // Paratrooper

// Enemy vehicles used by secondary objectives.
opfor_mrap = "442_argon_transport_cis";                                   // UAZ
opfor_mrap_armed = "442_argon_transport_cis";                                  // UAZ (DShKM)
opfor_transport_helo = "RD501_HMP_transport";                                // Mi-8MT
opfor_transport_truck = "442_argon_transport_cis";                               // Ural
opfor_ammobox_transport = "CUP_B_Ural_Open_CDF";                        // Ural (Open) -> Has to be able to transport resource crates!
opfor_fuel_truck = "CUP_B_Kamaz_Refuel_CDF";                            // Kamaz 5350 (Fuel)
opfor_ammo_truck = "CUP_B_Kamaz_Reammo_CDF";                            // Kamaz 5350 (Ammo)
opfor_fuel_container = "442_argon_fuel_cis";                         // Huron Fuel Container
opfor_ammo_container = "442_argon_ammo_cis";                         // Huron Ammo Container
opfor_flag = "FlagCarrierCDF";                                          // Flag

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Militia infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    "212_Arcus_B1_Rifleman"
];

// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    "MRC_aat"
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    "MRC_aat"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    "MRC_aat",
    "442_argon_transport_cis"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    "MRC_aat",
    "442_argon_transport_cis"
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.    */
opfor_troup_transports = [
    "442_argon_transport_cis"                                                  // Mi-8MT
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    "RD501_HMP_gunship"
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    "RD501_Vulture"
];