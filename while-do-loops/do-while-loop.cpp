// Multiplication tables using do whhile loop

#include <iostream>
using namespace std;

int main()
{
    int num, count = 1, limit;
    
    cout << "Enter the value to find the multiplication table: ";
    cin >> num;
    
    cout << "Enter the maximum limit for multiplication table: ";
    cin >> limit;
    
    do
    {
        cout << num << " x " << count << " = " << num * count << endl;
        count++;
    }
    while (count <= limit);
    
    return 0;
}
