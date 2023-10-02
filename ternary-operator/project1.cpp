#include <iostream>
#include <string>
using namespace std;

int main() {
  double examValue;

  cout << "Enter your marks: ";
  cin >> examValue;

  // ternary operator checks if, examValue is greater than 40
  string result = (examValue >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  // this used if else statement
  // if  (marks >= 40){
  //   cout << "You Passed the exam";
  // } else {
  //   cout << "You Failed the exam";
  // }

  return 0;
}