#include <iostream>
using namespace std;

//C++ program to implement AND Logic Operator
int main() {
    int a = 15;
    int b = 19;
  
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 15) && (a > b)) << endl;

    // true && true = true
    cout << ((a == 15) && (a < b)) << endl;

    return 0;
}