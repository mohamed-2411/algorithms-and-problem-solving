#include <iostream>
using namespace std;

void PrintLetterFromAToZ()
{
	int i = 65;
	while (i <= 90)
	{
		cout << char(i) << endl;
		i++;
	}
}

int main()
{
	
	PrintLetterFromAToZ();

	return 0;
}