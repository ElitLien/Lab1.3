///////////////
// Lab_1.3.cpp
///////////////
#include <iostream>
#include "Vector2D.h"

using namespace std;

int main()
{
	Vector2D A;
	A.Read();
	A.Display();
	cout << "A = " << A.toString() << endl;

	Vector2D B;
	B.Read();
	B.Display();
	cout << "B = " << B.toString() << endl;

	double scal = ScalarP(A, B);
	cout << "scal = " << scal << endl;

	Vector2D C = Multi(A, scal);
	C.Display();
	cout << "C = " << C.toString() << endl;

	Vector2D D = Multi(B, scal);
	D.Display();
	cout << "D = " << D.toString() << endl;

	cout << "|A| = " << A.Lenght() << endl;
	cout << "|B| = " << B.Lenght() << endl;
	cout << "|C| = " << C.Lenght() << endl;
	cout << "|D| = " << D.Lenght() << endl;

	Comparison_More(C, D);
	Comparison_Less(C, D);
	Comparison_Equal(C, D);


	return 0;
}