//overspeeding evaluation program
#include <iostream>
#include <string>
using namespace std;

int main() {
  double vehicle_speed;
  double speed_limit;
  
  cout << "Masukkan batas kecepatan di negara bagian Anda: ";
  cin >> speed_limit;
  
  cout << "Memasukkan kecepatan seketika kendaraan: ";
  cin >> vehicle_speed;

  string result = (vehicle_speed >= speed_limit) ? "Anda melebihi batas kecepatan, denda telah dikeluarkan di STNK Anda!" : "Semoga perjalanan Anda aman, maaf atas ketidaknyamanannya!";

  cout << result;
  
  return 0;
}