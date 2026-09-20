#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Please enter A: \n";
	cin >> A;

	cout << "Please enter B: \n";
	cin >> B;

	cout << "Please enter C: \n";
	cin >> C;
}

float CircleAreaAroundAnArbitraryTriangle(float A, float B, float C)
{
	const float PI = 3.14;
	float P = (A + B + C) / 2;
	float Area = PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintCircleArea(CircleAreaAroundAnArbitraryTriangle(A, B, C));

	return 0;
}