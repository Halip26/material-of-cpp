#include <iostream>
#include <string>
using namespace std;

int main() {
  int age;

  cout << "Enter your age: ";
  cin >> age;

  // ternary operator checks if, age is greater than 18
  string canVote = (age >= 18) ? "Yes" : "No";

  cout << "Can you vote? " << canVote << endl;

  return 0;
}