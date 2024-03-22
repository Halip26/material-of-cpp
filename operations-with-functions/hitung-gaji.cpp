#include <iostream>

using namespace std;

// user define functions
double hitunGajiPokok(int jamKerja)
{
  double gajiPokok = jamKerja * 10000;
  return gajiPokok;
}

double hitungGajiLembur(int jamLembur)
{
  double gajiLembur = jamLembur * 15000;
  return gajiLembur;
}

double hitungTotalGaji(double gajiPokok, double gajiLembur)
{
  double totalGaji = gajiPokok + gajiLembur;
  return totalGaji;
}

// fungsi utama untuk outpunya
int main()
{
  int durasiKerja, lemburKerja;

  cout << "Masukkan jumlah jam kerja: ";
  cin >> durasiKerja;

  cout << "Masukkan jumlah jam lembur: ";
  cin >> lemburKerja;

  double gajiPokok = hitunGajiPokok(durasiKerja);
  double gajiLembur = hitungGajiLembur(lemburKerja);
  double totalGaji = hitungTotalGaji(gajiLembur, gajiPokok);

  // buat lines
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  cout << "Gaji pokok: " << gajiPokok << endl;
  cout << "Gaji lembur: " << gajiLembur << endl;
  cout << "Total gaji: " << totalGaji << endl;

  return 0;
}