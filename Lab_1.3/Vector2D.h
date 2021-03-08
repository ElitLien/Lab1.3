//////////////
// Vector2D.h
//////////////

#pragma once
#include <string>

using namespace std;

class Vector2D
{
	double x;
	double y;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }

	void Init(int x, int y);
	void Read();
	void Display() const;
	string toString() const;

	friend double ScalarP(Vector2D m, Vector2D l);
	friend Vector2D Multi(Vector2D m, double r);
	double Lenght();
	friend bool Comparison_More(Vector2D m, Vector2D l);
	friend bool Comparison_Less(Vector2D m, Vector2D l);
	friend bool Comparison_Equal(Vector2D m, Vector2D l);
};

