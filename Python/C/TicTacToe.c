
#include <stdio.h>

void printBoard(char board[3][3]) {
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }
    return 0;
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char player = 'X';
    int row, col;

    for (int turn = 0; turn < 9; turn++) {
        printBoard(board);
        printf("Player %c, enter your move (colum and row): ", player);
        scanf("%d %d", &row, &col);

        if (board[row][col] == ' ') {
            board[row][col] = player;
            if (checkWin(board, player)) {
                printBoard(board);
                printf("Player %c wins!\n", player);
                return 0;
            }
            player = (player == 'X') ? 'O' : 'X';
        } else {
            printf("Invalid move. Try again.\n");
            turn--;
        }
    }
    printBoard(board);
    printf("It's a draw!\n");


    return 0;
}