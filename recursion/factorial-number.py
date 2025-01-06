def faktorial(n):
    if n <= 1:
        return 1
    else:
        return n * faktorial(n - 1)

while True:
    # Untuk pengguna menginput angkanya
    user_input = int(input("\nEnter the number: "))

    print("-" * 40)

    cek_factorial = faktorial(user_input)
    if user_input <= 1:
        print("Invalid input!\nYou've exited the program")
        break
    else:
        print(f"Faktorial dari {user_input} adalah: {cek_factorial}")
