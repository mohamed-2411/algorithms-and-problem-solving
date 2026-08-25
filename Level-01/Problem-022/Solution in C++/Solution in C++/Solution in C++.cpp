#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float PI = 3.14;
	float a, b, Area;

	cout << "Please, enter a: \n";
	cin >> a;
	cout << "Please, enter b: \n";
	cin >> b;

	Area = (PI) * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	cout << floor(Area);




	return 0;
}