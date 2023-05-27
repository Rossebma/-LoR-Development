/*
    Needed Mods:
    - Legion Studios Base Stable
    - [K]
*/

// Enemy infantry classes
opfor_officer = "lsd_cis_oomOfficer_standard";                             // Officer
opfor_squad_leader = "lsd_cis_b1SquadLead_standard";                             // Squad Leader
opfor_team_leader = "lsd_cis_b1_standard";                              // Team Leader
opfor_sentry = "lsd_cis_oomSecurity_standard";                             // Rifleman (Lite)
opfor_rifleman = "lsd_cis_b1_standard";                         // Rifleman
opfor_rpg = "lsd_cis_b1At_standard";                              // Rifleman (LAT)
opfor_grenadier = "lsd_cis_b1Grenadier_standard";                                // Grenadier
opfor_machinegunner = "lsd_cis_b1Heavy_standard";                            // Autorifleman
opfor_heavygunner = "lsd_cisb1_Shotgun_standard";                              // Heavy Gunner
opfor_marksman = "las_cis_b1Marksman_standard";                           // Marksman
opfor_sharpshooter = "lsd_cis_b1_standard";                       // Sharpshooter
opfor_sniper = "lsd_cis_b1_standard";                             // Sniper
opfor_at = "lsd_cis_b1AtMissile_standard";                                       // AT Specialist
opfor_aa = "lsd_cis_b1AaMissile_standard";                                       // AA Specialist
opfor_medic = "lsd_cis_b1_standard";                              // Combat Life Saver
opfor_engineer = "lsd_cis_b1Saboteur_standard";                           // Engineer
opfor_paratrooper = "lsd_cis_bxSecurity_specops";                        // Paratrooper

// Enemy vehicles used by secondary objectives.
opfor_mrap = "442_argon_transport_cis";                                             // UAZ-3151
opfor_mrap_armed = "ls_ground_mtt_cisBlue";                                   // UAZ-3151 (AGS-30)
opfor_transport_helo = "ls_cis_hmp_transport";                           // Mi-8MT (Cargo)
opfor_transport_truck = "442_argon_transport_cis";                                 // Ural-4320 Transport (Covered)
opfor_ammobox_transport = "442_argon_transport_cis";                          // Ural-4320 Transport (Open) -> Has to be able to transport resource crates!
opfor_fuel_truck = "442_argon_fuel_cis";                              // Ural-4320 Fuel
opfor_ammo_truck = "442_argon_ammo_cis";                                // GAZ-66 Ammo
opfor_fuel_container = "B_Slingload_01_Fuel_F";             // FUEL CONTAINER
opfor_ammo_container = "B_Slingload_01_Ammo_F";             // AMMO CONTAINER
opfor_flag = "ls_commandPost_cis_blue";                                          // Flag

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Militia infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    "LOP_TKA_Infantry_Rifleman",                                        // Rifleman (Lite)
    "LOP_TKA_Infantry_Rifleman",                                        // Rifleman (Lite)
    "LOP_TKA_Infantry_Rifleman_2",                                      // Rifleman
    "LOP_TKA_Infantry_Rifleman_2",                                      // Rifleman
    "LOP_TKA_Infantry_Rifleman_3",                                      // Rifleman (AT)
    "LOP_TKA_Infantry_MG",                                              // Autorifleman
    "LOP_TKA_Infantry_Marksman",                                        // Marksman
    "LOP_TKA_Infantry_Corpsman",                                        // Medic
    "LOP_TKA_Infantry_Engineer"                                         // Engineer
];

// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    "lsd_car_ast",
    "ls_ground_aat",
    "ls_ground_bawhag",
    "ls_ground_mtt_cisBlue"
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    "lsd_car_ast",
    "442_argon_transport_cis"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    "lsd_car_ast",
    "ls_ground_aat",
    "ls_ground_bawhag",
    "ls_ground_mtt_cisBlue",
    "3AS_CIS_Vulture_AA_F",
    "3AS_CIS_Vulture_CAS_F"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    "lsd_car_ast",
    "442_argon_transport_cis",
    "3AS_CIS_Vulture_AA_F"
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.    */
opfor_troup_transports = [
    "442_argon_transport_cis",
    "ls_ground_mtt_cisBlue",
    "ls_cis_hmp_transport"

];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    "ls_cis_hmp_transport",
    "ls_cis_hmp",
    "3AS_CIS_Vulture_AA_F",
    "3AS_CIS_Vulture_CAS_F"
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [];
