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

  def turn(board, turns, available_spaces):
    combinations = {"row 1": [1,2,3], "row 2": [4,5,6], "row 3": [7,8,9], "col 1": [1,4,7], "col 2": [2,5,8], "col 3": [3,6,9], "diag 1": [1,5,9], "diag 2": [3,5,7]}
    while True:
      if turns % 2 == 0:
        char = "X"
        spot = int(input("Where do you want to place?\n"))
      else:
        char = "O"
        spot = random.randint(1,9)
        print(f"Computer chose spot {spot}")
      if spot in available_spaces:
        break
      else:
        print("Oppsss ,try again!")
    if spot == 1:
      board[0] = char
    if spot == 2:
      board[1] = char
    if spot == 3:
      board[2] = char
    if spot == 4:
      board[3] = char
    if spot == 5:
      board[4] = char
    if spot == 6:
      board[5] = char
    if spot == 7:
      board[6] = char
    if spot == 8:
      board[7] = char
    if spot == 9:
      board[8] = char
    available_spaces.remove(spot)
    return char
  board = [" "] * 9
  available_spaces = [1,2,3,4,5,6,7,8,9]
  turns = 0
  print("welcome to tictactoe")
  print("Your X and the computer is O, try to beat the computer and have fun")
  print_board(board)
  while True:
    current_player = turn(board, turns, available_spaces)
    turns += 1
    print_board(board)
    winner = won(board)
    if winner:
      if winner == "X":
        print("you won")
        again = input("Would you like to play again?(yes/no)\n)").strip().lower()
        if again == "yes":
          main()
          break
        else:
          return "Thanks for playing tictactoe"
      else:
        print("computer won womp womp")
    if available_spaces == 0:
      print("it's a tie womp womp")
      again = input("Would you like to play again?(yes/no)\n)").strip().lower()
      if again == "yes":
        main()
      else:
        return "Thanks for playing tictactoe"
