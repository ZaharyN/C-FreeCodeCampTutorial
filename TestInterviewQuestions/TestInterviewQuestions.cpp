#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 5;
    int j = ++i;

    cout << "i has value: " <<i << endl;
    cout << "j has value: " << j << endl;

    j = i;

    cout << "j has value: " << j << endl;
}


