#include <iostream>

using namespace std;

int main() {
  int m, n;

  // masukkan dimensi matriks
  cout << "Masukkan jumah baris (m): ";
  cin >> m;

  cout << "Masukkan jumah kolom (n): ";
  cin >> n;

  // inisialissasi matriks variables 
  int matriks1[m][n];
  int matriks2[m][n];
  int hasil[m][n];

  // masukkan data matriks pertama
  cout << "Masukkan data matriks pertama" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << "Masukkan elemen pada baris " << i + 1 << ", kolom " << j + 1 << ": ";
      cin >> matriks1[i][j];
    }
  }

  // masukkan data matriks kedua
  cout << "Masukkan data matriks kedua" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << "Masukkan elemen pada baris " << i + 1 << ", kolom " << j + 1 << ": ";
      cin >> matriks2[i][j];
    }
  }

  // kita kurangkan matriks (deduction) dan simpan ke hasil 
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
    }
  }

  // menampilkan hasil matriks pertama
  cout << "Matriks pertama:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << matriks1[i][j] << " ";
    }
    cout << endl;
  }
  // menampilkan hasil matriks kedua
  cout << "Matriks kedua:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << matriks2[i][j] << " ";
    }
    cout << endl;
  }

  // menampilkan matriks hasil pengurangan (deduction)
  cout << "Matriks hasil (Deduction):" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << hasil[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}