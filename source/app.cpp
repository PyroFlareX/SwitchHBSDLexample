#include "app.hpp"

int App::WindowInit(window)
{
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
		
}

/*void App::winDestroy(void)
{
	SDL_DestroyWindow(window);
    SDL_Quit();
}*/

/*void App::scanInput(void)
{
	 hidScanInput();
    u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
    
}*/