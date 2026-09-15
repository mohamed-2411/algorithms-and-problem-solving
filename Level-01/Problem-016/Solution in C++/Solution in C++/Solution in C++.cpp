#include <iostream>
#include <cmath>

using namespace std;

float RectangleArea(float a, float d)
{
	return a * sqrt(pow(d, 2) - pow(a, 2));
}

int main()
{
	float a, d, Area;

	cout << "Please, enter a: \n";
	cin >> a;

	cout << "Please, enter d: \n";
	cin >> d;

	Area = RectangleArea(a, d);

	cout << "Area = " << Area << endl;





	return 0;
}