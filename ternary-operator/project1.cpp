#include <iostream>
#include <string>
using namespace std;

int main() {
  double examValue;

  cout << "Enter your Exam Value: ";
  cin >> examValue;

  cout << "--------------------------" << endl;
  cout << "This using Ternary operator: " << endl;
  // ternary operator checks if, examValue is greater than 40
  string result = (examValue >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam." << endl;

  cout << "--------------------------" << endl;
  cout << "This using if statement: " << endl;
  // this used if else statement
  if  (examValue >= 40) {
    cout << "You passed the exam." << endl;
  } else {
    cout << "You failed the exam." << endl;
  }

  return 0;
}