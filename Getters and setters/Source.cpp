#include <iostream>

using namespace std;


class Book
{
private:
	string genre;

public:
	string title;
	string author;
	int pages;

	Book(string _title, string _author, int _pages, string _genre)
	{
		title = _title;
		author = _author;
		pages = _pages;
		setGenre(_genre);
	}

	void setGenre(string _genre)
	{
		if (_genre != "Comedy"
			&& _genre != "Sci-fi"
			&& _genre != "Horror"
			&& _genre != "Romance")
		{
			genre = "Unknown";
		}
		else
		{
			genre = _genre;
		}
	}

	string getGenre()
	{
		return genre;
	}
};

int main()
{
	Book testBook("Hunger games", "Suzanne Collins", 800, "Drama");

	cout << testBook.author << endl;
	cout << testBook.getGenre();
}