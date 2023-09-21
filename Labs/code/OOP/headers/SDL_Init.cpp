#include "SDL_init.hpp"

SDL_Window& graphic::GetWindow()
{
    return *window;
}

SDL_Surface& graphic::GetSurface()
{
    return *surface;
}

int graphic::AddToSurface(std::string name)
{
    surface = SDL_LoadBMP(name.c_str(), "rb");
    return 0;
}

SDL_Renderer& graphic::GetRen()
{
    return *ren;
}

int graphic::init()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        return 1;
    }

    window = SDL_CreateWindow("Dungeon Guardian",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        1280,
        720,
        SDL_WINDOW_ALLOW_HIGHDPI);

    // Check that the window was successfully created
    if (window == NULL)
    {
        return 2;
    }

    ren = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == NULL) {
        return 3;
    }
    SDL_SetRenderDrawColor(ren, 0xFF, 0xFF, 0xFF, 0xFF);

    surface = SDL_GetWindowSurface(window);

    return 0;
}
