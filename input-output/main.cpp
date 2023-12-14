#include <iostream>
using namespace std;

// use the compiler in interactive mode!
int main()
{
  float num1, num2;
  float sum, sum1, sum2, sum3;
  cout << "Input any number(-ve/+ve/fractional): ";
  cin >> num1;
  cout << "Input another number(-ve/+ve/fractional): ";
  cin >> num2;
  sum = num1 + num2;
  cout << "Sum is of two the numbers is: " << sum << endl;
  sum1 = num1 * num2;
  cout << "the result of multiplication of the two numbers is: " << sum1 << endl;
  sum2 = num1 / num2;
  cout << "the result of divide of the two numbers is: " << sum2 << endl;
}