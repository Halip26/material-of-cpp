num = int(input("Enter the number to print table: "))
i = 1

while i <= 10:
    print(i, "x", num, "=", num * i)
    i += 1

"""
# multiplication table using for
number = int(input("Enter the number: "))

print(f"\nMultiplication Table for {number}:\n")
for i in range(1, 11):
    print(f"{i} x {number}  = {number * i}")
    i += 1
"""