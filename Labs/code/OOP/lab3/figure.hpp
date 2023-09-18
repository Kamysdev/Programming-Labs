#pragma once
#include <iostream>

class tPoint
{
public:
	int GetX();
	int GetY();

	int LinearMove();

	tPoint();

private:
	int posx;
	int posy;

};