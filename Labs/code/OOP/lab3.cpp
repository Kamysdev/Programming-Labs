#include "headers/SDL_Init.hpp"
#include <iostream>

int tPoint::GetX()
{
	return posx;
}

int tPoint::GetY()
{
	return posy;
}

class tPoint
{
public:
	int GetX();
	int GetY();

private:
	int posx;
	int posy;

};

int main(int argc, char** argv)
{
	init();

	return 0;
}