#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial number
int faktorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    return n * faktorial(n - 1);
  }
}

int main()
{
  int userInput;

  while (true)
  {
    // Untuk pengguna menginput angkanya
    cout << "Enter the number: " << endl;
    cin >> userInput;

    int cek_factorial = faktorial(userInput);
    if (userInput <= 1)
    {
      cout << "Invalid input!\nYou've exited the program" << endl;
      break;
    }
    else
    {
      cout << "Faktorial dari " << userInput << " adalah: " << cek_factorial << endl;
    }
  }

  return 0;
}