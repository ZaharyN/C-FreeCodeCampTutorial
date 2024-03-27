#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    string city;

    cin >> name >> age >> city;

    cout << "My name is: " << name << ", I am " << age << " years old and I work and live in " << city;

    getline(cin, city);

    cout << "size of int: " << sizeof(int);
}


