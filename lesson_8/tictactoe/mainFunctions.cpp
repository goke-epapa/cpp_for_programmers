#include <cstdio>
using namespace std;

int startGame() {
    TicTacToe ticTacToe;
    int noOfPlays = 0;
    string playerName;
    int currentPlayer = 1;
    
    // Set Player Names
    for(int i = 1; i <= 2; i++) {
        cout << "Enter Name for Player" << i << "\n";
        cin >> playerName;
        ticTacToe.setPlayerName(i, playerName);
        cout << "Player " << i << "'s name is " << ticTacToe.getPlayerName(i) << "\n";
    }
    
    while(true) {
        noOfPlays++;
        cout << "Player " << currentPlayer << "'s turn to play\n";
        int row, column;
        scanf("%i", &row);
        scanf("%i", &column);
        ticTacToe.play(currentPlayer, row, column);
        ticTacToe.printInfo();
        
        // check game status
        if(noOfPlays >= 7) {
           if(ticTacToe.checkWin(1)) {
                cout << "'x' user won";
                break;
           } else if(ticTacToe.checkWin(2)) {
               cout << "'o' user won";
                break;
           }
        }
        
        if(noOfPlays >= 16) {
            cout << "Game was a tie";
            break;
        }
        currentPlayer = ticTacToe.getNextPlayer(currentPlayer);
    }
}
