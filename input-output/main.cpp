#include <iostream>
using namespace std;

// use the compiler in interactive mode!
int main() {
  float num1, num2;
  float sum;
  cout << "Input any number(-ve/+ve/fractional): ";
  cin >> num1;
  cout << "Input another number(-ve/+ve/fractional): ";
  cin >> num2;
  sum = num1 + num2;
  cout << "Sum is of two the numbers is: " << sum;
}