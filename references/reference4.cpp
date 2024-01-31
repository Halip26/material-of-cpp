// C++ Program to demonstrate Reference to an Array
#include <iostream>

using namespace std;

int main()
{
  // Creating and initializing an integer array
  // Custom input entries
  int a[] = {75, 56, 12, 85};
  char d[] = {'b', 'r', 'i', 'g', 'h', 't', 'c', 'h', 'a', 'm', 'p', 's'};

  int(&b)[4] = a;
  char(&c)[12] = d;

  // Iterating over elements using foreach loop
  cout << "The integer array is as follows: ";
  for (int e : b)
  {
    // Print the elements of the array
    cout << e << endl;
  }

  cout << "The character array is as follows: ";
  for (char f : c)
  {
    cout << f << " ";
  }

  return 0;
}
