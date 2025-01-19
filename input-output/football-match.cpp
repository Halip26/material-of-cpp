// Program: Football Match

/*
This project is used to illustrate singleline comment and multiline comment.
The project also gives an idea of how to create different types of variables.
*/

#include <iostream> //  cout and cin defined in iostream header file
#include <string>

using namespace std;

int highest_goal; // creating global variables

int main()
{

    string team1, team2, date, time, goalkeeper; // creating local variables
    static string winner, man_of_the_match;      //  creating static variables

    cout << "Enter the name of Football team1: " << endl;
    cin >> team1;

    cout << "Enter the name of Football team2: " << endl;
    cin >> team2;

    cout << "Enter the Date of Football match: " << endl;
    cin >> date;

    cout << "Enter the Time of Football match: " << endl;
    cin >> time;

    cout << "Which team won the match?" << endl;
    cin >> winner;

    cout << "Enter the highest number of goals: " << endl;
    cin >> highest_goal;

    cout << "Who has won the title of Man of the match?" << endl;
    cin >> man_of_the_match;

    cout << "Who has won the title of best goalkeeper?" << endl;
    cin >> goalkeeper;

    // displaying the output
    cout << "\n\nThe International Football Match was held on  " << date << " at " << time << " between " << team1 << " and " << team2;
    cout << ".\nTeam " << winner << " have won the match with " << highest_goal << " number of goals.\nThe title \'Man of the match\' was given to Mr." << man_of_the_match;
    cout << " and the title of \'Best Goalkeeper\' is given to Mr." << goalkeeper;
}