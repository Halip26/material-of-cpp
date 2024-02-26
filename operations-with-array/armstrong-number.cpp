// An Armstrong number is when each number n is exponentiated by a number that has the same sum as number n.

// Angka Armstrong adalah angka yang sama dengan jumlah digitnya yang masing-masing dipangkatkan dengan jumlah digit.

// For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.

// So, this programme is to find a number that is a armstrong number or not.

#include <iostream>

using namespace std;

int main()
{
  int numbers[100], n;

  cout << "Enter how many numbers you want to check for the Armstrong property: \n";
  cin >> n;

  cout << "Enter the elements:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> numbers[i];
  }

  cout << "--- The Result --- " << endl;

  for (int i = 0; i < n; i++)
  {
    int originalNumber = numbers[i];
    int digit, sum = 0;

    while (originalNumber != 0)
    {
      digit = originalNumber % 10;
      sum += digit * digit * digit;
      originalNumber /= 10;
    }

    if (sum == numbers[i])
    {
      cout << numbers[i] << " is an Armstrong number\n\n";
    }
    else
    {
      cout << numbers[i] << " is not an Armstrong number\n\n";
    }
  }

  return 0;
}