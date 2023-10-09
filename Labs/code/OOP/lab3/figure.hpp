#pragma once
#include "../headers/SDL_Init.hpp"

_UCRT_DISABLED_WARNING_4412

enum Direction
{
	UPPER_LEFT,
	UPPER_RIGHT,
	LOWER_LEFT,
	LOWER_RIGHT
};

enum SFigure
{
	POINT,
	LINE,
	CIRCLE,
	RECT,
	TRIANGLE,
	ELIPS,
	DIAMOND
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
	int Rotation();

	int SetSurface(std::string locality);

	tPoint();

protected:
	SDL_Surface* tempSurface;

private:
	int direction;
	int randspeed;
	int posx;
	int posy;
	int rotationspeed;

	int SwitchDir();
};

class Line : public tPoint
{
public:
	SDL_Texture& GetLine();
	int* SetLine(graphic windows);

	Line();
private:
	SDL_Texture* LineTexture;
};

class Circle : public Line
{
public:
	SDL_Texture& GetCircle();
	SDL_Point& GetCenter();
	int SetCircle(graphic windows);

	Circle();
private:
	SDL_Texture* CircleTexture;
	SDL_Point* centerpos = new SDL_Point;
};

class Rect : public Circle
{
public:
	SDL_Texture& GetRect();
	int SetRect(graphic windows);

	Rect();
private:
	SDL_Texture* RectTexture;
};

class Triangle : public Rect
{
public:
	SDL_Texture& GetTriangle();
	int SetTriangle(graphic windows);

	Triangle();
private:
	SDL_Texture* TriangleTexture;
};

class Elips : public Triangle
{
public:
	SDL_Texture& GetElips();
	int SetElips(graphic windows);

	Elips();
private:
	SDL_Texture* ElipsTexture;
};

class Diamond : public Elips
{
public:
	SDL_Texture& GetDiamond();
	int SetDiamond(graphic windows);

	Diamond();
private:
	SDL_Texture* DiamondTexture;
};

class Figure : public Diamond
{
public:
	int SelectFigure(int fignum, graphic graphics);

	SDL_Texture& GetTexture(int fignum);
};

void LoadTexture(Figure* arr, int size, int fignum, graphic graphics);
