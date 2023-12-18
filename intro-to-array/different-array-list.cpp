#include <iostream>
#include <list>

using namespace std;

// perbedaan antara array dengan list
int main()
{
  // deklarasi array
  char nama_siswa[10][20];
  // inisialisasi array
  for (int i = 0; i < 10; i++)
  {
    cout << "Masukkan nama siswa ke-" << i + 1 << ": ";
    cin >> nama_siswa[i];
  }

  // mencetak array
  cout << "mencetak nama2 siswa yg telah diinput pada array" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Nama siswa ke-" << i + 1 << ": " << nama_siswa[i] << endl;
  }

  // deklarasi list
  list<string> daftar_belanja;

  // menambah elemen ke list
  daftar_belanja.push_back("Beras");
  daftar_belanja.push_back("Gula");
  daftar_belanja.push_back("Tepung");

  cout << "-------------------------------------" << endl;
  cout << "Contoh hasil dari tipe data collection list" << endl;
  // mencetak list
  for (const string &item : daftar_belanja)
  {
    cout << item << " ";
  }

  return 0;
}