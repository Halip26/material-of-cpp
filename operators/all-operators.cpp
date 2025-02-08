#include <iostream>

using namespace std;

int main()
{
    // multiple declaration variables
    int num1, num2, copy1, copy2;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    copy1 = num1; // secure the original value of num1
    copy2 = num2;

    cout << "\n<-------- Arithmetic operators -------->" << endl;

    cout << "num1 + num2 is: " << num1 + num2 << endl;
    cout << "num1 - num2 is: " << num1 - num2 << endl;
    cout << "num1 * num2 is: " << num1 * num2 << endl;
    cout << "num1 / num2 is: " << num1 / num2 << endl;
    cout << "num1 % num2 is: " << num1 % num2 << endl;

    // after increment & decrement
    cout << "num1++ is: " << num1++ << endl;
    cout << "num2-- is: " << num2-- << endl;

    cout << "after increment: " << num1 << endl;
    cout << "after decrement: " << num2 << endl;

    // before increment & decrement
    cout << "++num1 is: " << ++num1 << endl;
    cout << "--num2 is: " << --num2 << endl;

    cout << "\n<-------- Relational operators -------->" << endl; // true or false
    cout << "num1 < num2 is: " << (num1 < num2) << endl;
    cout << "num1 <= num2 is: " << (num1 <= num2) << endl;
    cout << "num1 > num2 is: " << (num1 > num2) << endl;
    cout << "num1 >= num2 is: " << (num1 >= num2) << endl;
    cout << "num1 == num2 is: " << (num1 == num2) << endl;
    cout << "num1 != num2 is: " << (num1 != num2) << endl; // (! =) means not equal

    cout << "\n<------ Logical operator ------>" << endl;
    cout << "num1 && num2 is :" << (num1 && num2) << endl; // non-zero value is considered to be true
    cout << "num1 || num2 is:" << (num1 || num2) << endl;
    cout << "!num1 is :" << (!num1) << endl;

    cout << "\n<------ Assignment operator ------>" << endl;
    int x;
    x = copy1;
    x += copy2;
    cout << "x+=num2 :" << x << endl;
    x = copy1;
    x -= copy2;
    cout << "x-=num2 :" << x << endl;
    x = copy1;
    x *= copy2;
    cout << "x*=num2 :" << x << endl;
    x = copy1;
    x /= copy2;
    cout << "x/=num2 :" << x << endl;
    x = copy1;
    x %= copy2;
    cout << "x%=num2 :" << x << endl;

    return 0;
}