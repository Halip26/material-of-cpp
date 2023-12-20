#include <iostream>
using namespace std;

int main()
{
  int numbers[5];
  string words[5];

  cout << "Enter 5 numbers: " << endl;

  // store input from user to array
  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];
  }

  cout << "The numbers are: " << endl;

  // print array elements
  for (int n = 0; n < 5; n++)
  {
    cout << numbers[n] << "  ";
  }

  cout << endl;

  cout << "Enter 5 words: " << endl;

  // store input from user to array
  for (int i = 0; i < 5; i++)
  {
    cin >> words[i];
  }

  cout << "The words are: " << endl;

  // print array elements
  for (int n = 0; n < 5; n++)
  {
    cout << words[n] << "  ";
  }

  cout << endl;

  return 0;
}