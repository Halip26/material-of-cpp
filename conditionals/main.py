import time

username = "halip26"
password = "belajarpython"

print("Welcome to the login page")
while True:
    time.sleep(1)
    username_input = str(input("Enter your username: "))
    time.sleep(1)
    password_input = str(input("Enter your password: "))
    time.sleep(1)
    confirm_password = str(input("Confirm your password: "))

    print("-" * 35)
    print("Checking your credentials...")
    time.sleep(1)
    print("Please wait...")
    time.sleep(1)

    # this one for success login
    if (
        username_input == username
        and password_input == password
        and confirm_password == password
    ):
        print("\nLogin successful")
        print(f"Welcome,  {username_input}!")
        break
    # wrong username
    elif (
        (username_input != username)
        and (password_input == password)
        and (password_input == confirm_password)
    ):
        time.sleep(1)
        print("\nUsername is incorrect")
        print("Please try again")
    # wrong password
    elif (
        (username_input == username)
        and (password_input != password)
        and (password_input == confirm_password)
    ):
        time.sleep(1)
        print("\nPassword is incorrect")
        print("Please try again")
    # wrong confirm password
    elif (
        (username_input == username)
        and (password_input == password)
        and (password_input != confirm_password)
    ):
        time.sleep(1)
        print("\nConfirm password is incorrect")
        print("Please try again")
    else:
        time.sleep(1)
        print("\nSomething is wrong")
        print("Please try again")
