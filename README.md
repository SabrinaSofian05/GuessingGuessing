# GuessingGuessing Game
by Group 6 for Hackathon 2 Group Assignment

Contributors: 
1. Sabrina binti Sofian (164740) 
2. Wan Nurmaisarah binti Wan Muslim (164323) 
3. Aleeya Hayfa binti Osman (162974)

## Description
**What is this game about?**

GuessingGuessing game is a single-player guess word game that is an entertaining mental exercise that challenges players' word-solving skills. In this game, the player is given a concealed word that they must figure out by making a series of guesses. With the use of tips and hints, the player carefully chooses letters or words they think could be a component of the hidden word. With each guess, the player receives feedback that helps them narrow their options or get closer to the right response. Deciphering the term requires the player to use their language, reasoning, and intuition, all while enjoying the pleasure of solving the puzzle on their own.

## Features

## How to Play Game

In order to play this game. Please read this instructions carefully. 
1. Register your name first in order to play this game.
2. Begin the game by making your first guess. Guess a word that you believe could be part of the secret word. You will be given a hint in order to help you in making guesses.
3. You only have 5 attempts. If you guess the right word within the attempts, you win the game. Else, you lose.

_We hope you enjoy this game. Good luck!_

## Answers related to programming questions

### Q: How object-oriented concepts were used to develop your game

A: Object-oriented programming (OOP) is used to implement a GuessingGuessing game by organizing the code into classes and objects that represent different components for this game. Here's a basic example of how OOP can be applied to implement to our game:

1. Answer class: The Answer class represents a collection of words stored in a linked list. It encapsulates the data and functions related to managing the word list. The class contains private member variables (head and tail) that store the pointers to the first and last nodes of the linked list. It also has public member functions for adding words to the list and generating a random word.

2. GuessWord class: The GuessWord class represents the main game logic. It encapsulates the data and functions related to the game itself. The class contains private member variables (word, ansBlank, maxGuess, guessNum) that store the word to be guessed, the blank representation of the word, the maximum number of guesses allowed, and the current guess count. It has a constructor that initializes these variables, and a start function that begins the game.

### Q: How linked lists/stacks/queues play a role in your game

1. The answerInNode struct represents a node in the linked list. Each node stores a word (word) and maintains pointers to the next node (next) and the previous node (back).

2. The Answer class is used to manage the linked list. It has a head pointer (head) pointing to the first node in the list and a tail pointer (tail) pointing to the last node.

3. The addWord function adds a new word to the linked list. It creates a new answerInNode object with the given word (w) and inserts it into the list according to its length. If the list is empty (head == nullptr), the new node becomes the head and tail. Otherwise, it traverses the list until it finds a node with a longer word length or reaches the end of the list. The new node is then inserted before that node.

4. The generateRandomWord function randomly selects a word from the linked list. It first counts the number of nodes in the list by traversing it. Then, it generates a random number (randomWordLength) within the range of the node count. Starting from the head, it traverses the list randomWordLength times to reach the randomly selected node and returns its word.

5. The destructor (~Answer) is responsible for freeing the memory allocated for each node in the linked list. It starts from the head and iteratively deletes each node while moving to the next node using a temporary pointer (temp) to avoid losing the reference to the next node.

## Screenshot
Screenshot of Game

![Screenshot of Game.](https://github.com/SabrinaSofian05/GuessingGuessing/blob/main/Screenshot%20of%20Game.png?raw=true)

## Demonstration Game

Demo 1 : 

https://github.com/SabrinaSofian05/GuessingGuessing/assets/121542712/cb4d9c49-a6ca-4ba3-8a9c-30ed5c743c73

Demo 2 :

https://github.com/SabrinaSofian05/GuessingGuessing/assets/121542712/04c750d0-07e3-4353-b115-ad52d183611e




