#include <iostream>
#include "header.h"

using namespace std;

void printMessage()
{
  cout << "Hello, gaess!" << endl;
}

int main()
{
  // memanggil fungsi yg dideklarasikan di header.h
  printMessage();

  // mencetak nilai variable global
  cout << "Nilai variabel global: " << globalVariable << endl;

  return 0;
}
