// Program to implement NOT Logic

#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 14;

    // output = true
    cout << !(a == 0) << endl;

    // output = false
    cout << !(a == 7) << endl;

    // output = false
    cout << !(b >= 14) << endl;

    // output = true
    cout << !(b <= 7) << endl;

    // output = true
    cout << !((a == 0) || (a > b)) << endl;
    
    // output = false
    cout << ((a == 15) && !(a > b)) << endl;

    return 0;
}