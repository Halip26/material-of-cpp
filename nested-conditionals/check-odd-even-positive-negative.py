print("Check positive/negative even & positive/negative odd integer")
print("-" * 40)
while True:
    number = int(input("Enter an integer: "))

    if (number > 0) and ((number % 2) == 0):
        print("the number ", number, "is even positive")
    elif (number > 0) and ((number % 2) >= 1):
        print("the number ", number, "is odd positive")
    elif (number < 0) and ((number % 2) == 0):
        print("the number ", number, "is even negative")
    elif (number < 0) and ((number % 2) >= -1):
        print("the number ", number, "is odd negative")
    else:
        print("Program is stop, you entered 0!")
        break
