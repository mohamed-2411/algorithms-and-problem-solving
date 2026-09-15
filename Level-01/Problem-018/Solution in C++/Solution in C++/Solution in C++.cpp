#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(const float PI, float r)
{
	return PI * pow(r, 2);
}

int main()
{
	const float PI = 3.14;
	float r, Area;

	cout << "Please, enter r: \n";
	cin >> r;

	Area = CircleArea(PI, r);

	cout << "Area = " << Area << endl;


	return 0;
}