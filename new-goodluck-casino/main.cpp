// Concluding program for session 21
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void rules()
{
    cout << "\n===============================================================================================\n";
    cout << "\t\t\tGame Rules";
    cout << "\n===============================================================================================";
    cout << "\n1. Choose Number Between 1 To 10";
    cout << "\n2. Winning Amount Will Be 10 Times Of Bid Amount";
    cout << "\n3. Loose Amount Will Be Biding Amount";
    cout << "\n4. You Can Leave A Game Any Time";
    cout << "\n===============================================================================================\n";
};

int main()
{
    string name;
    int amnt, bidamnt, guess, dice;
    char choice;

    srand(time(0)); // Use for Generating Random Number Each Time.

    cout << "\n===============================================================================================";
    cout << "\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
    cout << "\n CC          A  A      SS             III     NN N   NN   OO      OO    ";
    cout << "\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
    cout << "\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
    cout << "\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
    cout << "\n===============================================================================================\n";

    cout << "\nEnter Player Name: ";
    // multiple input
    getline(cin, name);

    cout << "\nDeposit Your Amount: $";
    cin >> amnt;

    do
    {
        rules();
        do
        {
            cout << "\nWelcome " << name << " Are You Ready To Play? "
                 << "\n\n";
            cout << "Enter Bid Amount: $";
            cin >> bidamnt;

            cout << endl;

            if (bidamnt > amnt)
            {
                cout << "You Can not Bid More Than Current Amount\n"
                     << "\nPleas, Re-enter Amount down below: " << endl;

                // this block code create lines
                for (int i = 0; i <= 35; i++)
                {
                    cout << "-";
                }
            }
        } while (bidamnt > amnt);

        do
        {
            cout << "Guess The Number Between 1 To 10 :";
            cin >> guess;
            if (guess <= 0 || guess > 10)
            {
                cout << "\nNumber Sholud Be Between 1 To 10\n"
                     << "\nGuess Numer Again: " << endl;

                // this block code create lines
                for (int i = 0; i <= 35; i++)
                {
                    cout << "-";
                }
                cout << endl;
            }
        } while (guess <= 0 || guess > 10);

        dice = rand() % 10 + 1;

        // to detect whether the user successfully guessed or not
        if (dice == guess)
        {
            cout << "\nHurray You Won " << bidamnt * 10 << "$";
            amnt += bidamnt * 10;
        }
        else
        {
            cout << "Sorry You Lose "
                 << "$" << bidamnt << endl;
            amnt -= bidamnt;
        }

        // to inform the user that correct number
        cout << "\nThe Winning Number Was: " << dice << "\n";
        cout << "\n"
             << name << ", Your Remaining Amount Is "
             << "$" << amnt << endl;

        if (amnt == 0)
        {
            cout << "\nSorry You Don't Have Money To Play \n";
            break;
        }
        cout << "\nYou Want To Play Again Press (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "\n===============================================================================================\n";
    cout << "Thanks For Playing Game Again Your Current Amount Is "
         << "$" << amnt << endl;
    cout << "\n===============================================================================================\n";

    return 0;
}