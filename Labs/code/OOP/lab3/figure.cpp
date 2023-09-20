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

int SwitchDir(int& direction, int& randspeed)
{
	if (GetX() >= 1230 || GetX() <= 0)
	{
		SetAngleDirectionX(direction);
		if (GetX() >= 1230)
		{
			position.SetX(-15);
		}
		if (position.GetX() <= 0)
		{
			position.SetX(15);
		}
	}
	if (position.GetY() >= 670 || position.GetY() <= 0)
	{
		SetAngleDirectionY(direction);
		if (position.GetY() >= 760)
		{
			position.SetY(-10);
		}
		if (position.GetY() <= 0)
		{
			position.SetY(10);
		}
	}
	randspeed = 1 + rand() % 3;
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

	SwitchDir(direction, randspeed);

	return 0;
}

int tPoint::RandMove()
{
	position.SetX(randspeed);
	position.SetY(randspeed);

	SwitchDir(position, direction, randspeed);
	randspeed = 1 + rand() % 8 - 4;

	return 0;
}

tPoint::tPoint()
{
	direction = rand() % 4;
	randspeed = 1 + rand() % 3;
}

int Position::GetX()
{
	return posx;
}

int Position::GetY()
{
	return posy;
}

int Position::SetX(int temp)
{
	posx += temp;
	return 0;
}

int Position::SetY(int temp)
{
	posy += temp;
	return 0;
}

Position::Position()
{
	posx = rand() % 1230;
	posy = rand() % 670;
}
