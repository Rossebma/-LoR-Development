_params = _this select 3;
_side = _params select 0;
_radius = _params select 1;

_nearMen = nearestObjects [kill, ["Man"], _radius];
{
 if (side _x == _side) then {
   _x setDamage 1.0;
 };
} forEach (_nearMen - [player]);
