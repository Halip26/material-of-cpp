#include <iostream>

using namespace std;

int main()
{
  int x = 27;
  int *p; // deklarasi var p with NULL
  p = &x;

  cout << "Value of x is : " << x << endl;
  cout << "Value of p is : " << p << endl;
  cout << "Value of *p is : " << *p << endl;

  int halip = 29;

  int *bimba; // null

  bimba = &halip;

  cout << "Nilai pointer asli: " << bimba << endl;
  cout << "Mengakses nilai alamat memorinya " << *bimba << endl;

  return 0;
}