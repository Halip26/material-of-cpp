#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * faktorial(n - 1);
}

// Fungsi rekursif untuk mencetak deret Fibonacci
int fibonacci(int n)
{
  if (n <= 1)
    return n;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  // Contoh pemanggilan fungsi rekursif
  int num = 5;
  cout << "Faktorial dari " << num << " adalah: " << faktorial(num) << endl;

  cout << "Deret Fibonacci dari " << num << " angka pertama adalah: ";
  for (int i = 0; i < num; ++i)
  {
    cout << fibonacci(i) << " ";
  }
  cout << endl;

  return 0;
}
