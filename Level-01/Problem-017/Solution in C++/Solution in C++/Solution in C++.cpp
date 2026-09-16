#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& H)
{
	cout << "Please enter A: \n";
	cin >> A;

	cout << "Please enter H: \n";
	cin >> H;
}

float CalculateTriangleArea(float A, float H)
{
	float Area = (A * H) / 2;
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nTriangle Area = " << Area << endl;
}


int main()
{
	float A, H;

	ReadNumbers(A, H);
	PrintArea(CalculateTriangleArea(A, H));

	return 0;
}