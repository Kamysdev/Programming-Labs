#pragma once
#include "../headers/SDL_Init.hpp"

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

class Line : public tPoint
{
public:
	SDL_Texture& GetLine();
	SDL_Texture* SetLine(graphic windows);

	Line();
private:
	SDL_Texture* LineTexture;
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

class Diamond : public Elips
{

};
