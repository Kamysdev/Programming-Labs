#include "figure.hpp"

int main(int argc, char** argv)
{
	srand((unsigned int)time(NULL));

	graphic graphics{};

	int size = 100;
	int error = graphics.init();
	int task = 1;

	Figure* arr = new Figure[size];
	SDL_Rect dot = { 0, 0, 50, 50 };
	SDL_Event windowEvent{};

	SFigure fignum = DIAMOND;

	LoadTexture(arr, size, fignum, graphics);

	while (error == 0)
	{
	
		for (int i = 0; i < size; i++)
		{
			dot.x = arr[i].GetX();
			dot.y = arr[i].GetY();
			arr[i].LinearMove();

			if (task == 1)
			{
				if (&arr[i].GetCircle() != NULL)
				{
					SDL_RenderCopyEx(&graphics.GetRen(),
						&arr[i].GetTexture(fignum),
						0,
						&dot,
						arr[i].Rotation(),
						&arr[i].GetCenter(),
						SDL_FLIP_VERTICAL);
				}
				else
				{
					SDL_RenderCopyEx(&graphics.GetRen(),
						&arr[i].GetTexture(fignum),
						0, &dot,
						arr[i].Rotation(),
						0,
						SDL_FLIP_HORIZONTAL);
				}
			}
			else
			{
				SDL_RenderCopy(&graphics.GetRen(), &arr[i].GetTexture(fignum), 0, &dot);
			}
		}
		SDL_RenderPresent(&graphics.GetRen());
		SDL_RenderClear(&graphics.GetRen());

		if (SDL_PollEvent(&windowEvent))
		{
			if (windowEvent.type == SDL_QUIT)
			{
				break;
			}

			switch (windowEvent.key.keysym.sym)
			{
			case SDLK_1:
				task = 1;
				break;
			case SDLK_2:
				task = 0;
				break;
			case SDLK_ESCAPE: // Show or hide console
				return 0;
				break;
			}
		}
	}

	return error;
}