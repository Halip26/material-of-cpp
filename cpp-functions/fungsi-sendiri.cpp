#include <iostream>

using namespace std;

// buat fungsi untuk gabung nama depan & akhir
string gabungNama(string nama1, string nama2)
{
  return nama1 + " " + nama2;
}

int main()
{
  string namaDepan, namaAkhir, namaIbu, namaBapak;

  cout << "Masukkan nama depan Anda: " << endl;
  getline(cin, namaDepan);

  cout << "Masukkan nama akhir Anda: " << endl;
  getline(cin, namaAkhir);

  cout << "Masukkan nama Ibu Anda: " << endl;
  getline(cin, namaIbu);

  cout << "Masukkan nama Bapak Anda: " << endl;
  getline(cin, namaBapak);

  // disini fungsi dapat digunakan kembali
  string ortua = gabungNama(namaIbu, namaBapak);

  // disini kita pakai fungsi yg telah dibuat diatas
  string namaDigabung = gabungNama(namaDepan, namaAkhir);

  // buat garis doang pakai for
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  // print semua hasilnya
  cout << "Hasilnya adalah " << namaDigabung << endl;
  cout << "Nama kedua orangtua saya yaitu " << ortua << endl;

  return 0;
}