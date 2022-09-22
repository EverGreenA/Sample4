#include <cstdlib>
#include <iostream>

int getWinner() {
	if (isWin(X)) return X;
	else if (isWin(O)) return O;
	else return EMPTY;
}

void printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (board[i][j]) {
			case X: cout << "X"; break;
			case O: cout << "O"; break;
			case EMPTY: cout << " "; break;
			}
			if(j < 2) cout << "l"
		}
		if (i < 2) cout << "|n-+-+-|n";
	}
}