#include <iostream>
using namespace std;
// Prints Tic Tac Toe board.
char board[3][3]{ { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };
bool onewin = false;
bool twowin = false;
bool gameOver = false;
// Prompts player ones turn
void playerOneSelection();
//Prompts player twos turn
void playerTwoSelection();
// Checks for wins
void playerOneWins();
void gameBase() {
	
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " <<board[0][2]<<  "  |" << endl;
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |" << endl;

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;
		while (gameOver == false) {
			playerOneSelection();
			playerOneWins();
		}
		
		}

	
		
	

	


void playerOneSelection() {

	int player1selection;
	cout << "Player One its Your turn! Place an X on the map." << endl;
	cin >> player1selection;
	if (player1selection == 1) {
		board[0][0] = 'X';
	}
	else if (player1selection == 2) {
		board[0][1] = 'X';
	}
	else if (player1selection == 3) {
		board[0][2] = 'X';
	}
	else if (player1selection == 4) {
		board[1][0] = 'X';
	}
	else if (player1selection == 5) {
		board[1][1] = 'X';
	}
	else if (player1selection == 6) {
		board[1][2] = 'X';
	}
	else if (player1selection == 7) {
		board[2][0] = 'X';
	}
	else if (player1selection == 8) {
		board[2][1] = 'X';
	}
	else if (player1selection == 9) {
		board[2][2] = 'X';
	}
	else if (onewin = true) {
		gameOver = true;
	}
	

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |" << endl;

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;


	if (onewin == false) {
		playerTwoSelection();
	}
	}




void playerTwoSelection() {
	if (onewin == false) {
		int player2selection;
		cout << "Player Two its your turn! Place an O on the map!" << endl;
		cin >> player2selection;
		if (player2selection == 1) {
			board[0][0] = 'O';
		}
		else if (player2selection == 2) {
			board[0][1] = 'O';
		}
		else if (player2selection == 3) {
			board[0][2] = 'O';
		}
		else if (player2selection == 4) {
			board[1][0] = 'O';
		}
		else if (player2selection == 5) {
			board[1][1] = 'O';
		}
		else if (player2selection == 6) {
			board[1][2] = 'O';
		}
		else if (player2selection == 7) {
			board[2][0] = 'O';
		}
		else if (player2selection == 8) {
			board[2][1] = 'O';
		}
		else if (player2selection == 9) {
			board[2][2] = 'O';
		}
		else if (twowin == true) {
			gameOver = true;
		}
	}

	if (twowin == false) {

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |" << endl;

		cout << "+-----+-----+-----+" << endl;

		cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |" << endl;
		cout << "+-----+-----+-----+" << endl;

	}
}

void playerOneWins() {
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2]=='X') {
		
	}





}