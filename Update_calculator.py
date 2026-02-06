# YV period 3 Update Financial Calculator

def monthly(cost, per, name):
   print(f"You're spending ${cost} on {name} which is {per}% of your income!")

def ask(name):
   return float(input(f"how much are you spending on {name}? "))

income = float(input("How much is your income cuh? "))
rm = ask("rent")
ut = ask("utillities")
gr = ask("grocieries")
tr = ask("transportation")


def cal(number, income):
   return round((number / income*100), 2)

sv = round((0.10 * income), 2)
t = round((rm + ut + gr + tr + sv), 2)
tt = round(( income - t ), 2)



monthly(rm, cal(rm, income), "rent")
monthly(ut, cal(ut, income), "utiliities")
monthly(gr, cal(gr, income), "grocieries")
monthly(tr, cal(tr, income), "transportation")
print(f"You should save {sv} since that's 10% of your income!")
print(f"You have ${tt} of spending money!")
