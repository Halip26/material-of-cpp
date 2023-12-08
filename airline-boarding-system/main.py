name = str(input("Enter your name: "))
age = float(input("Enter your name: "))

print(
    "\nWelcome ",
    name,
    ", to Corona Checking Centre,\nIt is mandatory to get checked for corona symptoms before you board the flight!",
)
print("Enter the following details with full honesty to generate your report")
print("Instructions for users: Enter (0) for NO and (1) for YES")
print("-" * 60)

fever = bool(
    int(
        input(
            "\n1. Have you been feeling feverish since past few days? (0 for No, 1 for Yes): "
        )
    )
)

loss_of_taste = bool(
    int(
        input(
            "\n2. Have you been feeling loss of taste since past few days? (0 for No, 1 for Yes): "
        )
    )
)

loss_of_smell = bool(
    int(
        input(
            "\n3. Have you been feeling loss of smell since past few days? (0 for No, 1 for Yes): "
        )
    )
)

cough = bool(
    int(
        input(
            "\n4. Are you having cough problem since past few days? (0 for No, 1 for Yes): "
        )
    )
)

tiredness = bool(
    int(input("\n5. Have you been tired since past few days? (0 for No, 1 for Yes): "))
)

isPositive = fever and (loss_of_taste or loss_of_smell) and cough and tiredness

if isPositive:
    print("\n", name, ", you seem to be corona positive based on your symptoms.")
    print("We cannot board you on the flight. Sorry for the inconvenience!")

else:
    print(
        f"\nAre you diagnosed with COVID-19? (0 for No, 1 for Yes): {'Yes' if isPositive else 'No'}\n"
    )

    tickets = bool(
        int(
            input(
                "Answer with No (0) or Yes (1)\nDo you have valid tickets? (0 for No, 1 for Yes): "
            )
        )
    )
    luggage = bool(
        int(input("Do you want your luggage checked in? (0 for No, 1 for Yes): "))
    )

    canBoard = luggage or not isPositive

    if not canBoard:
        print("\nBoarding process incomplete!")
    else:
        print(f"\nBoarding process completed successfully. Have a safe trip! {name}")
