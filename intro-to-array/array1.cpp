#include <iostream>
using namespace std;

int main()
{
  char arry[5] = {'a', 'b', 'c', 'd', 'e'};
  int arr[5] = {10, 0, 20, 0, 30};

  for (int i = 0; i < 5; i++)
  {
    cout << "Char Array Element At " << i << " Index: " << arry[i] << " and "
         << "Integer Array Element At " << i << " Index: " << arr[i] << "\n";
  }
}