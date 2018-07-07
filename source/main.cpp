#include <string.h>
#include <stdio.h>

#include <switch.h>

#include <SDL2/SDL.h>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main(int argc, char* args[]) {
	//Window pointer /refrence
        SDL_Window* window = NULL;
	//IDK
        SDL_Surface* screenSurface = NULL;
//Initializing and if unsuccessful, it exits
        if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
                fprintf(stderr, "could not initialize sdl2: %s\n", SDL_GetError());
                return 1;
        }

        window = SDL_CreateWindow(
                "hello_sdl2",
                SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                SCREEN_WIDTH, SCREEN_HEIGHT,
                SDL_WINDOW_SHOWN
        );
        if (window == NULL) {
                fprintf(stderr, "could not create window: %s\n", SDL_GetError());
                return 1;
        }
		
		//Main loop
		
        SDL_DestroyWindow(window);
        SDL_Quit();
}