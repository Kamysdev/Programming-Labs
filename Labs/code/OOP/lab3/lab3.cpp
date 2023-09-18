#include "../headers/SDL_Init.hpp"
#include "figure.hpp"

SDL_Texture* cat = NULL;

int main(int argc, char** argv)
{
	srand(time(NULL));
	graphic win{};
	int error{};
	error = win.init();
	tPoint* arr = new tPoint[100];
	SDL_Rect dot = { 0, 0, 50, 50 };
	SDL_SetRenderDrawColor(win.ren, 0, 0, 0, 255);

	win.surface = SDL_LoadBMP("1.bmp");
	cat = SDL_CreateTextureFromSurface(win.ren, win.surface);
	if (cat == NULL)
	{
		return 2;
	}

	while (error == 0)
	{
		for (int i = 0; i < 100; i++)
		{
			dot.x = arr[i].GetX();
			dot.y = arr[i].GetY();
			arr[i].LinearMove();
			SDL_RenderCopy(win.ren, cat, 0, &dot);			
		}
		win.ren;
		SDL_RenderPresent(win.ren);
		SDL_RenderClear(win.ren);
	}

	return 0;
}