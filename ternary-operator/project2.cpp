//overspeeding evluation program
#include <iostream>
#include <string>
using namespace std;

int main() {
  double vehicle_speed;
  double speed_limit;
  
  cout << "Enter speed limit in your state: ";
  cin >> speed_limit;
  
  cout << "Enter instantenous speed of the vehicle: ";
  cin >> vehicle_speed;

  string result = (vehicle_speed >= speed_limit) ? "You are overspeeding, a fine has been issued in your vehicle registration number!" : "Have a safe trip, sorry for inconvinience!";

  cout << result;
  
  return 0;
}