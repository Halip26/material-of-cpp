def addition(num1, num2):
    return num1 + num2


def subtraction(num1, num2):
    return num1 - num2


def multiplication(num1, num2):
    return num1 * num2


def division(num1, num2):
    return num1 / num2


def floor_division(num1, num2):
    return num1 // num2


def modulus(num1, num2):
    return num1 % num2


def exponent(num1, num2):
    return num1**num2


print("\n-- Welcome to calculator --")

while True:

    print("-" * 40)
    first_number = int(input("Enter the first number: "))
    second_number = int(input("Enter the second number: "))
    print("Press 1 for addition")
    print("Press 2 for subtraction")
    print("Press 3 for multiplication")
    print("Press 4 for division")
    print("Press 5 for floor division")
    print("Press 6 for modulus")
    print("Press 7 for exponent")
    print("Press 0 for quit")
    print("-" * 40)

    user_choice = int(input("Enter your choice: "))
    if user_choice == 1:
        result = addition(first_number, second_number)
        print(f"Sum of {first_number} + {second_number} = {result}")
    elif user_choice == 2:
        result = subtraction(first_number, second_number)
        print(f"Subtraction {first_number} - {second_number} = {result}")
    elif user_choice == 3:
        result = multiplication(first_number, second_number)
        print(f"Multiplication {first_number} x {second_number} = {result}")
    elif user_choice == 4:
        if second_number == 0:
            print("0 is not allowed for division, try again!")
        else:
            result = division(first_number, second_number)
            print(f"Division {first_number} / {second_number} = {result}")
    elif user_choice == 5:
        if second_number == 0:
            print("0 is not allowed for floor division, try again!")
        else:
            result = floor_division(first_number, second_number)
            print(f"Floor Division {first_number} // {second_number} = {result}")
    elif user_choice == 6:
        result = modulus(first_number, second_number)
        print(f"Modulus {first_number} % {second_number} = {result}")
    elif user_choice == 7:
        result = exponent(first_number, second_number)
        print(f"Exponent {first_number} ** {second_number} = {result}")
    elif user_choice == 0:
        print("You have exited the calculator, Bye!")
        break
    else:
        print("Invalid input, try again!")
