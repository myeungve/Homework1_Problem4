#pragma once

#include "Draw.h"
#include "Geometric.h"

// Cursor Position Check
bool InsideBox(int i0, int j0, int j1, double xpos, double ypos)
{
	if ( ((i0 <= xpos) && (xpos <= i0 + 100)) && ((j0 <= ypos) && (ypos <= j1)) ) return true;
	else return false;
}

// Child Class
class Change_B1 : public Geometric
{
public:
	int x, y1, y2;

	Change_B1(const int& _x, const int& _y1, const int& _y2)
	{
		initialize(_x, _y1, _y2);
	}

	void initialize(const int& _x, const int& _y1, const int& _y2)
	{
		x = _x;
		y1 = _y1;
		y2 = _y2;
	}

	void draw()
	{
		drawVertical(x, y1, y2, 1.0f, 0.0f, 0.0f);
		drawVertical(x + 100, y1, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 100, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 100, y2, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Change_B2 : public Geometric
{
public:
	int x, y1, y2;

	Change_B2(const int& _x, const int& _y1, const int& _y2)
	{
		initialize(_x, _y1, _y2);
	}

	void initialize(const int& _x, const int& _y1, const int& _y2)
	{
		x = _x;
		y1 = _y1;
		y2 = _y2;
	}

	void draw()
	{
		drawVertical(x, y1, y2, 1.0f, 0.0f, 0.0f);
		drawVertical(x + 100, y1, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 100, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 100, y2, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Change_B3 : public Geometric
{
public:
	int x, y1, y2;

	Change_B3(const int& _x, const int& _y1, const int& _y2)
	{
		initialize(_x, _y1, _y2);
	}

	void initialize(const int& _x, const int& _y1, const int& _y2)
	{
		x = _x;
		y1 = _y1;
		y2 = _y2;
	}

	void draw()
	{
		drawVertical(x, y1, y2, 1.0f, 0.0f, 0.0f);
		drawVertical(x + 100, y1, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 100, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 100, y2, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Change_B4 : public Geometric
{
public:
	int x, y1, y2;

	Change_B4(const int& _x, const int& _y1, const int& _y2)
	{
		initialize(_x, _y1, _y2);
	}

	void initialize(const int& _x, const int& _y1, const int& _y2)
	{
		x = _x;
		y1 = _y1;
		y2 = _y2;
	}

	void draw()
	{
		drawVertical(x, y1, y2, 1.0f, 0.0f, 0.0f);
		drawVertical(x + 100, y1, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 100, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 100, y2, 1.0f, 0.0f, 0.0f);
	}
};