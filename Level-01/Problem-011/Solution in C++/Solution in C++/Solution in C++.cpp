#include <iostream>
using namespace std;

struct stMarks
{
	float Mark1, Mark2, Mark3;
};

stMarks ReadMarks()
{
	stMarks Marks;

	cout << "Please enter mark1: \n";
	cin >> Marks.Mark1;

	cout << "Please enter mark2: \n";
	cin >> Marks.Mark2;

	cout << "Please enter mark3: \n";
	cin >> Marks.Mark3;

	return Marks;
}

float CalculateAverage(stMarks Marks)
{
	float Average = (Marks.Mark1 + Marks.Mark2 + Marks.Mark3) / 3;
	return Average;
}

bool CheckAverage(float Average)
{
	return (Average >= 50);
}

void PrintAverage(float Average)
{
	cout << endl << "The average of entered marks is: " << Average << endl;

	if (CheckAverage(Average))
	{
		cout << "PASS\n";
	}
	else
	{
		cout << "Fail\n";
	}


		
}

int main()
{

	PrintAverage(CalculateAverage(ReadMarks()));

	return 0;
}