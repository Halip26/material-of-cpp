#include <iostream>
using namespace std;

int main() {

  // Multiple declaration and assignments, comma saperated
  int x = 5, y = 6, z = 50; 
  cout <<"Sum of the 3 numbers is: "<< x + y + z<<"\n";
  
  // Good identifier name 
  int minutesPerHour = 60;
  int s = 60; // OK, but not so easy to understand what m actually is
  
  cout << "There are "<< minutesPerHour <<" minutes per hour\n";
  cout << "There are "<< s <<" seconds in a minute\n";

  const int hoursPerDay = 24; 

  /* Since this value is contant, we can do the same other fixed values! */
  cout << "There are "<< hoursPerDay <<" hours in a day\n";
  
  int myAge = 16;

  // concating using cout statements as done previous use cases too!
  cout << "I am " << myAge << " years old."; 
  
  return 0;
}