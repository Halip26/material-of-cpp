#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream fout("student");
  char name[30], ch;
  float marks = 0.0;

  for (int i = 0; i < 5; i++)
  {
    cout << i + 1 << ". Name :\t";
    cin.get(name, 30);
    cout << i + 1 << ". Marks: \t";
    cin >> marks;
    cin.get(ch);

    fout << name << '\n'
         << marks << '\n';
  }
  fout.close();

  ifstream fin("student");
  fin.seekg(0);
  cout << endl;

  for (int j = 0; j < 5; j++)
  {
    fin.get(name, 30);
    fin.get(ch);
    fin >> marks;
    fin.get(ch);
    cout << j + 1 << ". Student name:\t" << name;
    cout << "\t Marks:" << marks << '\n';
  }
  fin.close();
}
