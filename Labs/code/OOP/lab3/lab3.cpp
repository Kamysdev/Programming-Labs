#include "figure.hpp"

int main(int argc, char** argv)
{
	srand((unsigned int)time(NULL));

	int size = 100;
	graphic win{};

	int size = 100;
	int error{};
	int task = 1;
	error = win.init();
	Diamond* arr = new Diamond[size];
	SDL_Rect dot = { 0, 0, 50, 50 };
	SDL_SetRenderDrawColor(&win.GetRen(), 255, 255, 255, 255);

	win.AddToSurface("materials/diamond.bmp");
	for (int i = 0; i < size; i++)
	{
		arr[i].SetLine(win);
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
				SDL_RenderCopy(&win.GetRen(), &arr[i].GetLine(), 0, &dot);
			}
			SDL_RenderPresent(&win.GetRen());
			SDL_RenderClear(&win.GetRen());
		}
	}

	return 0;
}