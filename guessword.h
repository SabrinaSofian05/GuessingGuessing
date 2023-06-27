// header file, guessword.h

#ifndef GUESSWORD_H
#define GUESSWORD_H
#include <string>
using namespace std;

class GuessWord{
	private:
		string word;
		string ansBlank;
		int maxGuess;
		int guessNum;

	public:
		GuessWord(string w, int mG);
		void start(string n);
};
#endif
