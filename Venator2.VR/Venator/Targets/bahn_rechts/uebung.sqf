params [
	["_lehrgang","ugl"],
	["_uebung",0]
];

ugl = [
	[
		bahn_rechts_target_0
	],
	[
		bahn_rechts_target_1,
		bahn_rechts_target_2,
		bahn_rechts_target_3
	],
	[
		bahn_rechts_target_4,
		bahn_rechts_target_5,
		bahn_rechts_target_6,
		bahn_rechts_target_7,
		bahn_rechts_target_8
	],
	[
		bahn_rechts_target_9,
		bahn_rechts_target_10,
		bahn_rechts_target_11,
		bahn_rechts_target_12,
		bahn_rechts_target_13,
		bahn_rechts_target_14,
		bahn_rechts_target_15,
		bahn_rechts_target_16,
		bahn_rechts_target_17,
		bahn_rechts_target_18,
		bahn_rechts_target_19,
		bahn_rechts_target_20
	],
	[
		bahn_rechts_target_3,
		bahn_rechts_target_26,
		bahn_rechts_target_8,
		bahn_rechts_target_25,
		bahn_rechts_target_23,
		bahn_rechts_target_24,
		bahn_rechts_target_16,
		bahn_rechts_target_17,
		bahn_rechts_target_21,
		bahn_rechts_target_22,
		bahn_rechts_target_19,
		bahn_rechts_target_20
	]
];

heavy = [
	[

	],
	[

	],
	[

	],
	[

	],
	[

	]
];

for [{ private _i = 0 }, { _i < 5 }, { _i = _i + 1 }] do {
	private _current = ugl select _i;
	{
		_x animate ["Terc",1];
		
	} forEach _current;
};

private _selection = [];
if (_lehrgang == "ugl") then {
	_selection = ugl select _uebung;
};
if (_lehrgang == "heavy") then {
	_selection = heavy select _uebung;
};

{
	_x animate ["Terc",0];
} forEach _selection;