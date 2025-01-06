#include <iostream>
using namespace std;

int main()
{
    cout << "=== Loan Eligibility Check ===" << endl;
    cout << string(25, '-') << endl;

    int credit_score;
    cout << "Enter credit score: ";
    cin >> credit_score;

    string stable_income_input;
    cout << "Do you have a stable income? (yes/no): ";
    cin >> stable_income_input;
    bool stable_income = (stable_income_input == "yes");

    string co_signer_credit_input;
    cout << "Does the co-signer have excellent credit? (yes/no): ";
    cin >> co_signer_credit_input;
    bool co_signer_credit = (co_signer_credit_input == "yes");

    if (credit_score > 750)
    {
        cout << "Eligible for the loan." << endl;
    }
    else if (credit_score >= 650)
    {
        if (stable_income)
        {
            cout << "Eligible for the loan." << endl;
        }
        else
        {
            cout << "Not eligible for the loan." << endl;
        }
    }
    else
    {
        if (co_signer_credit)
        {
            cout << "May be eligible for the loan." << endl;
        }
        else
        {
            cout << "Not eligible for the loan." << endl;
        }
    }

    return 0;
}
