#include <iostream>
using namespace std;

// Specifies the sum of a series of odd numbers, with as many numbers inputted as n. Use the loop to request the input of as many values as n! And use loops to count the number of series!
int main() {
  int n, sum = 0;
  cout << "Enter the number of odd numbers in the series: ";
  cin >> n;

  // Looping untuk meminta input as many vaules as n
  for (int i = 1; i <= n; i++){
    int num;
    
    if (i % 2 != 0){
    // Menampilakn semua hasilnya 
    cout << i << " " << endl;
    }
    num += i;

    //mengecek jika the number odd
    if (num % 2 != 0) {
      sum += num;
    } else {
      cout << "The number " << num << " is not odd." << endl;
    }
  }

  // kalkulasi the number
  int num_series = 0;
  for (int i = 1; i <= n; i++){
    num_series *= 1;
  }

  // Menampilakn semua hasilnya 
  cout << "The sum of the series is " << sum << endl;
  cout << "The number of the series is " << num_series << endl;

  return 0;
}

