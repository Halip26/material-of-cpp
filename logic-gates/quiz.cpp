#include <iostream>
using namespace std;

int main() {

  int a = 81;
  int b = 37;

  // Quiz 1
  cout << "Quiz 1: " << ((a == 0) ^ !(a > b)) << endl;

  // Quiz 2: Using OR (||)
  cout << "Quiz 2: " << (a > 50 || b > 30) << endl;

  // Quiz 3: Using AND (&&)
  cout << "Quiz 3: " << (a > 80 && b < 40) << endl;

  // Quiz 4: Using XOR (^)
  cout << "Quiz 4: " << (a == 81 ^ b == 37) << endl;

  // Quiz 5: Using NOT (!)
  cout << "Quiz 5: " << !(a <= 80) << endl;

  // Quiz 6: Combining AND, OR, and NOT
  cout << "Quiz 6: " << ((a > 80 && b < 40) || !(a == 81)) << endl;

  // Quiz 7: Combining XOR and AND
  cout << "Quiz 7: " << ((a == 81 ^ b == 37) && (a > 50)) << endl;

  // Quiz 8: Combining OR, AND, and NOT
  cout << "Quiz 8: " << ((a > 80 || b < 40) && !(a == 81)) << endl;

  // Quiz 9: Using NOT and OR
  cout << "Quiz 9: " << (!(a > 80) || b != 37) << endl;

  // Quiz 10: Using XOR and OR
  cout << "Quiz 10: " << ((a == 81 ^ b == 37) || (a < 90)) << endl;

  // Quiz 10: Using XOR and OR
  cout << "Quiz 11: " << ((a <= 81 ^ b >= 37) || (a > 90)) << endl;

  return 0;
}
