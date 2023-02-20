#include <iostream>
#include <vector>

using namespace std;
void greet() {
	void printBoard(vector<char> row1, vector<char> row2, vector<char> row3);
	cout << "Welcome to tic tac toe! Get 3 in a row!\n";
}

void printBoard(vector<char> row1, vector<char> row2, vector<char> row3) {
	cout << "\n";
	cout << row1[0] << "|" << row1[1] << "|" << row1[2] << "\n";
	cout << "-----\n";
	cout << row2[0] << "|" << row2[1] << "|" << row2[2] << "\n";
	cout << "-----\n";
	cout << row3[0] << "|" << row3[1] << "|" << row3[2] << "\n";
	cout << "\n";
}

bool checkAnswerEligible(vector<char> row, int col) {
	if (row[col-1] == ' ') {
		return true;
	}
	else {
		cout << "Already taken up. Fuck you and fuck your turn\n";
		return false;
	}
}

bool checkWinCondition(vector<char> row1, vector<char> row2, vector<char> row3) {

	if (row1[0] == row2[1] && row2[1] == row3[2] && row1[0] != ' ') {
		cout << "Yay, diagonal win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row1[2] == row2[1] && row2[1] == row3[0] && row1[2] != ' ') {
		cout << "Yay, diagonal win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row1[0] == row1[1] && row1[1] == row1[2] && row1[0] != ' ') {
		cout << "Yay, row1 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row2[0] == row2[1] && row2[1] == row2[2] && row2[0] != ' ') {
		cout << "Yay, row2 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row3[0] == row3[1] && row3[1] == row3[2] && row3[0] != ' ') {
		cout << "Yay, row3 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row1[0] == row2[0] && row2[0] == row3[0] && row1[0] != ' ') {
		cout << "Yay, col1 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row1[1] == row2[1] && row2[1] == row3[1] && row1[1] != ' ') {
		cout << "Yay, col2 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else if (row1[2] == row2[2] && row2[2] == row3[2] && row1[2] != ' ') {
		cout << "Yay, col3 win\n";
		printBoard(row1, row2, row3);
		return true;
	}
	else {
		return false;
	}

}