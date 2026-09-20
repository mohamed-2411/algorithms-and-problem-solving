#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
	float A;

	cout << "Please enter A: \n";
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.14;

	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));	
	return 0;
}