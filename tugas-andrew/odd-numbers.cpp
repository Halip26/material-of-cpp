#include <iostream>
using namespace std;

int main() {
  int n, sum = 0, current_odd_number = 1;
  cout << "Enter the number: ";
  cin >> n;

  // Looping untuk meminta input as many vaules as n
  for (int i = 1; i <= n; i++){
    if (i % 2 != 0){
      // Menampilakn semua hasilnya 
      cout << i << " ";
    }

  }

  return 0;
}