// good code lol
// use pragma once next time if you dont wanna have circular dependancy 


// these macros are going to throw errors if we dont put them in CMakeLists.txt ( so put your headers in there kids)
#define SCREEN_WIDTH 800 
#define SCREEN_HEIGHT 600

#define MAP_SIZE 96

#define TILE_HEIGHT 8
#define TILE_WIDTH 8

#define MAP_RENDER_AREA 24

#define MAP_RENDER_OFFSET_X ((SCREEN_WIDTH - (TILE_WIDTH * MAP_RENDER_AREA)) / 2)
#define MAP_RENDER_OFFSET_Y 425
