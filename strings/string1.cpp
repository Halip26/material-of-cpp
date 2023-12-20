#include <iostream>
using namespace std;

int main()
{

  string str1, str2;

  cout << "Enter a string: ";
  cin >> str1;

  cout << "First String: " << str1 << endl;

  cout << "Enter another string: " << endl;
  getline(cin, str2);

  cout << "Second String: " << str2 << endl;

  return 0;
}