#include <iostream>

using namespace std;

int main()
{
    int age = 7;
    int* pAge = &age;

    double years = 25;
    double *pYears = &years;

    string name = "Zahary";
    string *pName = &name;
   
    cout << pAge << endl;

    cout << *pAge << endl;

    cout << &age << endl;

    cout << pYears << endl;
   
    return 0;
}
