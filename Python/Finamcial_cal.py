income = float(input("What's your monthly income twin: "))
rm = float(input("That's cool, thats cool. What's your rent or mortage cuh?  "))
ut = float(input("How much you spend on your utilities broski? "))
gr = float(input("How much is yours grocieries bruh? "))
tr = float(input("How much is yo transportation cost brotha? "))

rmt = round((rm / income*100) ,2)
grt = round((gr / income *100), 2)
trt = round((tr / income *100), 2)
sv = round((0.10 * income), 2)
utt = round((ut / income *100), 2) 
t = round((rm + ut + gr + tr + sv), 2)
tt = round(( income - t ), 2)


print("Your rent is $", rm,  "and that is ",  rmt,"% of your income")

print("Your utillities cost is $", ut,  "and that is ",  utt,"% of your income")

print("Your grocieries are $", gr,  "and that is ",  grt,"% of your income")

print("Your transportation cost is $", tr,  "and that is ",  trt,"% of your income")

print("You should save $", sv,  "and that is 10% of your income")

print("You have $", tt, "of spending money each month!")