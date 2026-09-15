#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(const float PI, float L)
{
	return (pow(L, 2)) / (PI * 4);
}

int main()
{
	const float PI = 3.14;
	float L, Area;

	cout << "Please, enter L: \n";
	cin >> L;

	Area = CircleArea(PI, L);

	cout << "Area = " << Area << endl;


	return 0;
}