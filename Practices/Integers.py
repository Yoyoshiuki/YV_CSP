price = float(input("what is the coast of the item: "))

Tax_rate = float(input("what is the tax percent: "))

Taxrate_deciamal = Tax_rate/100

total = price*(1 + Taxrate_deciamal)

roundedtotal = round(total, 2)

print(roundedtotal)

Apples = 27

friends = 4

"""print("each of my friends can have", Apples//friends, "and will have ", 
      Apples%friends, "left over")"""