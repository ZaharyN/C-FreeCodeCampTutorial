#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string DayOfWeek(int number) {
	string day;

	switch (number) 
	{
	case 0:
		day = "Sunday";
		break;
	case 1:
		day = "Monday";
		break;
	case 2:
		day = "Tuesday";
		break;
	case 3:
		day = "Wednesday";
		break;
	case 4:
		day = "Thursday";
		break;
	case 5:
		day = "Friday";
		break;
	case 6:
		day = "Saturday";
	default:
		day = "Invalid day number!";
	}

	return day;
}

int main()
{
	int day;
	cout << "Enter the day here: ";
	cin >> day;

	cout << DayOfWeek(day);

	return 0;
}
