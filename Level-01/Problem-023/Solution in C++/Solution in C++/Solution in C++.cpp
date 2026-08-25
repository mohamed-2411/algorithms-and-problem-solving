#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float PI = 3.14;
	float a, b, c, Area, p, x;

	cout << "Please, enter a: \n";
	cin >> a;

	cout << "Please, enter b: \n";
	cin >> b;

	cout << "Please, enter c: \n";
	cin >> c;

	p = (a + b + c) / 2;
	x = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	Area = PI * pow(x, 2);

	cout << round(Area) << endl;



	return 0;
}