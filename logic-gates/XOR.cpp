//C++ program to implement XOR Logic

#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 19;
  
    // false XOR false = false
    cout << ((a == 0) ^ (a > b)) << endl;
  
    // false XOR true = true
    cout << ((a == 0) ^ (a < b)) << endl;

    // true XOR false = true
    cout << ((a == 15) ^ (a > b)) << endl;

    // true XOR true = false
    cout << ((a == 15) ^ (a < b)) << endl;

    return 0;
}