#include <iostream>
using namespace std;

int main()
{
  int existing_subjects = 20;
  int decrease_subjects;
  bool hasDecreaseSubjects;

  cout << "Number of existing subjects in your course this year: " << existing_subjects;
  cout << "\nWould you like to decrease ur subjects? (0: NO / 1: YES): ";
  cin >> hasDecreaseSubjects;

  if (hasDecreaseSubjects)
  {
    cout << "Enter the number of decrease subjects you want: ";
    cin >> decrease_subjects;
    existing_subjects -= decrease_subjects;
    cout << "Updated number of subjects are: " << existing_subjects;
  }

  else
  {
    cout << "You still have " << existing_subjects << " subjects in your course!";
  }

  return 0;
}
