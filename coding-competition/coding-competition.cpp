#include <iostream> // importing header files
#include <string>

using namespace std;

int main()
{
    string first_name, last_name, email, language, institute; // declaring variables
    int age;
    bool participated;
    long phone;

    cout << "Brightchamps coding competition Registration form :\n"
         << endl; // taking input from user

    cout << "Enter your first name:" << endl;
    cin >> first_name;

    cout << "Enter your last name:" << endl;
    cin >> last_name;

    cout << "Enter your age:" << endl;
    cin >> age;

    cout << "Enter your Educational Institute name:" << endl;
    cin >> institute;

    cout << "Enter programming language that you would like to choose for the competition: " << endl;
    cin >> language;

    cout << "Enter your email address:" << endl;
    cin >> email;

    cout << "Enter your phone number:" << endl;
    cin >> phone;

    cout << "Have you ever participated in any coding competition before?[yes->1 / no->0]" << endl;
    cin >> participated;

    // printing details
    cout << "\n\nEntered Details:\nName: " << first_name << " " << last_name << endl
         << "Age: " << age << "\nEducational Institute: " << institute;
    cout << "\nProgramming language: " << language << "\nEmail address: " << email << "\nPhone number:" << phone << "\n\n-----Please confirm------ \n\n Thank you! ";

    return 0;
}