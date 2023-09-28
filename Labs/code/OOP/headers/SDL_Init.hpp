#pragma once
#include <SDL.h>
#include <iostream>

class graphic
{
public:
	SDL_Window& GetWindow();
	SDL_Surface& GetSurface();
	SDL_Renderer& GetRen();

	int AddToSurface(std::string name);
	int init();

private:
	SDL_Window* window;
	SDL_Renderer* ren;
	SDL_Surface* surface;
};
