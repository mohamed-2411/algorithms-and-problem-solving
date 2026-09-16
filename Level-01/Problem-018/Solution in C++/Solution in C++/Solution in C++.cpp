#include <iostream>
#include <cmath>

using namespace std;

float ReadRadious()
{
	float R;
	
	cout << "Please enter r: \n";
	cin >> R;

	return R;
}

float CircleArea(float R)
{
	const float PI = 3.14;

	float Area = PI * pow(R, 2);
	return Area;
}

void PrintArea(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	PrintArea(CircleArea(ReadRadious()));

	return 0;
}