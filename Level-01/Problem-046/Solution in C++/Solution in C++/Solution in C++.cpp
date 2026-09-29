#include <iostream>
using namespace std;

void PrintLettersAToZ()
{
	for (int Letter = 65; Letter <= 90; Letter++)
	{
		cout << endl << (char)Letter;
	}
	
	cout << endl;
}

int main()
{

	PrintLettersAToZ();

	return 0;
}