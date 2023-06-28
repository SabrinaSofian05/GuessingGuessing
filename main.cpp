#include "answer.h"
#include "guessword.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>


void howToPlay();

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    string name;
    howToPlay();
    cout << "Before we start, what is your name ? ";
    getline(cin,name);

    Answer ans;
    ans.addWord("gucci");
    ans.addWord("chanel");
    ans.addWord("polo");
    ans.addWord("hermes");
    ans.addWord("uniqlo");
    ans.addWord("dior");
    ans.addWord("nike");

    string wordToGuess;
    wordToGuess = ans.generateRandomWord();

    GuessWord playerGuess(wordToGuess, 6);

    playerGuess.start(name);

    return 0;
}

void howToPlay(){
	ifstream inFile;  //variable
	inFile.open("howtoplay.txt"); //open file from howtoplay.txt


	if(inFile.fail())  // inFile is open()
	{
		cout << "No such file";
	}

	else {
		while (!inFile.eof()){

			string data;

			getline(inFile, data);

			cout <<  data << endl; //output each line in txt file
		}
	}
	inFile.close();
}
