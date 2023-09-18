#pragma once
#include <SDL.h>

class graphic
{
public:
	SDL_Window* GetWindow();
	SDL_Surface* GetSurface();
	SDL_Renderer* GetRen();
	SDL_Renderer* ren;
	SDL_Surface* surface;
	int init();

private:
	SDL_Window* window;
};
