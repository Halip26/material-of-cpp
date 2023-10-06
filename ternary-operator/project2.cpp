//overspeeding evaluation program
#include <iostream>
#include <string>
using namespace std;

int main() {
  double kecepatanKendaraan;
  double batasKecepatan;
  
  cout << "Masukkan batas kecepatan di negara Indonesia: ";
  cin >> batasKecepatan;
  
  cout << "Memasukkan kecepatan kendaraan Kamu: ";
  cin >> kecepatanKendaraan;

  string result = (kecepatanKendaraan >= batasKecepatan) ? "Anda melebihi batas kecepatan, denda telah dikeluarkan di STNK Anda!" : "Semoga perjalanan Anda aman, maaf atas ketidaknyamanannya!";

  cout << result;
  
  return 0;
}