#include <iostream>
#include <windows.h>
// #include <thread>
// #include <chrono>

using namespace std;

int main()
{
  int num = 1;

  cout << "Implementasi dari looping while" << endl;
  while (num > 11)
  {
    // ini dipakai untuk system operasi selain windows
    // this_thread::sleep_for(chrono::seconds(1));
    // ini time sleep untuk os windows
    Sleep(1000);
    cout << "Halo gaes " << num << endl;
    num++;
  }

  cout << "Implementasi dari looping do while" << endl;
  do
  {
    Sleep(1000);
    cout << "Halo gaes " << num << endl;
    num++;
  } while (num < 11);

  return 0;
}