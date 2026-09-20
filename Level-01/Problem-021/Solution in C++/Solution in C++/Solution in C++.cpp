#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference()
{
	float L;

	cout << "Please enter L: \n";
	cin >> L;

	return L;
}

float CircleAreaAlongTheCircumference(float L)
{
	const float PI = 3.14;
	float Area = (pow(L, 2)) / (4 * PI);
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{

	PrintCircleArea(CircleAreaAlongTheCircumference(ReadCircumference()));

	return 0;
}