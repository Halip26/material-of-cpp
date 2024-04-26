#include <iostream>
using namespace std;

// this project about class & encapsulation
class Employee
{
  int id;
  char name[100];
  float basic_salary, hra, da, itax, net_salary;

public:
  void accept_details()
  {
    cout << "\n Enter Employee Id : ";
    cin >> id;
    cout << "\n Enter Employee Name : ";
    cin >> name;
    cout << "\n Enter Basic Salary : ";
    cin >> basic_salary;

    hra = 800;
    da = 0.25 * basic_salary;
    itax = 0.15 * basic_salary;
    net_salary = basic_salary + da + hra - itax;
  }
  void display_details()
  {
    cout << "\n ----------------------- ";
    cout << "\n Employee Id    : " << id;
    cout << "\n Employee Name  : " << name;
    cout << "\n Basic Salary   : " << basic_salary;
    cout << "\n HRA            : " << hra;
    cout << "\n DA             : " << da;
    cout << "\n I-Tax          : " << itax;
    cout << "\n Net Salary     : " << net_salary;
  }
};

int main()
{
  Employee e;
  e.accept_details();
  e.display_details();
  return 0;
}