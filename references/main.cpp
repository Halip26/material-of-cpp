#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int &ref = a;

  cout << "Nilai dari var ref adalah " << ref << endl;

  ref = 26;

  cout << "Nilai dari var a adalah " << a << endl;
}