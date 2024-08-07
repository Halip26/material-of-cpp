#include <iostream>
using namespace std;

// Encapsulation usage in cpp
class Electric
{
  float unit;
  char name[20];

public:
  void accept()
  {
    cout << "\n Enter Name   : ";
    cin >> name;
    cout << "\n How much electricity is used : ";
    cin >> unit;
  }
  void print_bill();
};

void Electric::print_bill()
{
  int bill = 0;
  if (unit >= 100 && unit <= 300)
    bill = (500 + (unit * 0.40));
  else if (unit > 100 && unit <= 300)
    bill = (500 + (unit * 0.40) + (unit * 0.50));
  else if (unit > 300)
    bill = (500 + (unit * 0.60));
  if (bill > 250)
    bill = (bill + (bill * (15 / 100)));
  cout << "\n Bill = " << bill << "\t" << name;
}

int main()
{
  Electric electricy[10];
  int i, count;
  cout << "\n Enter How Many Customers You Want? : ";
  cin >> count;
  for (i = 0; i < count; i++)
    electricy[i].accept();
  for (i = 0; i < count; i++)
    electricy[i].print_bill();

  return 0;
}