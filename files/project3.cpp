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
  // Variabel untuk menyimpan jumlah siswa yang ingin dimasukkan
  int numStudents;

  // buat garis doang
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  // meminta input jumlah siswanya
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

  // buat garis doang
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  // Membaca dan menampilkan data mahasiswa dari file
  for (int j = 0; j < numStudents; j++)
  {
    getline(fin, students[j].name);
    fin >> students[j].marks;
    fin.ignore(); // Hapus karakter newline dari buffer
    cout << j + 1 << ". Student name:" << students[j].name;
    cout << "\t Marks: " << students[j].marks << '\n';
  }
  fin.close();

  return 0;
}
