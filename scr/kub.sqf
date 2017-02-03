_plane = _this select 0;
lancer_radius = 17.8;
rlancer = "lancer_right" createvehicle(_plane selectionposition "os_right");
llancer = "lancer_left" createvehicle(_plane selectionposition "os_left");

rx1 = (_plane selectionposition "os_right") select 0;
ry1 = (_plane selectionposition "os_right") select 1;
rz1 = (_plane selectionposition "os_right") select 2;

lx1 = (_plane selectionposition "os_left") select 0;
ly1 = (_plane selectionposition "os_left") select 1;
lz1 = (_plane selectionposition "os_left") select 2;

rugol = 171;
lugol = 9;

_rx2 = rx1 - cos(rugol)*lancer_radius;
_ry2 = ry1 - sin(rugol)*lancer_radius;
_rz2 = rz1;

_lx2 = lx1 - cos(lugol)*lancer_radius;
_ly2 = ly1 - sin(lugol)*lancer_radius;
_lz2 = lz1;

rlancer attachTo [_plane,[_rx2,_ry2,_rz2]]; 
llancer attachTo [_plane,[_lx2,_ly2,_lz2]]; 