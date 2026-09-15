#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	const float PI = 3.14;
	float result;
	result = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	return PI * pow(result, 2);
}

int main()
{
	const float PI = 3.14;
	float a, b, c, Area;

	cout << "Please, enter a: \n";
	cin >> a;

	cout << "Please, enter b: \n";
	cin >> b;
	
	cout << "Please, enter c: \n";
	cin >> c;

	Area = CircleArea(a, b, c);

	cout << "Area = " << Area << endl;

	return 0;
}