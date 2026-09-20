#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{
	float Diameter;

	cout << "Please enter diameter: \n";
	cin >> Diameter;

	return Diameter;
}

float CircleAreaThroughDiameter(float D)
{
	const float PI = 3.14;

	float Area = (PI * pow(D, 2)) / 4;

	return Area;
}

void PrintArea(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	
	PrintArea(CircleAreaThroughDiameter(ReadDiameter()));

	return 0;
}