#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(NULL)));

  while (true)
  {
    // generate lottery number
    int lottery = rand() % 100;

    // input for user to put the number
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Enter your lottery number (1-99): ";
    int guess;
    cin >> guess;

    // take the digits from the lottery number
    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;

    // take the digits from the guess
    int guessDigit1 = guess / 10;
    int guessDigit2 = guess % 10;

    // exit the program if guess is 0
    if (guess == 0)
    {
      cout << "You exited the lottery game, bye!\n";
      break;
    }

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "The lottery number is " << lottery << endl;

    // Conditional for the game's logic
    if (guess == lottery)
    {
      this_thread::sleep_for(chrono::milliseconds(500));
      cout << "Exact match: You win Rp1.000.000,00\n";
    }
    else if ((guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2) ||
             (guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1))
    {
      this_thread::sleep_for(chrono::milliseconds(500));
      cout << "Match all digits: You win Rp300.000,00\n";
    }
    else if (guessDigit1 == lotteryDigit1 ||
             guessDigit1 == lotteryDigit2 ||
             guessDigit2 == lotteryDigit1 ||
             guessDigit2 == lotteryDigit2)
    {
      this_thread::sleep_for(chrono::milliseconds(500));
      cout << "Match one digit: You win Rp100.000,00\n";
    }
    else
    {
      this_thread::sleep_for(chrono::milliseconds(500));
      cout << "Sorry, no match!\n";
    }
  }

  return 0;
}
