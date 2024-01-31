#include <iostream>

using namespace std;

int main()
{
  // lesson pattern print
  cout << "Enter the number for rows: ";
  int row;
  cin >> row;

  cout << "\nCetak stairs pattern: " << endl;

  // create stairs pattern
  for (int r = 1; r <= row; r++)
  {
    for (int c = 1; c <= r; c++)
    {
      cout << " * ";
    }
    cout << endl;
  }

  cout << "\nCetak triangle pattern: " << endl;
  // triangle pattern
  for (int s = 1; s <= row; s++)
  {
    // cetak spasi sebelum karakter bintang
    for (int t = 1; t <= (row - s); t++)
    {
      cout << "  ";
    }

    // cetak karakter bintang
    for (int u = 1; u <= 2 * s - 1; u++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}
