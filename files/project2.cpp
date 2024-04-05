#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream fio;

  string line;

  fio.open("project2.txt", ios::trunc | ios::out | ios::in);

  cout << "Enter your text for file. To stop, type -1 in new line\n";
  cout << "******************************************************\n";
  while (fio)
  {

    getline(cin, line);

    if (line == "-1")
      break;

    fio << line << endl;
  }

  fio.seekg(0, ios::beg);
  cout << "Reading from the file\n";
  cout << "*********************\n";
  while (fio)
  {

    getline(fio, line);
    cout << line << endl;
  }

  cout << "If you want to check the changes, you can download the file and see the change in it also.";

  fio.close();

  return 0;
}
