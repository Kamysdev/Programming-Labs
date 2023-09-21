#include "../headers/SDL_Init.hpp"
#include "figure.hpp"

SDL_Texture* cat = NULL;

int main(int argc, char** argv)
{
	srand(time(NULL));
	graphic win{};

	int size = 100;
	int error{};
	int task = 1;
	error = win.init();

	tPoint* arr = new tPoint[size];
	SDL_Rect dot = { 0, 0, 50, 50 };
	SDL_SetRenderDrawColor(&win.GetRen(), 0, 0, 0, 255);

	win.AddToSurface();
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