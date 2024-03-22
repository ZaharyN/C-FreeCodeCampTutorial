#include <iostream>

using namespace std;

int main()
{
	const int arrayLength = 10;

	int array[arrayLength] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 1; i <= arrayLength; i++)
	{
		cout << "Number " << i << " is " << array[i - 1] << endl;
	}
}


