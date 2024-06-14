#include <iostream>

using namespace std;

class Segitiga
{
private:
  double alas;
  double tinggi;

public:
  Segitiga(double a, double b)
  {
    this->alas = a;
    this->tinggi = b;
  }

  double hitungLuas()
  {
    return (alas * tinggi) / 2;
  }
};

int main()
{
  int alas, tinggi;

  cout << "Masukkan alasnya: ";
  cin >> alas;
  cout << "Masukkan tingginya: ";
  cin >> tinggi;

  // buat garis doang
  for (int i = 0; i <= 40; i++)
  {
    cout << "-";
  }
  cout << endl;

  Segitiga segitiga(alas, tinggi);
  double luas = segitiga.hitungLuas();
  cout << "Luas segitiga: " << luas << endl;

  return 0;
}