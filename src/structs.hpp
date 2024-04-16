#include "defs.hpp"

struct MapTile {
  int image;
};

struct Map {
  MapTile arr[MAP_SIZE][MAP_SIZE];
};
