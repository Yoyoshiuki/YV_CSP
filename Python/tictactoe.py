import random

def won(board):
    combinations = [[0,1,2], [3,4,5], [6,7,8], [0,3,6], [1,4,7], [2,5,8], [0,4,8], [2,4,6]]
    for combo in combinations:
      if board[combo[0]] == board[combo[1]] == board[combo[2]] and board[combo[0]] != " ":
        return board[combo[0]]
    return None
def print_board(board):
    print(f" {board[0]} | {board[1]} | {board[2]} ")
    print("---+---+---")
    print(f" {board[3]} | {board[4]} | {board[5]} ")
    print("---+---+---")
    print(f" {board[6]} | {board[7]} | {board[8]} ")
def player_turns(board, turns, space_available):
    combinations = {"row 1": [1,2,3], "row 2": [4,5,6], "row 3": [7,8,9], "col 1": [1,4,7], "col 2": [2,5,8], "col 3": [3,6,9], "diag 1": [1,5,9], "diag 2": [3,5,7]}
    while True:
      if player_turns % 2 == 0:
        symbol = "X"
        location = int(input("Where do you want to place?\n"))
      else:
        symbol = "O"
        location = random.randint(1,9)
        print(f"Computer chose spot {location}")
      if location in space_available:
        break
        