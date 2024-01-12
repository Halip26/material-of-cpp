#include <iostream>
using namespace std;

int main()
{
  int my2Darry[3][3]; // declaration of 2D array
  my2Darry[0][0] = 5; // initialization
  my2Darry[0][1] = 10;
  my2Darry[0][2] = 12;
  my2Darry[1][0] = 24;
  my2Darry[1][1] = 15;
  my2Darry[1][2] = 20;
  my2Darry[2][0] = 30;
  my2Darry[2][1] = 19;
  my2Darry[2][2] = 10;

  int yetanother2Darray[3][3];

  cout << "Input 9 elements for array: ";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cin >> yetanother2Darray[i][j];
    }
  }

  cout << "\nPrinting Array 1\n";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << my2Darry[i][j] << " ";
    }
    cout << "\n"; // new line at each row
  }

  cout << "\nPrinting Array 2\n";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << yetanother2Darray[i][j] << " ";
    }
    cout << "\n"; // new line at each row
  }

  return 0;
}