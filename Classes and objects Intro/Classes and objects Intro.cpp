#include <iostream>

using namespace std;

class Book 
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book firstBook;

    firstBook.title = "Dune";
    firstBook.author = "Frank Herbert";
    firstBook.pages = 560;

    cout << firstBook.author << endl;
    cout << firstBook.title << endl;
    cout << firstBook.pages << endl;

    Book secondBook;

    secondBook.title = "IT";
    secondBook.author = "Stephen King";
    secondBook.pages = 700;

    string secondBookName = secondBook.title;
    bool areEqual = secondBookName == secondBook.title;
    cout << areEqual << endl;

    cout << secondBook.author << endl;
    cout << secondBook.title << endl;
    cout << secondBook.pages << endl;
}

