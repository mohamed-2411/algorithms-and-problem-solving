#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B)
{
	cout << "Please enter A: \n";
	cin >> A;

	cout << "Please enter B: \n";
	cin >> B;
}

float CircleAreaInscribedInIsoscelesTriangle(float A, float B)
{
	const float PI = 3.14;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B;

	ReadTriangleData(A, B);
	PrintResult(CircleAreaInscribedInIsoscelesTriangle(A, B));


	return 0;
}