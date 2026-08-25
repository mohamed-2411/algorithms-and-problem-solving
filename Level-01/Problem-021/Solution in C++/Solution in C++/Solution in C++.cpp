#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
	float L, Area;

	cout << "Please, enter L: \n";
	cin >> L;
	
	Area = pow(L, 2) / (4 * PI);

	cout << floor(Area);







	return 0;
}