def is_prime(number):
    if number < 2:
        return False

    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False

    return True

while True:
    number = int(input("Enter the number for prime number test (enter 0 to exit): "))
    
    if number == 0:
        break

    if is_prime(number):
        print(f"{number} is a prime number.")
    else:
        print(f"{number} is not a prime number.")
