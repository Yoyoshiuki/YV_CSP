ages = [22,23,25,28,34,36,38,39]
names = ["Alex", "Kaite", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]
names = print([4])
print(len(ages))
names[0] = "Jordan"
names.append("Yossel") #adds to the end of the list
index = names.index("Vienna")
names.pop(index) #removes item from list, if no index is givin the last item is removed.
print(names)


for name in names:
    print(f" Hello {name}!")
for number in ages:
    print(number**2)
for i in range(0):
    print(f"it is the {I} of this loop!")