#include <iostream>
using namespace std;

int main()
{
  string name;
  float age;
  int grade;
  string hobby;

  cout << "Type your first name: ";
  cin >> name;
  cout << "Enter your age: ";
  cin >> age;
  cout << "In which class are you in school?: ";
  cin >> grade;
  cout << "what is your hobby: ";
  cin >> hobby;
  cout << "\n\nHi, My mane is " << name << ",I am " << age << " year old.\n"
       << "And I study in " << grade << "th standard in school."
       << " my hobby is " << hobby;

  return 0;
}
