#include "util.h"
#include <SDL.h>
//#include "sdl_backend.h"

void Util::sleep(int milliseconds)
{
	SDL_Delay(milliseconds);
	//SDLDelay(milliseconds);
}