#include <iostream>
#include <fstream>
#include <string> // Tambahkan library string untuk menggunakan tipe data string

using namespace std;

struct Student
{ // Buat struct untuk merepresentasikan data mahasiswa
  string name;
  float marks;
};

int main()
{
  ofstream fout("student.txt"); // Ganti nama file ke "student.txt" agar lebih deskriptif
  char ch;

  // Array untuk menyimpan data mahasiswa
  Student students[5];

  // Input data dari pengguna
  for (int i = 0; i < 5; i++)
  {
    cout << i + 1 << ". Name :\t";
    cin >> students[i].name; // Ubah ke input string agar lebih aman
    cout << i + 1 << ". Marks: \t";
    cin >> students[i].marks;
    cin.ignore(); // Hapus karakter newline dari buffer
  }

  // Menulis data mahasiswa ke dalam file
  for (int i = 0; i < 5; i++)
  {
    fout << students[i].name << '\n'
         << students[i].marks << '\n';
  }
  fout.close();

  ifstream fin("student.txt");

  // Membaca dan menampilkan data mahasiswa dari file
  for (int j = 0; j < 5; j++)
  {
    getline(fin, students[j].name); // Menggunakan getline untuk membaca string
    fin >> students[j].marks;
    fin.ignore(); // Hapus karakter newline dari buffer
    cout << j + 1 << ". Student name:\t" << students[j].name;
    cout << "\t Marks:" << students[j].marks << '\n';
  }
  fin.close();

  return 0;
}
