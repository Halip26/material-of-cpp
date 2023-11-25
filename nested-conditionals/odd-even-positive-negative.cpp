#include <iostream>
using namespace std;

int main() {

  int number;

  while(true){
    cout << "Enter an integer: ";
    cin >> number;

    if ((number > 0) && ((number % 2) == 0)) {
      cout << "the number " << number << " is even positive." << endl;
    } 
    else  if ((number > 0) && ((number % 2 )>= 1)) {
      cout << "the number " << number << " is odd positive." << endl;
    } 

    else if ((number < 0) && ((number % 2 ) == 0 )) {
      cout << "the number " << number << " is even negative." << endl;
    } 
    else if ((number < 0) && ((number % 2 )<= -1)) {
      cout << "the number " << number << " is odd negative." << endl;
    } 
    
    else {
      cout << "Program is stop, you entered 0!" << endl;
      break;
    }

  }
    
  return 0;
}