#include <iostream>
using namespace std;

// C++ program to implement AND Logical Operators
int main()
{
    int a = 15;
    int b = 19;

    // AND = && , OR = ||
    // 0
    cout << "The Result is: " << ((a <= 0) && (a > b)) << endl;
    // 0
    cout << "The Result is: " << ((a == 0) && (a < b)) << endl;
    // 0
    cout << "The Result is: " << ((a == 15) && (a > b)) << endl;
    // 1
    cout << "The Result is: " << ((a == 15) && (a < b)) << endl;
    // 0
    cout << "The Result is: " << ((a == 0) || (a > b)) << endl;
    // 1
    cout << "The Result is: " << ((a == 0) || (a < b)) << endl;
    // 1
    cout << "The Result is: " << ((a == 15) || (a > b)) << endl;
    // 1
    cout << "The Result is: " << ((a == 15) || (a < b)) << endl;

    return 0;
}