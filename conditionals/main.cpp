#include <iostream>
#include <string>
using namespace std;

int main() {

  string username = "Brightchamps";
  string password = "hari_senin";
  string uname, pass;
  cout << "Enter your username: ";
  cin >> uname;
  cout << "Enter your password: ";
  cin >> pass;

  if (username == uname && password == pass) {
    cout << "Hi and welcome to your account! "<<username<<endl;
  }
  else if (username != uname && password == pass) {
    cout << "Wrong username. Try again!\n ";
  }
  else if (username == uname && password != pass) {
    cout << "Wrong password. Try again!\n";
  }
  else {
    cout << "Username & Password doesn't exist\n";
  }
  return 0;
}