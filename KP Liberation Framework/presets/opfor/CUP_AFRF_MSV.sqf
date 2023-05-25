//
//
//CIS LOR Aux
//
//


/*
    Needed Mods:
        - 327th
        - 3as
        - LOR AUX
*/



// Enemy infantry classes
opfor_officer = "LOR_B1_PLATOONLEADER";
opfor_squad_leader = "LOR_B1_SQUADLEADER";
opfor_team_leader = "LOR_B1_TEAMLEADER";
opfor_sentry = "LOR_B1_SENTRY";
opfor_rifleman = "LOR_B1_RIFLEMAN";
opfor_rpg = "LOR_B1_RIFLEMAN_AT";
opfor_grenadier = "LOR_B1_GRENADIER";
opfor_machinegunner = "LOR_B1_MACHINEGUNNER";
opfor_heavygunner = "LOR_B1_HEAVYGUNNER";
opfor_marksman = "LOR_B1_MARKSMAN";
opfor_sharpshooter = "LOR_B1_SHARPSHOOTER";
opfor_sniper = "LOR_B1_SHARPSHOOTER";
opfor_at = "LOR_B1_AT_SPECIALIST";
opfor_aa = "LOR_B1_AA_SPECIALIST";
opfor_medic = "LOR_B1_MEDIC";
opfor_engineer = "LOR_B1_ENGINEER";
opfor_paratrooper = "LOR_B1_RIFLEMAN";

// Enemy vehicles used by secondary objectives.
opfor_mrap = "3as_SAC_Trade";
opfor_mrap_armed = "3as_SAC_Trade";
opfor_transport_helo = "3AS_HMP_Transport";
opfor_transport_truck = "442_argon_transport_cis";
opfor_ammobox_transport = "442_argon_transport_cis";
opfor_fuel_truck = "442_argon_fuel_cis";
opfor_ammo_truck = "442_argon_ammo_cis";
opfor_fuel_container = "B_Slingload_01_Fuel_F";
opfor_ammo_container = "B_Slingload_01_Ammo_F";
opfor_flag = "ls_commandPost_cis_blue";

cis_hailfire = "3AS_Hailfire_AT";
cis_hailfire_art = "3AS_Hailfire_Rocket";
cis_sam = "3AS_Hailfire_SAM";
cis_aa = "3AS_Hailfire_SAM";
cis_aat = "3AS_AAT_tan";
cis_snail = "3AS_N99";
cis_mtt = "3as_MTT";

cis_truck = "442_argon_covered_cis";
cis_truck_flatbed = "442_argon_transport_cis";
cis_troop_transport = "3as_SAC_Trade";

cis_gunship = "3AS_HMP_Gunship";
cis_trasport_plane = "3AS_HMP_Transport";
cis_cas = "3AS_CIS_Vulture_CAS_F";
cis_air = "3AS_CIS_Vulture_AA_F";

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Sector Defender infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    opfor_sentry,
    opfor_rifleman,
    opfor_rifleman,
    opfor_rifleman
];

// Sector Defender vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    cis_aat,
    cis_aa,
    cis_sam,
    cis_snail,
    cis_hailfire_art
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    cis_aat,
    cis_aa
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    cis_aat,
    cis_mtt,
    cis_troop_transport,
    cis_hailfire,
    cis_snail,
    cis_aa

];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    cis_troop_transport,
    cis_truck,
    cis_aat
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.   */
opfor_troup_transports = [
    cis_mtt,
    cis_troop_transport,
    cis_truck
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    cis_gunship
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    cis_cas,
    cis_air
];