#include <iostream>
using namespace std;


int ReadAge()
{
	int Age;
	
	cout << "Please enter your Age: \n";
	cin >> Age;

	return Age;
}

bool CheckAge(int Age)
{
	return (Age >= 18 && Age <= 45);
}

void PrintResult(int Age)
{
	if (CheckAge(Age))
		cout << "\nValid Age\n";
	else
		cout << "\nInvalid Age\n";
}

int main()
{

	PrintResult(ReadAge());

	return 0;
}