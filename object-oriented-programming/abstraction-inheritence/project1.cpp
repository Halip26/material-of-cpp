#include <iostream>
using namespace std;

class Rectangle
{
public:
  float length, breadth;
  Rectangle()
  { // Default Constructor
    length = 10;
    breadth = 6.5;
  }
  Rectangle(float l, float b)
  { // Parameterized Constructor
    length = l;
    breadth = b;
  }
  float Area()
  {
    return length * breadth;
  }
};
class Square
{
public:
  float side;
  Square(float s)
  {
    side = s;
  }
  Square(const Square &obj)
  { // Copy Constructor
    side = obj.side;
  }
};

int main()
{
  Rectangle r(12.64, 7);
  cout << "length = " << r.length << endl;
  cout << "breadth = " << r.breadth << endl;
  cout << "Area = " << r.Area() << endl;
  Square s1(4.5);
  Square s2 = s1; // Copy constructor called
  cout << "side of 1st square = " << s1.side << endl;
  cout << "side of 2nd square = " << s2.side << endl;
  return 0;
}