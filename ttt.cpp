#include <iostream>
#include "fns.h"

using namespace std;

int main() {


	//Declarations
	vector<char> row1 = { ' ',' ', ' ' }, row2 = row1, row3 = row1;
	bool player1Turn = true;
	bool threeInARow = false;
	char player1Letter = 'x';
	char player2Letter = 'o';
	char activeLetter = 'x';
	int answerRow;
	int answerCol;


	//Start the game
	greet(); 

	while (threeInARow == false) { //Only do game logic if game is not solved.
		printBoard(row1, row2, row3);

		//Check whose turn it is and assign the active letter
		if (player1Turn == true) {
			activeLetter = 'x';
		}
		else {
			activeLetter = 'o';
		}

		//Get the current player's answer
		cout << "Current letter to be placed: " << activeLetter << "\n";
		cout << "\nWhich row would you like to play?: ";
		cin >> answerRow;
		cout << "\nWhich column would you like to play?: ";
		cin >> answerCol;

		//Check its an eligible spot to place a letter
		switch (answerRow) {
		case 1:
			if (checkAnswerEligible(row1, answerCol)) {
				row1[answerCol-1] = activeLetter;
			}
			break;
		case 2:
			if (checkAnswerEligible(row2, answerCol)) {
				row2[answerCol-1] = activeLetter;
			}
			break;
		case 3:
			if (checkAnswerEligible(row3, answerCol)) {
				row3[answerCol-1] = activeLetter;
			}
			break;
		default:
			break;
		}

		threeInARow = checkWinCondition(row1, row2, row3);

		if (threeInARow) {
			if (player1Turn == true) {
				cout << "The winner is: Player 1";
			}
			else {
				cout << "The winner is: Player 2";
			}


		}
		//Swap turns
		player1Turn = !player1Turn;
	}


}