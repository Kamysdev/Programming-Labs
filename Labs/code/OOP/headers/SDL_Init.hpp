#pragma once
#include <SDL.h>
#include <iostream>

class graphic
{
public:
	SDL_Window& GetWindow();
	SDL_Renderer& GetRen();

	int init();

private:
	SDL_Window* window;
	SDL_Renderer* ren;
};
