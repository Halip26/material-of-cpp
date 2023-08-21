#include <iostream>
using namespace std;

//C++ program to implement AND Logical Operators
int main() {
    int a = 15;
    int b = 19;
    
    // AND = && , OR = ||
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 15) && (a > b)) << endl;

    // true && true = true
    cout << ((a == 15) && (a < b)) << endl;

    // false || false = false
    cout << ((a == 0) || (a > b)) << endl;

    // false && true = true
    cout << ((a == 0) || (a < b)) << endl;

    // true && false = true
    cout << ((a == 15) || (a > b)) << endl;

    // true && true = true
    cout << ((a == 15) || (a < b)) << endl;

    return 0;
}