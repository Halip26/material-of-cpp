#include <iostream>
#include <chrono>

using namespace std;

int main() {
  // Start the timer.
  auto start = chrono::steady_clock::now();

  // Do something that you want to time.
  cout << "Counting to 10..." << endl;
  for (int i = 0; i < 10; i++) {
    cout << i << endl;
  }

  // Stop the timer.
  auto end = chrono::steady_clock::now();

  // Calculate the elapsed time.
  auto elapsed = end - start;

  // Print the elapsed time.
  cout << "Elapsed time: " << chrono::duration_cast<chrono::seconds>(elapsed).count() << " seconds" << endl;

  return 0;
}
