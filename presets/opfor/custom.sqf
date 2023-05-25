//
//
//NEW CIS ENEMY
//
//


/*
    Needed Mods:
        - 327th
        - 3as
        - Kobra 
*/



// Enemy infantry classes
opfor_officer = "Aux327th_CIS_TSD";
opfor_squad_leader = "327th_JLTS_B1Commander";
opfor_team_leader = "327th_JLTS_Base_B1Droid";
opfor_sentry = "327th_JLTS_B1Security";
opfor_rifleman = "327th_JLTS_Base_B1Droid";
opfor_rpg = "327th_JLTS_B1AT";
opfor_grenadier = "327th_JLTS_B1Shotgun";
opfor_machinegunner = "327th_JLTS_B1Heavy";
opfor_heavygunner = "327th_normalb2";
opfor_marksman = "327th_JLTS_Base_B1Droid";
opfor_sharpshooter = "327th_JLTS_B1Sniper";
opfor_sniper = "Aux327th_BXSNIPER";
opfor_at = "327th_JLTS_B1AT";
opfor_aa = "327th_JLTS_B1AA";
opfor_medic = "327th_JLTS_Base_B1Droid";
opfor_engineer = "327th_JLTS_Base_B1Droid";
opfor_paratrooper = "Aux327th_BX_Base";

// Enemy vehicles used by secondary objectives.
opfor_mrap = "327th_CIS_SAC";
opfor_mrap_armed = "327th_CIS_SAC";
opfor_transport_helo = "327th_HMP_transport";
opfor_transport_truck = "442_argon_transport_cis";
opfor_ammobox_transport = "442_argon_transport_cis";
opfor_fuel_truck = "442_argon_fuel_cis";
opfor_ammo_truck = "442_argon_ammo_cis";
opfor_fuel_container = "B_Slingload_01_Fuel_F";
opfor_ammo_container = "B_Slingload_01_Ammo_F";
opfor_flag = "ls_commandPost_cis_blue";

cis_hailfire = "Aux327thCIS_hailfire";
cis_hailfire_art = "Aux327thCIS_hailfire_artillery";
cis_gat = "327th_GIS_LGAT";
cis_sam = "Aux327th_Hailfire_SAM";
cis_aa = "Aux327th_GAT_AA";
cis_aat = "327th_CIS_AAT";
cis_snail = "Aux327th_CIS_Snail";
cis_mtt = "3as_MTT";

cis_truck = "442_argon_covered_cis";
cis_truck_flatbed = "442_argon_transport_cis";
cis_troop_transport = "327th_CIS_SAC";

cis_gunship = "327th_HMP_gunship";
cis_trasport_plane = "327th_HMP_transport";
cis_cas = "327th_CISVultureCAS";
cis_air = "327th_CISVultureElite";

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
    cis_gat,
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
    cis_gat,
    cis_troop_transport,
    cis_truck,
    cis_snail,
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