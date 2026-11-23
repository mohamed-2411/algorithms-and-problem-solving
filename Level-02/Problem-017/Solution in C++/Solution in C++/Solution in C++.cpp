#include <iostream>
using namespace std;

string ReadPassword(string Message)
{
	string Password = "";

	cout << Message << endl;
	cin >> Password;

	return Password;
}

bool GuessPassword(string Password)
{
	
	string word = "";
	int counter = 1;

	for (int i = 65; i <= 90; i++)
	{		
		for (int j = 65; j <= 90; j++)
		{		
			for (int k = 65; k <= 90; k++)
			{
				word += char(i);
				word += char(j);
				word += char(k);


				cout << "Tial [" << counter << "]: " << word << endl;
				
				if (word == Password)
				{
					cout << "Password is " << word << endl;
					cout << "Found after " << counter << " Trial(s).";
					return true;
				}
				counter++;
				word = "";
			}
		}
	}
	return false;
}

int main()
{

	GuessPassword(ReadPassword("Please etner a password: "));

	return 0;
}