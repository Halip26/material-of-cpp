#include <iostream>

using namespace std;

int main() {
  // Define the variables.
  double weight, height, BMI;

  // Get the user's weight and height.
  cout << "Enter your weight in kilograms: ";
  cin >> weight;
  cout << "Enter your height in meters: ";
  cin >> height;
  // Calculate the BMI.
  BMI = weight / (height * height);

  // Print the BMI.
  cout << "Your BMI is: " << BMI << endl;


}
