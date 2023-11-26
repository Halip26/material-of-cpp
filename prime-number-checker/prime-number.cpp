#include <iostream>
using namespace std;

int main() {
  while (true) {
    int number;
    cout << "Enter the number, for prime number test: ";
    cin >> number;

    if (number >= 2) {
      for (int i = 2; i <= number / 2; i += 2) {
        if (number % i == 0) {
          cout << number << " is divisible by " << i << endl;
          cout << "Hence, it is not a prime number" << endl;
          break;
        }
      }
      if (i > number / 2) {
        cout << number << " is divisible just by 1 & itself" << endl;
        cout << "Hence, it is a prime number" << endl;
      }
    } else {
      cout << number << " is not a valid input for prime number test" << endl;
    }
  }

  return 0;
}