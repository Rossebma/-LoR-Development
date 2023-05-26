params [
	["_vehicle","RD501_LAAT_MKIII_Balls"],
	["_pad",spawnpad_0]
];
_padcoords = getPosATL _pad;
_dir = getDir _pad;

_veh = createVehicle        
[      
	_vehicle,      
	_padcoords,      
	[],      
	0,      
	"NONE"      
];
_veh setDir _dir;