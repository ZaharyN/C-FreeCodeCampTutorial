#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int numberToGuess = 6;
	int myNumber = 0;
	int guessesLeft = 3;
	bool noMoreGuesses = false;

	while (numberToGuess != myNumber && !noMoreGuesses) 
	{
		if (guessesLeft == 0)
		{
			noMoreGuesses = true;
			continue;
		}
		cout << "Enter your guess: ";
		cin >> myNumber;

		guessesLeft--;
	}
	if (noMoreGuesses) {
		cout << "You lost!";
	}
	else {
		cout << "You guessed right!";
	}

	
}
