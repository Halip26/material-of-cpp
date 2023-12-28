import time

username = "halip26"
password = "halip123456"
print(" ")
username_input = str(input("Enter your username:"))
password_input = str(input("Enter your password:"))
confirm_password = str(input("Enter your password again:"))

print("-" * 40)
if (
    username == username_input
    and password == password_input
    and confirm_password == password_input
):
    time.sleep(1)
    print("Hii, Welcome to your account", username)
elif (
    username != username_input
    and password == password_input
    and confirm_password == password_input
):
    time.sleep(1)
    print("Wrong username, Try again!")
elif (
    username == username_input
    and password != password_input
    and confirm_password == password_input
):
    time.sleep(1)
    print("Wrong password, Try again!")
elif password_input != confirm_password:
    time.sleep(1)
    print("Confirm password doesn't match, Try again!")
else:
    time.sleep(1)
    print(
        "Username:",
        username_input,
        "&",
        "Password:",
        password_input,
        "Are not exists, Try again!",
    )
