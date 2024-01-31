#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "Bright";
  string &str = s;

  cout << "Initialy, value of original string s is " << s << "\n\n";
  cout << "Also, value of referenced string str is " << str << "\n\n";

  str = str + "Champs";

  cout << "After string manipulation ,value of original str is now " << str << endl
       << endl;
  cout << "As a result, value of referenced string s is also " << s << endl;

  return 0;
}