#include "figure.hpp"

int SetAngleDirectionX(int& direction)
{
	switch (direction)
	{
	case UPPER_LEFT:
		direction = UPPER_RIGHT;
		break;
	case UPPER_RIGHT:
		direction = UPPER_LEFT;
		break;
	case LOWER_LEFT:
		direction = LOWER_RIGHT;
		break;
	case LOWER_RIGHT:
		direction = LOWER_LEFT;
		break;
	default:
		break;
	}
	return 0;
}

int SetAngleDirectionY(int& direction)
{
	switch (direction)
	{
	case UPPER_LEFT:
		direction = LOWER_LEFT;
		break;
	case UPPER_RIGHT:
		direction = LOWER_RIGHT;
		break;
	case LOWER_LEFT:
		direction = UPPER_LEFT;
		break;
	case LOWER_RIGHT:
		direction = UPPER_RIGHT;
		break;
	default:
		break;
	}

	return 0;
}

int tPoint::SwitchDir()
{
	if (GetX() >= 1230 || GetX() <= 0)
	{
		SetAngleDirectionX(direction);
		if (GetX() > 1230)
		{
			SetX(-15);
		}
		if (GetX() < 0)
		{
			SetX(15);
		}
		randspeed = 1 + rand() % 8;
	}
	if (GetY() >= 670 || GetY() <= 0)
	{
		SetAngleDirectionY(direction);
		if (GetY() > 670)
		{
			SetY(-15);
		}
		if (GetY() < 0)
		{
			SetY(10);
		}
		randspeed = 1 + rand() % 3;
	}

	return 0;
}

int tPoint::LinearMove()
{
	if (direction == UPPER_LEFT)
	{
		SetX(-randspeed);
		SetY(-randspeed);
	}
	if (direction == UPPER_RIGHT)
	{
		SetX(randspeed);
		SetY(-randspeed);
	}
	if (direction == LOWER_LEFT)
	{
		SetX(-randspeed);
		SetY(randspeed);
	}
	if (direction == LOWER_RIGHT)
	{
		SetX(randspeed);
		SetY(randspeed);
	}

	SwitchDir();

	return 0;
}

int tPoint::RandMove()
{
	SetX(randspeed);
	SetY(randspeed);

	SwitchDir();
	randspeed = 1 + rand() % 8 - 4;

	return 0;
}

int tPoint::Rotation()
{
	rotationspeed++;
	if (rotationspeed > 360) rotationspeed = 0;

	return rotationspeed;
}

int tPoint::SetSurface(std::string locality)
{
	tempSurface = SDL_LoadBMP(locality.c_str());

	return 0;
}

tPoint::tPoint()
{
	direction = rand() % 4;
	randspeed = 1 + rand() % 3;
	posx = rand() % 1240;
	posy = rand() % 670;
	rotationspeed = 1;

	tempSurface = NULL;
}

int tPoint::GetX()
{
	return posx;
}

int tPoint::GetY()
{
	return posy;
}

int tPoint::SetX(int temp)
{
	posx += temp;
	return 0;
}

int tPoint::SetY(int temp)
{
	posy += temp;
	return 0;
}

SDL_Texture& Line::GetLine()
{
	return *LineTexture;

}

int* Line::SetLine(graphic windows)
{
	SetSurface("materials/Line.bmp");
	LineTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Line::Line()
{
	LineTexture = NULL;
}

SDL_Texture& Circle::GetCircle()
{
	return *CircleTexture;
}

SDL_Point& Circle::GetCenter()
{
	return* centerpos;
}

int Circle::SetCircle(graphic windows)
{
	SetSurface("materials/Circle.bmp");
	CircleTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Circle::Circle()
{
	centerpos->x = 50;
	centerpos->y = 0;
	
	CircleTexture = NULL;
}

SDL_Texture& Rect::GetRect()
{
	return *RectTexture;
}

int Rect::SetRect(graphic windows)
{
	SetSurface("materials/Rect.bmp");
	RectTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Rect::Rect()
{
	RectTexture = NULL;
}

SDL_Texture& Triangle::GetTriangle()
{
	return *TriangleTexture;
}

int Triangle::SetTriangle(graphic windows)
{
	SetSurface("materials/Triangle.bmp");
	TriangleTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Triangle::Triangle()
{
	TriangleTexture = NULL;
}

SDL_Texture& Elips::GetElips()
{
	return *ElipsTexture;
}

int Elips::SetElips(graphic windows)
{
	SetSurface("materials/Elips.bmp");
	ElipsTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Elips::Elips()
{
	ElipsTexture = NULL;
}

SDL_Texture& Diamond::GetDiamond()
{
	return *DiamondTexture;
}

int Diamond::SetDiamond(graphic windows)
{
	SetSurface("materials/Diamond.bmp");
	DiamondTexture = SDL_CreateTextureFromSurface(&windows.GetRen(), tempSurface);

	return 0;
}

Diamond::Diamond()
{
	DiamondTexture = NULL;
}

int Figure::SelectFigure(int fignum, graphic graphics)
{
	switch (fignum)
	{
	case POINT:
		break;
	case LINE:
		SetLine(graphics);
		break;
	case CIRCLE:
		SetCircle(graphics);
		break;
	case RECT:
		SetRect(graphics);
		break;
	case TRIANGLE:
		SetTriangle(graphics);
		break;
	case ELIPS:
		SetElips(graphics);
		break;
	case DIAMOND:
		SetDiamond(graphics);
		break;
	default:
		break;
	}
	return 0;
}

SDL_Texture& Figure::GetTexture(int fignum)
{
	switch (fignum)
	{
	case POINT:
		break;
	case LINE:
		return GetLine();
	case CIRCLE:
		return GetCircle();
	case RECT:
		return GetRect();
	case TRIANGLE:
		return GetTriangle();
	case ELIPS:
		return GetElips();
	case DIAMOND:
		return GetDiamond();
	default:
		break;
	}

	return GetLine();
}

void LoadTexture(Figure* arr, int size, int fignum, graphic graphics)
{
	for (int i = 0; i < size; i++)
	{
		arr[i].SelectFigure(fignum, graphics);
	}
}