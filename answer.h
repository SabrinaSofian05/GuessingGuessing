// header file answer.h

#ifndef ANSWER_H
#define ANSWER_H

#include <string>
using namespace std;

class Answer{
	private:
		struct answerInNode{
			string word;
			answerInNode *next;
			answerInNode *back;

			answerInNode(string w);
		};
		answerInNode *head;
		answerInNode *tail;

	public:
		Answer();
		~Answer();
		void addWord(string w);
		string generateRandomWord();

};
#endif
