#include <iostream>

using namespace std;

class Dog
{
    public:
        string breed;
        string name;
        int age;

    Dog(string _breed, string _name, int _age)
    {
        breed = _breed;
        name = _name;
        age = _age;
    }
    Dog()
    {
        breed = "street fabulousus";
        name = "Bau-Bau";
        age = 10;
    }
};



int main()
{
    Dog dogWithOwner("German shepfard", "Joro", 4);

    cout << dogWithOwner.breed << endl;
    cout << dogWithOwner.name << endl;
    cout << dogWithOwner.age << endl;

    Dog streetDog;

    cout << streetDog.breed << endl;
    cout << streetDog.name << endl;
    cout << streetDog.age;
}
