number = int(input("Choose a number broski! "))

if abs(number) < 10:
    print(f"The number {number} is a 1 digit number")
elif abs(number) < 100:
    print(f"The number {number} is a 2 digit number")
else:
    print(f"Bro be serious, your number {number} is way too big")

