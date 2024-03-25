#include <iostream>

using namespace std;

class Dog
{
public:
    string breed;
    string name;
    int age;
    double weight;

    Dog(string _breed, string _name, int _age, double _weight)
    {
        breed = _breed;
        name = _name;
        age = _age;
        weight = _weight;
    }
    Dog()
    {
        breed = "street fabulosus";
        name = "Bau-Bau";
        age = 10;
        weight = 20;
    }

    double eat() 
    {
        weight += 0.5;

        return weight;
    }

    void eatTheCouch()
    {
        if (breed != "street fabulosus") 
        {
            cout << "Your owner got mad at you and now you have to live on the streets :(" << endl;
            breed = "street fabulosus";
        }
        else
        {
            cout << "You don't have a couch to eat" << endl;
        }
    }
};


int main()
{
    Dog dogWithOwner("German shepfard", "Joro", 4, 32.7);

    dogWithOwner.eat();
    cout << dogWithOwner.weight << endl;

    dogWithOwner.eat();
    cout << dogWithOwner.weight << endl;

    cout << dogWithOwner.breed << endl;
    dogWithOwner.eatTheCouch();
    cout << dogWithOwner.breed << endl;

    Dog streetDog;
    streetDog.eatTheCouch();
}

