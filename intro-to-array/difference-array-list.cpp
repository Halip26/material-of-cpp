#include <iostream>
#include <list>

using namespace std;

// perbedaan antara array dengan list
int main()
{
  // deklarasi array
  string nama_siswa[5];

  // inisialisasi array
  for (int i = 0; i < 5; i++)
  {
    cout << "Masukkan nama siswa ke-" << i + 1 << ": ";
    cin >> nama_siswa[i];
  }
  cout << "-------------------------------------" << endl;

  // mencetak array
  cout << "mencetak nama2 siswa yg telah diinput pada array: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "Nama siswa ke-" << i + 1 << ": " << nama_siswa[i] << endl;
  }

  // deklarasi list
  list<string> daftar_belanja;
  list<int> jumlah;

  // menambah elemen ke list
  daftar_belanja.push_back("Beras");
  daftar_belanja.push_back("Gula");
  daftar_belanja.push_back("Tepung");
  jumlah.push_back(3);
  jumlah.push_back(10);
  jumlah.push_back(15);

  cout << "-------------------------------------" << endl;
  cout << "Contoh hasil dari tipe data collection list" << endl;

  // mencetak list daftar_belanja
  cout << "1. Mencetak list daftar_belanja: " << endl;
  for (const string &item : daftar_belanja)
  {
    cout << "   ";
    cout << "- " << item << endl;
  }
  cout << endl;
  // mencetak list jumlah
  cout << "2. Mencetak list jumlah: " << endl;
  for (const int &item : jumlah)
  {
    cout << "   ";
    cout << "- " << item << endl;
  }

  return 0;
}