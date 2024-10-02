#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 99 + 1;
    string name;

    cout << "Welcome to Guess Number Game" << endl;
    // buat garis doang
    for (int i = 0; i <= 35; i++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "Enter your name: ";
    cin >> name;

    int max_attempts;
    cout << "Enter attempt that you want: ";
    cin >> max_attempts;
    int attempts = 0;

    while (attempts < max_attempts)
    {
        int guess;
        cout << "Enter a number from 1 to 99: ";
        cin >> guess;

        if (guess < number)
        {
            cout << "Guess is low" << endl;
        }
        else if (guess > number)
        {
            cout << "Guess is high" << endl;
        }
        else
        {
            cout << "Congratulations " << name << "! You guessed it!" << endl;
            break;
        }

        attempts++;
        cout << "Attempts remaining: " << max_attempts - attempts << endl
             << endl;
    }

    if (attempts == max_attempts)
    {
        cout << "Out of attempts, You Lost. The number was " << number << endl;
    }

    return 0;
}
