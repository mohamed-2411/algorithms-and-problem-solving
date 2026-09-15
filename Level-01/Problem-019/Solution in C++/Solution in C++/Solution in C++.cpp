#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(const float PI, float D)
{
	return (PI * pow(D, 2)) / 4;
}

int main()
{
	const float PI = 3.14;
	float D, Area;

	cout << "Please, enter D: \n";
	cin >> D;

	Area = CircleArea(PI, D);

	cout << "Area = " << Area << endl;

	return 0;
}