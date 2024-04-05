#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  // Deklarasi variable untuk menyimpan nama file
  string filename;

  // meminta pengguna untuk memasukkan nama file
  cout << "Masukkan nama file Anda: ";
  cin >> filename;

  // membuka file yg telah diinput untuk dibaca
  ifstream infile(filename.c_str());

  // print lines using looping for
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  // membaca isi file & mencetaknya ke console
  string line;
  while (getline(infile, line))
  {
    cout << line << endl;
  }

  infile.close();

  return 0;
}