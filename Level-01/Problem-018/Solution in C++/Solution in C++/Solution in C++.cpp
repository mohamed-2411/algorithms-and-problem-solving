#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float PI = 3.14;
	float r, Area;

	cout << "Please, enter r: \n";
	cin >> r;

	Area = PI * pow(r, 2);

	cout << ceil(Area) << endl;




	return 0;
}