#pragma once
#include <iostream>

enum Direction
{
	UPPER_LEFT,
	UPPER_RIGHT,
	LOWER_LEFT,
	LOWER_RIGHT
};

class Position
{
public:
	int GetX();
	int GetY();
	int SetX(int temp);
	int SetY(int temp);
	Position();
private:
	int posx;
	int posy;
};

class tPoint : public Position
{
public:
	int LinearMove();
	int RandMove();

	tPoint();

private:
	int direction;
	int randspeed;
};

class Line : public Position
{

};

class Circle
{

};

class Rect
{

};

class Triangle
{

};

class Elips
{

};

class diamond
{

};
