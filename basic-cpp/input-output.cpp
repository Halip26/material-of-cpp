#include <iostream>
using namespace std;

int main() {
  // inisialized 3 variables 
  string name;
  float age;
  int study; 

  // asks the user to enter input to each variable
  cout << "Type your first name: ";
  cin >> name; 
  cout << "Enter your age: ";
  cin >> age;
  cout << "In which class are you in school?: ";
  cin >>study; 

  // prints all entered data
  cout << "\n\n Hi, My mane is "<< name <<",I am "<< age <<" year old.\n" <<" And I study in "<< study <<"th standard in school.";

  return 0;
}
