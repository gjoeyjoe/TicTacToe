#pragma once
#include <iostream>
#include <vector>

using namespace std;
void greet();
void printBoard(vector<char> row1, vector<char> row2, vector<char> row3);
bool checkAnswerEligible(vector<char> row, int col);
bool checkWinCondition(vector<char> row1, vector<char> row2, vector<char> row3);