/*
Only positive number sum calculator will terminate 
input when a negative number is provided
*/ 

#include <iostream>
using namespace std;

int main() {
    // variable without initialization value 
    int number;
    // vvarible with initialization 
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}
