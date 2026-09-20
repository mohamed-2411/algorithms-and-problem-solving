#include <iostream>
using namespace std;

int ReadGrade()
{
	int Grade;
	
	do
	{
		cout << "Please enter a Grade: \n";
		cin >> Grade;
	} while (Grade < 0 || Grade > 100);

	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

void PrintResult(char Result)
{
	cout << endl << Result << endl;
}

int main()
{
	
	PrintResult(GetGradeLetter(ReadGrade()));

	return 0;
}