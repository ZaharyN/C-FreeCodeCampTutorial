#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N = 100;
    // This program will create some sequence of random 
    // numbers on every program run within range 0 to N-1 
    for (int i = 0; i < 5; i++)
        cout << rand() % N << " ";

    return 0;
}