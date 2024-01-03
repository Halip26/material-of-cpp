#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int grade;
    string answer, demo_class;

    cout << "Enter your name: ";
    cin >> name;
    cout << "\nWhich class do you study (1-12): ";
    cin >> grade;
    cout << "\nAre you enrolled Paid class in BrightChamps?\nEnter Yes or No: ";
    cin >> answer;

    if (answer == "Yes" || answer == "yes")
    {
        if (grade == 1 || grade == 2)
        {
            cout << "\nWelcome " << name << ", You are in Little champs Paid class";
        }
        else if (3 <= grade && grade <= 6)
        {
            cout << "\nWelcome " << name << ", You are in Junior champs Paid class";
        }
        else if (7 <= grade && grade <= 12)
        {
            cout << "\nWelcome " << name << ", You are in Senior champs Paid class";
        }
        else
        {
            cout << "\nYou have input an invalid grade, program will exit";
            exit(0);
        }
    }
    else if (answer == "No" || answer == "no")
    {
        cout << "\nDo you want to enroll for a demo class?\nEnter Yes or No: ";
        cin >> demo_class;

        if (demo_class == "Yes" || demo_class == "yes")
        {
            if (grade == 1 || grade == 2)
            {
                cout << "\nWelcome " << name << ", You will try Little champs demo class";
            }
            else if (3 <= grade && grade <= 6)
            {
                cout << "\nWelcome " << name << ", You will try Junior champs demo class";
            }
            else if (7 <= grade && grade <= 12)
            {
                cout << "\nWelcome " << name << ", You will try Senior champs demo class";
            }
            else
            {
                cout << "\nYou have input an invalid grade, program will exit";
                exit(0);
            }
        }
        else if (demo_class == "No" || demo_class == "no")
        {
            cout << "Thank you for visiting the program, it will exit now!";
            exit(0);
        }
        else
        {
            cout << "Wrong input, program will exit now!";
            exit(0);
        }
    }
    else
    {
        cout << "Wrong input, program will exit now!";
        exit(0);
    }
}