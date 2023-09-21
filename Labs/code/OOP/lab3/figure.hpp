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
	int SwitchDir();

	tPoint();
private:
	int direction;
	int randspeed;
};

class Line : public Position
{
	// create call from init to fig
};

class Circle : public Line
{

};

class Rect : public Circle
{

};

class Triangle : public Rect
{

};

class Elips : public Triangle
{

};

class diamond : public Elips
{

};
