// TicTacToe/Programming Project CM & YV
#include <stdio.h> // - Yossel
#include <stdlib.h> // - Yossel
#include <time.h>// - Yossel

void Tic_Board(char board[3][3]) { // Function to display the tic-tac-toe board- consti
    printf("  0   1   2\n");
    printf("0 %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---+---+---\n");
    printf("1 %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---+---+---\n");
    printf("2 %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}


int win(char board[3][3], char player) { // Function to check if a player has won- consti
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

void Ai_moves(char board[3][3]) { // Function for the computer to make a move - yossel
    int row, col;
    int empty_spots[9][2];
    int count = 0;

    for (int idk = 0; idk < 3; idk++) { // Find all empty spots on the board - Yossel
        for (int idc = 0; idc < 3; idc++) {
            if (board[idk][idc] == ' ') {
                empty_spots[count][0] = idk;
                empty_spots[count][1] = idc;
                count++;
            }
        }
    }

    if (count > 0) { // If there are empty spots, it chooses one randomly
        int choice = rand() % count;
        row = empty_spots[choice][0];
        col = empty_spots[choice][1];
        board[row][col] = 'O';
        printf("Computer chose spot [%d %d]\n", row, col);
    }
}

int main() {
    srand(time(NULL));

    char board[3][3] = { // start the tic-tac-toe board with empty spaces -both 
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char player = 'X';
    int row, col;

    for (int turn = 0; turn < 9; turn++) { // Main game loop for a max of 9 turns - Both
        Tic_Board(board);

        if (player == 'X') { // Player's turn
            printf("Player %c, enter your move (Row [space] Column ): ", player);
            scanf("%d %d", &row, &col);
            if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
                printf("Invalid move. Try again.\n");
                turn--;
                continue;
            }
            board[row][col] = player;
        } else {
         
            Ai_moves(board);
        }

        if (win(board, player)) { // Check if the current player has won - consti
            Tic_Board(board);
            if (player == 'X') {
                printf("Player %c wins!\n", player);
            } else {
                printf("Computer wins!\n");
            }
            return 0;
        }

     
         player = (player == 'X') ? 'O' : 'X'; // Switch player for the next turn - Yossel
    }

    Tic_Board(board); // If all turns are used and no one won it prints a tie - both
    printf("It's a tie!\n");
    return 0;
}