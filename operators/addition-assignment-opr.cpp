#include <iostream>
using namespace std;

int main()
{
  int existing_subjects = 10;
  int additional_subjects;
  bool hasAdditionalSubjects;

  cout << "Number of existing subjects in your course this year: " << existing_subjects;
  cout << "\nHave you taken additional subjects? (0: NO / 1: YES): ";
  cin >> hasAdditionalSubjects;

  if (hasAdditionalSubjects)
  {
    cout << "Enter the number of additional subjects taken by you: ";
    cin >> additional_subjects;
    existing_subjects += additional_subjects;
    cout << "Updated number of subjects are: " << existing_subjects;
  }

  else
  {
    cout << "You still have " << existing_subjects << " subjects in your course!";
  }

  return 0;
}
