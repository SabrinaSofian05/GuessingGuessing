#include "answer.h"
#include <cstdlib>
#include <ctime>

Answer::answerInNode::answerInNode(string w){
	word = w;
	next = nullptr;
	back = nullptr;
}

Answer::Answer(){
	head = nullptr;
	tail = nullptr;
}

Answer::~Answer(){
	answerInNode *nodePtr = head;
	while(nodePtr != nullptr){
		answerInNode *temp = nodePtr;
		nodePtr = nodePtr->next;
		delete temp;
	}
}

void Answer::addWord(string w){
	answerInNode *newNode = new answerInNode(w);
	answerInNode *nodePtr;

	if (head == nullptr){
		head = newNode;
		tail = newNode;
	}
	else {
		nodePtr = head;
		while (nodePtr != nullptr && w.length() <= 6){
			nodePtr = nodePtr->next;
		}
		if(nodePtr == nullptr){
			newNode->back = tail;
			tail->next = newNode;
			tail = newNode;
		}
		else{
			nodePtr->back->next = newNode;
			newNode->back = nodePtr->back;
			nodePtr->back = newNode;
			newNode->next = nodePtr;
		}
	}
}

string Answer::generateRandomWord(){
	if(head == nullptr){
		return "";
	}

	int count = 0;
	answerInNode *nodePtr = head;
	while (nodePtr != nullptr){
		count++;
		nodePtr = nodePtr->next;
	}

	int randomWordLength = rand()%count;
	nodePtr = head;

	for(int i=0; i<randomWordLength; i++){
		nodePtr = nodePtr->next;
	}

	return nodePtr->word;
}
