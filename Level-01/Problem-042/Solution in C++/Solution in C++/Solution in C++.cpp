#include <iostream>
using namespace std;

struct strTaskDuration
{
	float Days, Hours, Minutes, Seconds;
};

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.Days = ReadPositiveNumber("Please enter the number of days: ");
	TaskDuration.Hours = ReadPositiveNumber("Please enter the number of hours: ");
	TaskDuration.Minutes = ReadPositiveNumber("Please enter the number of minutes: ");
	TaskDuration.Seconds = ReadPositiveNumber("Please enter the number of seconds: ");

	return TaskDuration;
}

float TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	float TotalSeconds = (TaskDuration.Days * 24 * 60 * 60) + (TaskDuration.Hours * 60 * 60) +
		(TaskDuration.Minutes * 60) + TaskDuration.Seconds;

	return TotalSeconds;
}

void PrintResult(float TotalSeconds)
{
	cout << "\nTask Duration In Seconds: " << TotalSeconds;
	cout << endl;
}

int main()
{
	
	PrintResult(TaskDurationInSeconds(ReadTaskDuration()));

	return 0;
}