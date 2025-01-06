print("=== Loan Eligibility Check ===")
print("-" * 25)

credit_score = int(input("Enter credit score: "))
stable_income = input("Do you have a stable income? (yes/no): ").lower() == "yes"
co_signer_credit = (
    input("Does the co-signer have excellent credit? (yes/no): ").lower() == "yes"
)

if credit_score > 750:
    print("Eligible for the loan.")
elif credit_score >= 650:
    if stable_income:
        print("Eligible for the loan.")
    else:
        print("Not eligible for the loan.")
else:
    if co_signer_credit:
        print("May be eligible for the loan.")
    else:
        print("Not eligible for the loan.")
