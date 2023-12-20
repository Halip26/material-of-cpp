#include <iostream>
#include <string>

using namespace std;

int main()
{
  string firstName;
  string lastName;

  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Enter your last name: ";
  cin >> lastName;

  string fullName = firstName + " " + lastName;
  cout << "Concatanated full name is: " << fullName;
  cout << "\nLength of your name(Including Whitespaces): " << fullName.length();

  return 0;
}
