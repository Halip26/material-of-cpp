#include <iostream>
using namespace std;

double Average(int *arr, int size)
{
  int i, sum = 0;
  double avg;

  for (i = 0; i < size; ++i)
  {
  sum += arr[i];
  }
  avg = double(sum) / size;

  return avg;
}

int main()
{

  int i, n;
  double avg;
  cout << "Enter The Size Of Array\n";
  cin >> n;
  int average[n];
  cout << "\nEnter The Array Elements\n";

  for (i = 0; i < n; i++)
  {
    cin >> average[i];
  }
  cout << "\n\nAverage Value of An Array Is: " << Average(average, n) << endl;

  return 0;
}
