params [
	["_house",0]
];

_targets = [
	[
		killhouse_1_t_0,
		killhouse_1_t_1,
		killhouse_1_t_2,
		killhouse_1_t_3,
		killhouse_1_t_4,
		killhouse_1_t_5,
		killhouse_1_t_6,
		killhouse_1_t_7,
		killhouse_1_t_8,
		killhouse_1_t_9,
		killhouse_1_t_10
	],
	[
		killhouse_2_t_0,
		killhouse_2_t_1,
		killhouse_2_t_2,
		killhouse_2_t_3,
		killhouse_2_t_4,
		killhouse_2_t_5,
		killhouse_2_t_6,
		killhouse_2_t_7,
		killhouse_2_t_8,
		killhouse_2_t_9
	]
];

private _selection = [];
if (_house == 0) then {
	_selection = _targets select _house;
};
if (_house == 1) then {
	_selection = _targets select _house;
};

{
	_x animate ["Terc",0];
} forEach _selection;