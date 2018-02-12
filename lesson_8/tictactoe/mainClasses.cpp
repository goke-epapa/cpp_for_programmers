#include <iostream>

using namespace std;

class TicTacToe {
    char matrix[4][4];
    string names[2];
    public:
        TicTacToe();
        void setPlayerName(int playerNumber, string name);
        string getPlayerName(int playerNumber);
        void play(int player, int row, int column);
        void printInfo();
        bool checkWin(char player);
        int getNextPlayer(int player);
        char getSymbol(int player);
    ;
};

TicTacToe::TicTacToe() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matrix[i][j] = '-';
        }
    }
}

void TicTacToe::setPlayerName(int playerNumber, string name) {
    names[playerNumber - 1] = name;
}

string TicTacToe::getPlayerName(int playerNumber) {
    return names[playerNumber - 1];
}

void TicTacToe::play(int player, int row, int column) {
    char value;
    if(player == 1) {
        value = 'x';
    } else {
        value = 'o';
    }
    matrix[row - 1][column - 1] = value;
}

void TicTacToe::printInfo() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

bool TicTacToe::checkWin(char symbol) {
    // Check Row 
    int rowSum = 0;
    int columnSum = 0;
    int diagonalSum = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matrix[i][j] == symbol) {
                rowSum += 1;
            }
            if(i == j) {
                diagonalSum += 1;
            }
            if(matrix[i][0] == symbol) {
                columnSum += 1;
            }
        }
    }
    
    return rowSum == 4 || columnSum == 4 || diagonalSum == 4;
}

int TicTacToe::getNextPlayer(int player) {
    if(player == 1) {
        return 2;
    }
    return 1;
}

char TicTacToe::getSymbol(int player) {
    if(player == 1) {
        return 'x';
    }
    return 'o';
}
