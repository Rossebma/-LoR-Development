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
opfor_officer = "RD501_opfor_unit_B1_commander";
opfor_squad_leader = "RD501_opfor_unit_B1";
opfor_team_leader = "RD501_opfor_unit_B1";
opfor_sentry = "RD501_opfor_unit_B1_security";
opfor_rifleman = "RD501_opfor_unit_B1";
opfor_rpg = "RD501_opfor_unit_B1_AT";
opfor_grenadier = "RD501_opfor_unit_B1";
opfor_machinegunner = "RD501_opfor_unit_B1_heavy";
opfor_heavygunner = "RD501_opfor_unit_B1_shotgun";
opfor_marksman = "RD501_opfor_unit_B1_marksman";
opfor_sharpshooter = "RD501_opfor_unit_B1";
opfor_sniper = "RD501_opfor_unit_B1";
opfor_at = "RD501_opfor_unit_B1_AT";
opfor_aa = "RD501_opfor_unit_B1_AA";
opfor_medic = "RD501_opfor_unit_B1";
opfor_engineer = "RD501_opfor_unit_B1";
opfor_paratrooper = "RD501_opfor_unit_B1_marine";

// Enemy vehicles used by secondary objectives.
opfor_mrap = "RD501_light_infantry_transport_CIS_MkII";
opfor_mrap_armed = "RD501_cis_mtt";
opfor_transport_helo = "RD501_HMP_transport";
opfor_transport_truck = "442_argon_transport_cis";
opfor_ammobox_transport = "442_argon_transport_cis";
opfor_fuel_truck = "442_argon_fuel_cis";
opfor_ammo_truck = "442_argon_ammo_cis";
opfor_fuel_container = "B_Slingload_01_Fuel_F";
opfor_ammo_container = "B_Slingload_01_Ammo_F";
opfor_flag = "ls_commandPost_cis_blue";

cis_hailfire = "RD501_hailfire_cis";
cis_hailfire_art = "RD501_hailfire_cis_artillery";
cis_sam = "RD501_cis_gat_aa_olive";
cis_aa = "RD501_cis_gat_aa_olive";
cis_aat = "RD501_AAT_Brown";
cis_snail = "RD501_cis_n99";
cis_mtt = "RD501_cis_mtt";

cis_truck = "442_argon_covered_cis";
cis_truck_flatbed = "442_argon_transport_cis";
cis_troop_transport = "3as_SAC_Trade";

cis_gunship = "RD501_HMP_gunship";
cis_trasport_plane = "RD501_HMP_transport";
cis_cas = "327th_CISVultureCAS";
cis_air = "RD501_Vulture";

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