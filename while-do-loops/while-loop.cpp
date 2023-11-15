// Project Name : SC_While Loop_Multiplication Tables
// Program to print multiplication tables

#include <iostream>
using namespace std;
 
int main() {
    int num;

    cout << "Enter the number to print table: ";
    cin >> num;
    int i = 1;

    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;

}