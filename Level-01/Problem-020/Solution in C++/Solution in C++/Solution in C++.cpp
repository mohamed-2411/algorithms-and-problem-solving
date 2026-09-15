#include <iostream>
#include <cmath>

using namespace std;

float CircleArea(const float PI, float A)
{
	return (PI * pow(A, 2)) / 4;
}

int main()
{
	const float PI = 3.14;
	float A, Area;

	cout << "Please, enter A: \n";
	cin >> A;

	Area = CircleArea(PI, A);

	cout << "Area = " << Area << endl;
	
	return 0;
}