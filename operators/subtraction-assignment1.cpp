#include <iostream>
using namespace std;

int main()
{
  int num1 = 10;
  int num2 = 5;

  cout << "Sebelum menggunakan operator -= :" << endl;
  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  num1 -= num2; // Mengurangkan nilai num2 dari num1

  cout << "\nSetelah menggunakan operator -= :" << endl;
  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  return 0;
}
