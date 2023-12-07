#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "the number " << number << " is even.";
  }
  else
  {
    cout << "the number " << number << " is odd.";
  }
  return 0;
}

// jadi pada kasus diatas, 2 kali berapa yang hasilnya mendekati/sama dengan nilai variabelnya