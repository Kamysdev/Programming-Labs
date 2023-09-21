#include "../headers/SDL_Init.hpp"
#include "figure.hpp"

SDL_Texture* cat = NULL;

int main(int argc, char** argv)
{
	srand((unsigned int)time(NULL));

	int size = 1000;
	graphic win{};
	int error{};
	int task = 1;
	error = win.init();
	Diamond* arr = new Diamond[size];
	SDL_Rect dot = { 0, 0, 50, 30 };
	SDL_SetRenderDrawColor(&win.GetRen(), 255, 255, 255, 255);

	win.AddToSurface("materials/line.bmp");
	cat = SDL_CreateTextureFromSurface(&win.GetRen(), &win.GetSurface());
	if (cat == NULL)
	{
		return 2;
	}

	while (error == 0)
	{
		if (task == 1)
		{
			for (int i = 0; i < size; i++)
			{
				dot.x = arr[i].GetX();
				dot.y = arr[i].GetY();
				arr[i].LinearMove();
				SDL_RenderCopy(&win.GetRen(), cat, 0, &dot);
			}

			SDL_RenderPresent(&win.GetRen());
			SDL_RenderClear(&win.GetRen());
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				dot.x = arr[i].GetX();
				dot.y = arr[i].GetY();
				arr[i].RandMove();
				SDL_RenderCopy(&win.GetRen(), cat, 0, &dot);
			}

			SDL_RenderPresent(&win.GetRen());
			SDL_RenderClear(&win.GetRen());
		}
	}

	return 0;
}