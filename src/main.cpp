#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include <SDL.h>

#define WIDTH 800
#define HEIGHT 600
#define DELAY 3000

int main(int argc, char *argv[]) {
  SDL_Window *window = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    fprintf(stderr, "SDL Failed to init");
    return 1;
  }

  window = SDL_CreateWindow("SDL Example",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            WIDTH,
                            HEIGHT,
                            0);

  if (window == NULL) {
    fprintf(stderr, "Window failed to init");
    return 1;
  }

  SDL_Delay(DELAY);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 1;
}
