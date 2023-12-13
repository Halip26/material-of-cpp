// Program to find sum of all powers of 2 till the user input number
// Program untuk mencari jumlah semua pangkat 2 sampai angka yang dimasukkan oleh pengguna

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i, n, limit, sum = 0;
  do
  {
    cout << "\nEnter The Number Of Terms: ";
    cin >> n;
    cout << "Enter a limit when the loop to breakout: ";
    cin >> limit;
    if (n < 0 || limit < 0)
    {
      cout << "\nNegative numbers not allowed!\n";
    }
  } while (n < 0 || limit < 0);

  for (i = 0; i <= n; i++)
  {
    sum += pow(2, i);
    cout << "\nNumber Generated: " << pow(2, i) << " || ";
    if (sum <= limit)
    {
      cout << "Limit did not reached with " << pow(2, i) << " as the last number added || ";
      cout << "Sum: " << sum << endl;
      continue;
    }
    else
    {
      cout << "Limit reached with " << pow(2, i) << " as the last number attempted || ";
      cout << "Sum: " << sum - pow(2, i);
      break;
    }
  }

  return 0;
}