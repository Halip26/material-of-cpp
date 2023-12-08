#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool fever, loss_of_taste, loss_of_smell, cough, tiredness, tickets, luggage, isPositive;
    string name;
    float age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nWelcome " << name << ", to Corona Checking Centre,\nIt is mandatory to get checked for corona symptoms before you board the flight!" << endl;
    cout << "Enter the following details with full honesty to generate your report" << endl;
    cout << "Instructions for users: Enter (0) for NO and (1) for YES" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "\n1. Have you been feeling feverish since past few days? (0 for No, 1 for Yes): ";
    cin >> fever;
    cout << "\n2. Have you been feeling loss of taste since past few days? (0 for No, 1 for Yes): ";
    cin >> loss_of_taste;
    cout << "\n3. Have you been feeling loss of smell since past few days? (0 for No, 1 for Yes): ";
    cin >> loss_of_smell;
    cout << "\n4. Are you having cough problem since past few days? (0 for No, 1 for Yes): ";
    cin >> cough;
    cout << "\n5. Have you been tired since past few days? (0 for No, 1 for Yes): ";
    cin >> tiredness;

    isPositive = fever && (loss_of_taste || loss_of_smell) && cough && tiredness;

    if (isPositive)
    {
        cout << "\n"
             << name << ", you seem to be corona positive based on your symptoms." << endl;
        cout << "We cannot board you on the flight. Sorry for the inconvenience!" << endl;
    }
    else
    {
        cout << "\nAre you diagnosed with COVID-19? (0 for No, 1 for Yes): " << (isPositive ? "Yes" : "No") << "\n\n";

        cout << "Answer with No (0) or Yes (1)" << endl;
        cout << "Do you have valid tickets? (0 for No, 1 for Yes): ";
        cin >> tickets;

        cout << "Do you want your luggage checked in? (0 for No, 1 for Yes): ";
        cin >> luggage;

        bool canBoard = luggage || !isPositive;

        if (!canBoard)
        {
            cout << "\nBoarding process incomplete!" << endl;
        }
        else
        {
            cout << "\nBoarding process completed successfully. Have a safe trip! " << name << endl;
        }
    }

    return 0;
}
