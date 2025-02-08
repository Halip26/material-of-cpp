#include <iostream>

using namespace std;

// Original project: https://www.jdoodle.com/embed/v0/6B31

int main()
{
    float AQ1, AQ2, AQ3, AQ4, AQ5, AQ6, AQ7, AQ8, BQ1, BQ2, BQ3, BQ4, CQ1, CQ2, CQ3, CQ4;
    float A_total, B_total, C_total, percent;

    cout << "Enter the marks scored in each question for different sections in the Question Paper " << endl;
    cout << "\n<-------Section A [40 marks]------>\n";

    cout << "Enter your marks in Question 1 [5 marks ] ---> " << endl;
    cin >> AQ1;

    cout << "Enter your marks in Question 2 [5 marks ] ---> " << endl;
    cin >> AQ2;

    cout << "Enter your marks in Question 3 [5 marks ] ---> " << endl;
    cin >> AQ3;

    cout << "Enter your marks in Question 4 [5 marks ] ---> " << endl;
    cin >> AQ4;

    cout << "Enter your marks in Question 5 [5 marks ] ---> " << endl;
    cin >> AQ5;

    cout << "Enter your marks in Question 6 [5 marks ] ---> " << endl;
    cin >> AQ6;

    cout << "Enter your marks in Question 7 [5 marks ] ---> " << endl;
    cin >> AQ7;

    cout << "Enter your marks in Question 8 [5 marks ] ---> " << endl;
    cin >> AQ8;

    cout << "\nSection B [20 marks ] ---> " << endl;
    cout << "Enter your marks in Question 1 [5 marks ] ---> " << endl;
    cin >> BQ1;
    cout << "Enter your marks in Question 2 [5 marks ] ---> " << endl;
    cin >> BQ2;
    cout << "Enter your marks in Question 3 [5 marks ] ---> " << endl;
    cin >> BQ3;

    cout << "Enter your marks in Question 4 [5 marks ] ---> " << endl;
    cin >> BQ4;

    cout << "\n<-----Section C [40 marks ] --------> " << endl;

    cout << "Enter your marks in Question 1 [10 marks ] ---> " << endl;
    cin >> CQ1;

    cout << "Enter your marks in Question 2 [10 marks ] ---> " << endl;
    cin >> CQ2;

    cout << "Enter your marks in Question 3 [10 marks ] ---> " << endl;
    cin >> CQ3;

    cout << "Enter your marks in Question 4 [10 marks ] ---> " << endl;
    cin >> CQ4;

    A_total = AQ1 + AQ2 + AQ3 + AQ4 + AQ5 + AQ6 + AQ7 + AQ8;
    B_total = BQ1 + BQ2 + BQ3 + BQ4;
    C_total = CQ1 + CQ2 + CQ3 + CQ4;
    cout << "\n\n<------Results------>";
    cout << "\nYour total marks scored in the Section A ---> " << A_total << " / 40" << endl;
    cout << "Your total marks scored in the Section B ---> " << B_total << " / 20" << endl;
    cout << "Your total marks scored in the Section C ---> " << C_total << " / 40" << endl;
    percent = (A_total + B_total + C_total) * 100 / 100;
    cout << "\nYour percentage is  " << percent << " % " << endl;
    return 0;
}
