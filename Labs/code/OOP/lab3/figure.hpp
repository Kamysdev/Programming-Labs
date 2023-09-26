#pragma once
#include "../headers/SDL_Init.hpp"

enum Direction
{
	UPPER_LEFT,
	UPPER_RIGHT,
	LOWER_LEFT,
	LOWER_RIGHT
};

class tPoint
{
public:
	int GetX();
	int GetY();
	int SetX(int temp);
	int SetY(int temp);

	int LinearMove();
	int RandMove();
	int SwitchDir();

	tPoint();
private:
	int direction;
	int randspeed;
	int posx;
	int posy;
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
public:
	SDL_Texture& GetCircle();
	int SetCircle(graphic windows);

	Circle();
private:
	SDL_Texture* CircleTexture;
};

class Rect : public Circle
{
private:
	SDL_Texture* RectTexture;
};

class Triangle : public Rect
{
private:
	SDL_Texture* TriangleTexture;
};

class Elips : public Triangle
{
private:
	SDL_Texture* ElipsTexture;
};

class Diamond : public Elips
{
private:
	SDL_Texture* DiamondTexture;
};
