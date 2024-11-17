// import all the libraries
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Creating variables
  int myNum = 26;
  long myLongNum = 30000;
  float myFloatNum = 26.1;
  double myDoubleNum = 26778.9;
  char myLetter = 'H';
  bool myBoolean = true;
  string myString = "Hello, students!";

  // Print variable values
  cout << "int: " << myNum << "\t\t\t" << "Size of Int: " << sizeof(myNum) << " bytes" << endl;
  cout << "float: " << myFloatNum << "\t\t" << "Size of Float: " << sizeof(myFloatNum) << " bytes" << endl;
  cout << "double: " << myDoubleNum << "\t" << "Size of Double: " << sizeof(myDoubleNum) << " bytes" << endl;
  cout << "char: " << myLetter << "\t\t\t" << "Size of Character: " << sizeof(myLetter) << " bytes" << endl;
  cout << "bool: " << myBoolean << "\t\t\t" << "Size of Boolean: " << sizeof(myBoolean) << " bytes" << endl;
  cout << "string: " << myString << "\t" << "Size of String: " << sizeof(myString) << " bytes" << endl;

  return 0;
}
