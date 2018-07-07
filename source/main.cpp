#include <string.h>
#include <stdio.h>

#include <switch.h>
#include <SDL2/SDL.h>

#include "app.hpp"

int main(int argc, char* args[]) {
		SDL_Window* window;
		
		App game;
		game.WindowInit(window);
	
		//Main loop
		while (appletMainLoop()){
		//Scan all the inputs.
        hidScanInput();

        //Code

        //hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
		}
		
        SDL_DestroyWindow(window);
        SDL_Quit();
		return 0;
}
