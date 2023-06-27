#include "guessword.h"
#include <iostream>

GuessWord::GuessWord(string w, int mG){
	word = w;
	maxGuess = mG;
	guessNum = 0;
	ansBlank = "";

	for (int i=0; i<word.length(); ++i){
		ansBlank += "_ ";
	}
}

void GuessWord::start(string n){
	cout << "\nHi " << n << " !" << endl;
	cout << "Welcome to Guess The Word Game !\n\n";
	cout << "HINT: FASHION BRANDS" << endl;
	cout << "If you enter the wrong word, your remaining guesses will be deducted.\n\n";
	cout << "Good luck! Hope you enjoy.\n\n";

	string prevInput;
	while(guessNum < maxGuess){
		cout << "Guess this word: " << ansBlank << endl;
		cout << "Your guess ?: ";
		string guess;
		cin >> guess;

		if (guess==prevInput){
			cout << "You just guessed that word. Try to guess another answer.\n";
			continue;
		}

		bool matching = false;
		for (int i = 0; i<word.length(); i++){
			if(word == guess){
				matching = true;
			}
		}
		if(!matching){
			guessNum++;
			cout << "Incorrect guess! Remaining guess: " << maxGuess - guessNum << endl;
			prevInput = guess;
		}
		if( guess == word){
			cout << "\nCongratulations! You guesses the correct word: " << word << endl;
			break;
		}
	}
	if (guessNum==maxGuess){
		cout << "\nSorry. Game over! You ran out of guesses." << endl;
		cout << "The answer was: " << word << endl;
	}
}
