from datetime import date

while True:
    name = str(input("Enter your name: "))

    if name == "0":
        print("You've exited the program")
        break

    def get_birth_date():
        day = int(input("Enter the day of your birth: "))
        month = int(input("Enter the month of your birth: "))
        year = int(input("Enter the year of your birth: "))

        return date(year, month, day)

    def calculate_days(birth_date):
        today = date.today()
        days_passed = (today - birth_date).days
        return days_passed

    def format_date(date_obj):
        return date_obj.strftime("%d %B %Y")

    # Print the result
    birth_date = get_birth_date()
    formatted_birth_date = format_date(birth_date)
    days_passed = calculate_days(birth_date)
    print("-" * 50)
    print(
        f"Kamu lahir pada '{formatted_birth_date}' & telah hidup selama {days_passed} hari, {name}!"
    )
