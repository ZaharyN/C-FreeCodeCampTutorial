#include <iostream>

using namespace std;

int power(int number, int power)
{
    int result = 1;

	for (int i = 0; i < power; i++)
	{
		result *= number;
	}

	return result;
}


int main()
{
	int number;
	int powerNumber;

	cout << "Enter number here: ";
	cin >> number;

	cout << "Enter power here: ";
	cin >> powerNumber;

	cout << "The result: ";
	cout << power(number, powerNumber);
}
