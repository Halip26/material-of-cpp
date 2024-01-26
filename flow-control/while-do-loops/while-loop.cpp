#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

  int num = 1;

  while (num <= 10)
  {
    Sleep(500);
    cout << "Nomor " << num << endl;
    num++;
  }

  return 0;
}