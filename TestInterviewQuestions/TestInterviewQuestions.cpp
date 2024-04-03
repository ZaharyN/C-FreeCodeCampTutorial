#include <iostream>

using namespace std;

void duplicate(int a, int b, int c) {
	a *= 2;
	b *= 2;
	c *= 2;
}

int main(int argc, char** argv)
{

	int x = 2;
	int y = 4;
	int z = 5;

	duplicate(x, y, z);

	cout << x << y << z;

	return 0;
}


