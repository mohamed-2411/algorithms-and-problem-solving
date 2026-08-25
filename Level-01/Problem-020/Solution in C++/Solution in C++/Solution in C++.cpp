#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
	float A, Area;

	cout << "Please, enter A: \n";
	cin >> A;

	Area = (PI * pow(A, 2)) / 4;

	cout << ceil(Area);




	return 0;
}