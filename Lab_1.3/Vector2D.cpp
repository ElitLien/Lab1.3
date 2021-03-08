////////////////
// Vector2D.cpp
////////////////

#include "Vector2D.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Vector2D::Init(int x, int y)
{
	SetX(x);
	SetY(y);
}

void Vector2D::Read()
{
	int x, y;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	Init(x, y);
}

void Vector2D::Display() const
{
	cout << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

string Vector2D::toString() const
{
	stringstream sout;

	sout << "(" << x << ";" << y << ")" << endl;
	
	return sout.str();
	
}

double ScalarP(Vector2D m, Vector2D l)
{
	double n = m.x * l.x + m.y * l.y;
	return n;
}

Vector2D Multi(Vector2D m, double r)
{
	Vector2D tmp;
	tmp.x = m.x * r;
	tmp.y = m.y * r;
	return tmp;
}

double Vector2D::Lenght()
{
	double len = sqrt((x * x) + (y * y));
	return len;
}

bool Comparison_More(Vector2D c, Vector2D d)
{
	if (c.Lenght() > d.Lenght())
	{
		cout << "Vector C > Vector D" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Comparison_Less(Vector2D c, Vector2D d)
{
	if (c.Lenght() < d.Lenght())
	{
		cout << "Vector C < Vector D" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Comparison_Equal(Vector2D c, Vector2D d)
{
	if (c.Lenght() == d.Lenght())
	{
		cout << "Vector C = Vector D" << endl;
		return true;
	}
	else
	{
		return false;
	}
}