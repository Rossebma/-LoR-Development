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
opfor_heavygunner = "lsd_cis_b1Shotgun_standard";                              // Heavy Gunner
opfor_marksman = "lsd_cis_b1Marksman_standard";                           // Marksman
opfor_sharpshooter = "lsd_cis_b1_standard";                       // Sharpshooter
opfor_sniper = "lsd_cis_b1_standard";                             // Sniper
opfor_at = "lsd_cis_b1AtMissile_standard";                                       // AT Specialist
opfor_aa = "lsd_cis_b1AaMissile_standard";                                       // AA Specialist
opfor_medic = "lsd_cis_b1_standard";                              // Combat Life Saver
opfor_engineer = "lsd_cis_b1Saboteur_standard";                           // Engineer
opfor_paratrooper = "lsd_cis_bxSecurity_specops";                        // Paratrooper

// Enemy vehicles used by secondary objectives.
opfor_mrap = "OPTRE_m1015_mule_ins";                                             // UAZ-3151
opfor_mrap_armed = "ls_ground_mtt_cisBlue";                                   // UAZ-3151 (AGS-30)
opfor_transport_helo = "ls_cis_hmp_transport";                           // Mi-8MT (Cargo)
opfor_transport_truck = "OPTRE_m1015_mule_ins";                                 // Ural-4320 Transport (Covered)
opfor_ammobox_transport = "OPTRE_m1015_mule_ins";                          // Ural-4320 Transport (Open) -> Has to be able to transport resource crates!
opfor_fuel_truck = "OPTRE_m1015_mule_fuel_ins";                              // Ural-4320 Fuel
opfor_ammo_truck = "OPTRE_m1015_mule_ammo_ins";                                // GAZ-66 Ammo
opfor_fuel_container = "B_Slingload_01_Fuel_F";             // FUEL CONTAINER
opfor_ammo_container = "B_Slingload_01_Ammo_F";             // AMMO CONTAINER
opfor_flag = "ls_commandPost_cis_blue";                                          // Flag

cis_aat = "ls_ground_aat";
cis_artillery = "3AS_HAGM_CIS";
cis_mtt = "ls_ground_mtt_cisBlue";

cis_vulture_aa = "3AS_CIS_Vulture_AA_F";
cis_vulture_cas = "3AS_CIS_Vulture_CAS_F";

cis_hmp = "ls_cis_hmp_transport";
cis_hmp_gunship = "ls_cis_hmp";

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Militia infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    opfor_rifleman,
    opfor_rifleman,
    opfor_rifleman,
    opfor_rifleman,
    opfor_rifleman,
    opfor_rifleman,
    opfor_rpg,
    opfor_rpg,
    opfor_machinegunner
];

// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    cis_aat,
    cis_artillery,
    cis_mtt
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    opfor_transport_truck
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    cis_artillery,
    cis_mtt,
    cis_vulture_aa,
    cis_vulture_cas
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    opfor_transport_truck,
    cis_vulture_aa
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.    */
opfor_troup_transports = [
    opfor_transport_truck,
    cis_mtt,
    cis_hmp

];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    cis_hmp,
    cis_hmp_gunship
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    cis_vulture_aa,
    cis_vulture_cas
];