#include "figure.hpp"

int tPoint::GetX()
{
	return posx;
}

int tPoint::GetY()
{
	return posy;
}

int tPoint::LinearMove()
{
	posx += 2;
	posy += 2;

	// Add bounce func to understand where we need to move kittens
	// 2 new var idc

	return 0;
}


tPoint::tPoint()
{
	posx = rand() % 1280;
	posy = rand() % 720;
}

