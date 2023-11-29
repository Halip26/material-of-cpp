#include <iostream>
#include <string>

using namespace std;

int main() {
    bool fever, loss_of_taste, loss_of_smell, cough, tiredness, result, tickets, luggage;
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
    
    cout << "\n1. Have you been feeling feverish since past few days?: ";
    cin >> fever;
    cout << "\n2. Have you been feeling loss of taste since past few days?: ";
    cin >> loss_of_taste;
    cout << "\n3. Have you been feeling loss of smell since past few days?: ";
    cin >> loss_of_smell;
    cout << "\n4. Are you having cough problem since past few days?: ";
    cin >> cough;
    cout << "\n5. Have you been tired since past few days?: ";
    cin >> tiredness;
    result = (fever && (loss_of_taste || loss_of_smell) && cough && tiredness);
    if (result == 0 ) {
        cout << "\nCorona Positive, No (0) or Yes (1) = " << "No" << "\n\n";
    }
    else {
        cout << "\nCorona Positive, No (0) or Yes (1) = " << "Yes" << "\n\n";
    }


    if (result == 0) {
        cout << "Answer with No (0) or Yes (1)";
        cout << "\nDo you have valid tickets?: ";
        cin >> tickets;
        
        cout << "\nDo you want your luggage checked in?: ";
        cin >> luggage;
        
        bool board = ((luggage || (!result)) && tickets);
        
        if (board == 0) {
            cout << "\nBoarding process incomplete!";
        }
        else if (board == 1) {
            cout << "\nBoarding process completed successfully, Have a safe trip! " << name;
        }
    }

    if (result == 1) {
        cout << name << ", You seem to be corona positive based on your symptoms." << endl;
        cout << "We cannot board you on the flight. Sorry for the inconvenience!" << endl;
    }

    return 0;
}
