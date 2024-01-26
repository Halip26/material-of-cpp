#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

  for (int i = 1; i <= 10; i++)
  {
    Sleep(500);
    cout << "Nomor " << i << endl;
  }

  return 0;
}