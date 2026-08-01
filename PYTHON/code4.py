# Take price of 3 products as input

price1 = float(input("Enter price of product 1: "))
price2 = float(input("Enter price of product 2: "))
price3 = float(input("Enter price of product 3: "))

# Total Bill
total_bill = price1 + price2 + price3
print("Total Bill Amount =", total_bill)

# Average Price
average_price = total_bill / 3
print("Average Price =", average_price)

# Take superhero name as input
hero = input("Enter superhero name: ")

# Check if name starts with S or s
if hero.startswith("S") or hero.startswith("s"):
    print("Starts with S")
else:
    print("Does not start with S")
    