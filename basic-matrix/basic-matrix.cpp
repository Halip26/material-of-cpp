#include <iostream>
using namespace std;

int main() {
  // menentukan ukuran matriks
  int baris = 3;
  int kolom = 10;

  int matriks[baris][kolom];

  // isi matriksnya dengan data 
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      matriks[i][j] = i * kolom + j;
    }
  }

  // tampilkan matriks 
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << matriks[i][j] << " ";
    }

    cout << endl;
  }
}