// import all the libraries
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = false;      // Boolean
  string myString = "Hello, guys";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\t\t\t" << "Size of Int: " << sizeof(myNum)<< " bytes" << "\n";
  cout << "float: " << myFloatNum << "\t\t"<< "Size of Float: " << sizeof(myFloatNum)<< " bytes"<< "\n";
  cout << "double: " << myDoubleNum << "\t"<< "Size of Double: " << sizeof(myDoubleNum)<< " bytes"<<"\n";
  cout << "char: " << myLetter << "\t\t\t" << "Size of Character: " << sizeof(myLetter)<< " bytes"<< "\n";
  cout << "bool: " << myBoolean << "\t\t\t" << "Size of Boolean: " << sizeof(myBoolean)<< " bytes" << "\n";
  cout << "string: " << myString << "\t" << "Size of String: " << sizeof(myString)<< " bytes" << "\n";
 
  return 0;
}
