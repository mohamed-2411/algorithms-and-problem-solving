#include <iostream>
using namespace std;

float RectangleArea(float a, float b)
{
	return a * b;
}

int main()
{
	float a, b, Area;

	cout << "Please, enter a: \n";
	cin >> a;

	cout << "Please, enter b: \n";
	cin >> b;

	Area = RectangleArea(a, b);
	cout << "Area = " << Area << endl;
	return 0;
}