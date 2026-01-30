#YV Period 3 Time of Day

time = int(input("Whats the time in millitary time! "))

if time < 12:
    print("Good morning sunshine!")
elif time >= 12 and time < 21:
    print("Good Afternoon sailor moon! ")
elif time < 24 and time > 21:
    print("Goodnight and don't let the bed bugs bite!")
elif time == 24:
    print("Goodnight and don't let the bed bugs bite!")
elif time > 24:
    print("Okay bro be serious, pick a real time 😂")
