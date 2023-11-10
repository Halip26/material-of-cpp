#include <iostream>
using namespace std;

int main() {
    float a = 5.4;
    int b = 9;
  
    // false && false = false
    cout << ((a == 0) || (a > b)) << endl;
  
    // false && true = true
    cout << ((a == 0) || (a < b)) << endl;

    // true && false = true
    cout << ((a == 5.4) || (a > b)) << endl;

    // true && true = true
    cout << ((a == 5.4) || (a < b)) << endl;

    return 0;
}