#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(const float PI, float a, float b)
{
	return PI * (pow(b, 2) / (4)) * ((2 * a - b) / (2 * a + b));
}

int main()
{
	const float PI = 3.14;
	float a, b, Area;

	cout << "Please, enter a: \n";
	cin >> a;
	
	cout << "Please, enter b: \n";
	cin >> b;

	Area = CircleArea(PI, a, b);

	cout << "Area = " << Area << endl;


	return 0;
}