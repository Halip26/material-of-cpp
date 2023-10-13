#include <iostream>
using namespace std;

int main() {
    while (true) {
        char Operator;
        cout << "Enter an operator (+, -, *, /) 'q' to quit: ";
        cin >> Operator;

        if (Operator == 'q') {
            break;
        }

        int first_number, second_number;
        cout << "Enter the first number: ";
        cin >> first_number;
        cout << "Enter the second number: ";
        cin >> second_number;

        int result;

        if (Operator == '+') {
            result = first_number + second_number;
        } else if (Operator == '-') {
            result = first_number - second_number;
        } else if (Operator == '*') {
            result = first_number * second_number;
        } else if (Operator == '/') {
            if (second_number != 0) {
                result = first_number / second_number;
            } else {
                cout << "Division by zero is not allowed." << endl;
                continue;
            }
        } else {
            cout << "Invalid/wrong operator" << endl;
            continue;
        }

        cout << "The result is " << result << endl;
        cout << "------------------------------------" << endl;
    }

    return 0;
}
