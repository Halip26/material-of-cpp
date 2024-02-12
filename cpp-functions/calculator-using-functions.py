def addition(num1, num2):
    return num1 + num2


def subtraction(num1, num2):
    return num1 - num2


def multiplication(num1, num2):
    return num1 * num2


def division(num1, num2):
    return num1 / num2


print("\n-- Welcome to calculator --")

while True:

    print("-" * 40)
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    print("Press 1 for addition")
    print("Press 2 for subtraction")
    print("Press 3 for multiplication")
    print("Press 4 for division")
    print("Press 5 for quit")
    print("-" * 40)
    user_choice = int(input("Enter your choice: "))
    if user_choice == 1:
        result = addition(a, b)
        print(f"Sum of {a} + {b} = {result}")
    elif user_choice == 2:
        result = subtraction(a, b)
        print(f"Subtraction {a} - {b} = {result}")
    elif user_choice == 3:
        result = multiplication(a, b)
        print(f"Multiplication {a} x {b} = {result}")
    elif user_choice == 4:
        result = division(a, b)
        print(f"Division {a} / {b} = {result}")
    elif user_choice == 5:
        print("You have exited the calculator, Bye!")
        break
    else:
        print("Invalid input, try again!")
