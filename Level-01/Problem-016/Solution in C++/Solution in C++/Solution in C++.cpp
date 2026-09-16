#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& D)
{
	cout << "Please enter A: \n";
	cin >> A;

	cout << "Please enter B: \n";
	cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float A, D;

	ReadNumbers(A, D);
	PrintArea(RectangleAreaBySideAndDiagonal(A, D));

	return 0;
}