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

  int *aaron; // null

  aaron = &halip;

  cout << "Nilai pointer asli: " << aaron << endl;
  cout << "Mengakses nilai alamat memorinya " << *aaron << endl;

  return 0;
}