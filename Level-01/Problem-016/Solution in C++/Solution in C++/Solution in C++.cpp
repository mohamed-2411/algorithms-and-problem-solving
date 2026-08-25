#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, d, Area;

	cout << "Please, enter a: \n";
	cin >> a;

	cout << "Please, enter d: \n";
	cin >> d;

	Area = a * sqrt(pow(d, 2) - pow(a, 2));

	cout << Area << endl;







	return 0;
}