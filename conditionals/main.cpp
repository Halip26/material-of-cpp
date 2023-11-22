#include <iostream>
#include <string>
using namespace std;

int main() {

  // initialize variables with value
  string username = "Brightchamps";
  string password = "hari_rabu";

  // bss stands for block started by symbol
  string uname_input, pass_input;

  cout << "Enter your username: ";
  cin >> uname_input;
  cout << "Enter your password: ";
  cin >> pass_input;

  if (username == uname_input && password == pass_input) {
    cout << "Hi & welcome to your account! "<<username<<endl;
  }
  else if (username != uname_input && password == pass_input) {
    cout << "Wrong username. Try again!\n ";
  }
  else if (username == uname_input && password != pass_input) {
    cout << "Wrong password. Try again!\n";
  }
  else {
    cout << "Username & Password doesn't exist\n";
  }
  
  return 0;
}