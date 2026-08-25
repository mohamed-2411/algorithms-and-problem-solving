#include <iostream>
using namespace std;

int main()
{
	float Mark1, Mark2, Mark3;

	cout << "Please, eneter Mark1: \n";
	cin >> Mark1;

	cout << "Please, enter Mark2: \n";
	cin >> Mark2;

	cout << "Please, enter Mark3: \n";
	cin >> Mark3;

	float Average = (Mark1 + Mark2 + Mark3) / 3;

	cout << "The average of the entered marks is: " << Average << endl;


	return 0;
}