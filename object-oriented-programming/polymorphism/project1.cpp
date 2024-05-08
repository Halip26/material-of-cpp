#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void draw()
  {
    cout << "Drawing a shape." << endl;
  }
};

class Circle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a circle." << endl;
  }
};

class Rectangle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a rectangle." << endl;
  }
};

int main()
{
  int choice;

  cout << "Select a shape: \n";
  cout << "1. Circle\n";
  cout << "2. Rectangle\n";
  cout << "Enter your choice: ";
  cin >> choice;

  Shape *shape;

  if (choice == 1)
  {
    shape = new Circle;
  }
  else if (choice == 2)
  {
    shape = new Rectangle;
  }
  else
  {
    cout << "Invalid choice." << endl;
    return 1;
  }

  // Calls the appropriate draw() function based on user's choice
  shape->draw();

  delete shape;

  return 0;
}