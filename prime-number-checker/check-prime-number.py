while True:
    number = int(input("Enter the number for prime number test (0 to exit): "))
    if number == 0:
        print("You exit th program!")
        break
    elif number >= 2:
        for i in range(int(number / 2)):
            i = i + 2
            if number % 2 == 0:
                print(number, "is divisible by", i)
                print("No, it's not a prime number")
                break
        else:
            print(number, "is divisible just by 1 & itself ", i)
            print("Yes, it's a prime number")
    else:
        print("Incorrect input, try again!")
