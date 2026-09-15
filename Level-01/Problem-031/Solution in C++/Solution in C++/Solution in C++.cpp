#include <iostream>
#include <cmath>

using namespace std;

void PowerOfNumber()
{
	int Num;

	cout << "Please, enter the number: \n";
	cin >> Num;

	cout << pow(Num, 2) << endl;
	cout << pow(Num, 3) << endl;
	cout << pow(Num, 4) << endl;

}

int main()
{
	PowerOfNumber();


	return 0;
}