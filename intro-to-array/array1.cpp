#include <iostream>
using namespace std;

int main()
{
  char word[5] = {'a', 'b', 'c', 'd', 'e'};
  int numbers[5] = {10, 0, 20, 0, 30};

  for (int i = 0; i < 5; i++)
  {
    cout << "Char Array Element At " << i << " Index: " << word[i] << endl;
    cout << "Integer Array Element At " << i << " Index: " << numbers[i] << endl;
  }

  return 0;
}