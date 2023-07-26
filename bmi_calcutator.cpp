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

  // Print the BMI category.
  if (BMI < 18.5) {
    cout << "You are underweight." << endl;
  } else if (BMI < 25) {
    cout << "You have a normal weight." << endl;
  } else if (BMI < 30) {
    cout << "You are overweight." << endl;
  } else {
    cout << "You are obese." << endl;
  }

  return 0;
}
