#include <iostream>
using namespace std;

int main()
{
	int Num;

	cout << "Please, enter the number: \n";
	cin >> Num;

	cout << round(pow(Num, 2)) << endl;
	cout << round(pow(Num, 3)) << endl;
	cout << round(pow(Num, 4)) << endl;



	return 0;
}