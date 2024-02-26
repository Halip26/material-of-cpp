#include <iostream>
#include <cmath>

using namespace std;

float standard_deviation(float data[], int n)
{
  float mean = 0.0, sum_deviation = 0.0;
  int i;

  for (i = 0; i < n; ++i)
  {
    mean += data[i];
  }
  mean = mean / n;

  for (i = 0; i < n; ++i)
    sum_deviation += (data[i] - mean) * (data[i] - mean);

  return sqrt(sum_deviation / n);
}

int main()
{
  int n, i;
  float data[100];
  cout << "Enter number of data: ";
  cin >> n;

  while (n > 100 || n <= 0)
  {
    cout << "Error! number should in range of (1 to 100)." << endl;
    cout << "Enter the number of data again: ";
    cin >> n;
  }
  cout << "Enter elements: " << endl;

  for (i = 0; i < n; ++i)
    cin >> data[i];
  cout << endl;
  cout << "Standard Deviation = " << standard_deviation(data, n);

  return 0;
}
