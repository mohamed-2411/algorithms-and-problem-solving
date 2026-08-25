#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
	float D, Area;

	cout << "Please, enter D: \n";
	cin >> D;

	Area = (PI * pow(D, 2)) / 4;

	cout << ceil(Area);



	return 0;
}