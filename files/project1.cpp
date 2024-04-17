#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student
{
  string name;
  float marks;
};

int main()
{
  ofstream fout("student.txt");
  char ch;
  int numStudents; // Variabel untuk menyimpan jumlah siswa yang ingin dimasukkan

  cout << "Enter the number of students: ";
  cin >> numStudents;

  // Array untuk menyimpan data mahasiswa sesuai jumlah yang dimasukkan pengguna
  Student students[numStudents];

  // Input data dari pengguna
  for (int i = 0; i < numStudents; i++)
  {
    cout << i + 1 << ". Name :\t";
    cin >> students[i].name;
    cout << i + 1 << ". Marks: \t";
    cin >> students[i].marks;
    cin.ignore(); // Hapus karakter newline dari buffer
  }

  // Menulis data mahasiswa ke dalam file
  for (int i = 0; i < numStudents; i++)
  {
    fout << students[i].name << '\n'
         << students[i].marks << '\n';
  }
  fout.close();

  ifstream fin("student.txt");

  // Membaca dan menampilkan data mahasiswa dari file
  for (int j = 0; j < numStudents; j++)
  {
    getline(fin, students[j].name);
    fin >> students[j].marks;
    fin.ignore(); // Hapus karakter newline dari buffer
    cout << j + 1 << ". Student name:\t" << students[j].name;
    cout << "\t Marks:" << students[j].marks << '\n';
  }
  fin.close();

  return 0;
}
