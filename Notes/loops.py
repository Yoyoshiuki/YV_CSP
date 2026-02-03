import random
start = 0
while start <= 10:
    print(start)
    start += 2

import random

count = 1
goose = random.randint(1,10)

while count != goose:
    print("Duck!")
    count += 1


print("Goose!")

""number = random.randint(1,25)""

"""while True:
    guess = int(input("guess a number 1-25: "))
    if guess == number:
        print(f"Whoa! You won! The number was {number} congrats!")
        break #Break takes us out of the loop
    elif guess > 25:
        print("You are eliminated, that was NOT an option")
    elif guess < number:
        print("Guess higher dont be shy!")
    else:
        print("Okay bro your number is WAY too high, you're so greedy")"""