#include <iostream>
#include <string>

using namespace std;

int main()
{
    // definition all varibles with each data type
    int myNum = 26;
    long myLongNum = 439837;
    float myFloatNum = 26.5;
    double myDoubleNum = 4376.87;
    char myLetter = 'H';
    bool myBoolean = true;
    string myString = "Hello, guys";

    // print all variables value
    cout << "int: " << myNum << "\t\t\t\t" << "Size of int: " << sizeof(myNum) << " bytes" << endl;
    cout << "long: " << myLongNum << "\t\t\t" << "Size of long: " << sizeof(myLongNum) << " bytes" << endl;
    cout << "float: " << myFloatNum << "\t\t\t" << "Size of float: " << sizeof(myFloatNum) << " bytes" << endl;
    cout << "double: " << myDoubleNum << "\t\t\t" << "Size of double: " << sizeof(myDoubleNum) << " bytes" << endl;
    cout << "char: " << myLetter << "\t\t\t\t" << "Size of char: " << sizeof(myLetter) << " bytes" << endl;
    cout << "boolean: " << myBoolean << "\t\t\t" << "Size of boolean: " << sizeof(myBoolean) << " bytes" << endl;
    cout << "string: " << myString << "\t\t" << "Size of string: " << sizeof(myString) << " bytes" << endl;

    return 0;
}