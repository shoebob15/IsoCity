#include "defs.hpp"
#include "iso.hpp"
#include <SDL.h>

int initSDL() {
  SDL_Window *window = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    fprintf(stderr, "SDL Failed to init");
    return 1;
  }

  window = SDL_CreateWindow("SDL Example",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            SCREEN_WIDTH,
                            SCREEN_HEIGHT,
                            0);

  if (window == NULL) {
    fprintf(stderr, "Window failed to init");
    return 1;
  }
  
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 1;

}
