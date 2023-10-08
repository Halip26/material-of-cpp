#include <iostream>
using namespace std;

int main() {
  double n;
  cout << "enter the number of students: ";
  cin >> n;

  double sumofGrades = 0;
  double count = 0;

  do {
    double grade;
    cout << "enter student scores: " << count + 1 << ": ";
    cin >> grade;
    sumofGrades += grade;
    count++;
  } while (count < n);

  double average = sumofGrades / n;
  cout << "the average is: " << average << endl;

  return 0;
}