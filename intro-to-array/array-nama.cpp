#include <iostream>

using namespace std;

int main()
{
  // variabel biasa
  string satuNama = "Halip";

  // struktur data array
  string banyakNama[5] = {"danis", "halip", "diono", "diana", "dianto"};

  // variabel biasa
  int satuUmur = 29;

  // struktur data array
  int banyakUmur[5] = {15, 29, 20, 16, 31};

  cout << "Nilai variable biasa: " << satuNama << endl;

  for (int d = 0; d < 5; d++)
  {
    cout << "Nilai variable array " << d << " : " << banyakNama[d] << endl;
  }

  cout << "Menampilkan umur var biasa: " << satuUmur << endl;

  cout << "Menampilkan array umur: ";

  // Menampilkan array umur: 15 29 20 16 31
  for (int u = 0; u < 5; u++)
  {
    cout << banyakUmur[u] << " ";
  }
  cout << endl;

  return 0;
}