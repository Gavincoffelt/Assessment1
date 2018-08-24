#include <iostream>
using namespace std;
// Prints Tic Tac Toe board.
void printboard() {
	char board[3][3]{ {'a', 'a', 'a'}, {'a', 'a', 'a'}, {'a', 'a', 'a'} };
	{
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " <<board[0][2]<<  "  |" << endl;
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[2][2] << "  |" << endl;

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[2][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;
	};
}







