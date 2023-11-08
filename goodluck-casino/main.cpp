#include <iostream>

using namespace std;

int main() {
  // multiple declaration of variables
  string name, continue_answer, token_buy_answer;
  int age, balance_amount, bet_amount, dice, guess;
  srand(time(0));

  cout << "Please enter your name: ";
  // alternative ways to input the value of var
  getline(cin, name);

  cout << "Welcome, " << name << " to the Goodluck Casino, \nEnter your age to continue further: ";
  cin >> age;

  if (12 < age && age < 18) {
    cout << "\nYou are eligible for tier 1 game\n";
    cout << "\nWould you like to continue(Enter YES to continue): ";
    cin >> continue_answer;
    if (continue_answer == "YES") {
      cout << "\nTo play the game you'll have to purachase 500 tokens for 50 dollars. Do you accept(Enter YES to confirm): ";
      cin >> token_buy_answer;
      if (token_buy_answer == "YES") {
        balance_amount = 500;
        cout << "\nThanks for your purchase, how much you want to bet on the game. Amount should be <" << balance_amount << endl;
        cout << "Bet amount: ";
        cin >> bet_amount;
        if (bet_amount > balance_amount) {
          cout << "\nYou Can not Bid More Than Current Amount. Program will exit now!";
          exit(0);
        } else {
          cout << "\nGuess The Number Between 1 and 10 only :";
          cin >> guess;
          if (guess <= 0 || guess > 10) {
            cout << "\nNumber Sholud Be Between 1 To 10. Program wiil exit now!";
            exit(0);
          } else {
            dice = rand() % 10 + 1;

            if (dice == guess) {
              cout << "\nHurray You Won " << bet_amount * 10;
              balance_amount = balance_amount + bet_amount * 10;
            } else {
              cout << "\nSorry You Lose " << bet_amount << "\n";
              balance_amount = balance_amount - bet_amount;
            }

            cout << "\nThe Winning Number Was: " << dice << "\n";
            cout << "\n" << name << ", Your Remaining Amount Is " << balance_amount << ", but you get one chance only\n";
            exit(0);
            if (balance_amount == 0) {
              cout << "\nSorry You Don't Have Money To Play. The program will exit now!";
              exit(0);
            }
          }
        }
      } else {
        cout << "\nSorry to see you go, but you can't stay in casino without buying tokens!";
        exit(0);
      }
    } else {
      cout << "\nSorry to see you leave!";
      exit(0);
    }

  } else if (18 < age && age < 60) {
    cout << "\nYou are eligible for tier 2 game\n";
    cout << "\nWould you like to continue (Enter 'YES' to continue):  ";
    cin >> continue_answer;
    if (continue_answer == "YES") {
      cout << "\nTo play the game you'll have to purachase 300 tokens for 50 dollars. Do you accept(Enter YES to confirm): ";
      cin >> token_buy_answer;
      if (token_buy_answer == "YES") {
        balance_amount = 300;
        cout << "\nThanks for your purchase, how much you want to bet on the game. Amount should be <" << balance_amount << endl;
        cout << "Bet amount: ";
        cin >> bet_amount;
        if (bet_amount > balance_amount) {
          cout << "You can not bid more than current amount. Program will exit now!";
          exit(0);
        } else {
          cout << "\nGuess The Number Between 1 and 5 only :";
          cin >> guess;
          if (guess <= 0 || guess > 5) {
            cout << "\nNumber Sholud Be Between 1 To 5. Program wiil exit now!";
            exit(0);
          } else {
            dice = rand() % 5 + 1;

            if (dice == guess) {
              cout << "\nHurray You Won " << bet_amount * 20;
              balance_amount = balance_amount + bet_amount * 20;
            } else {
              cout << "\nSorry You Lose " << bet_amount << "\n";
              balance_amount = balance_amount - bet_amount;
            }

            cout << "\nThe Winning Number Was: " << dice << "\n";
            cout << "\n" << name << ", Your Remaining Amount Is " << balance_amount << ", but you get one chance only\n";
            exit(0);
            if (balance_amount == 0) {
              cout << "\nSorry You Don't Have Money To Play. The program will exit now!";
              exit(0);
            }
          }
        }
      } else {
        cout << "\nSorry to see you go, but you can't stay in casino without buying tokens!";
        exit(0);
      }
    } else {
      cout << "\nSorry to see you leave!";
      exit(0);
    }

  } else {
    cout << "\nUnfortunately we don't serve your age group, thanks for visiting our program! ";
    exit(0);
  }
}