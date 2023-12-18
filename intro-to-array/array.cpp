#include <iostream>

using namespace std;

int main()
{
  // deklarasi array
  int angka[10];

  // inisialisasi array
  for (int i = 0; i <= 10; i++)
  {
    angka[i] = i;
  }

  for (int i = 0; i <= 10; i++)
  {
    cout << angka[i] << " ";
  }
  cout << endl;

  // mengakses elemen array
  int nilai = angka[5];

  // mencetak nilai elemen
  cout << "nilai elemennya yaitu: ";
  cout << nilai << endl;

  return 0;
}