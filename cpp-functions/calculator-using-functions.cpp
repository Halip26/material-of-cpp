#include <iostream>
using namespace std;

int addition(int a, int b)
{
  return a + b;
}

int subtraction(int a, int b)
{
  return a - b;
}

int multiplication(int a, int b)
{
  return a * b;
}

float division(int a, int b)
{
  return static_cast<float>(a) / b;
}

int main()
{
  int a, b, user_choice;
  float result;

  cout << "\n-- Welcome to calculator --" << endl;
  while (true)
  {

    cout << "----------------------------------------" << endl;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for subtraction" << endl;
    cout << "Press 3 for multiplication" << endl;
    cout << "Press 4 for division" << endl;
    cout << "Press 5 to quit" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> user_choice;

    if (user_choice == 1)
    {
      result = addition(a, b);
      cout << "Sum of " << a << " + " << b << " = " << result << endl;
    }
    else if (user_choice == 2)
    {
      result = subtraction(a, b);
      cout << "Subtraction of " << a << " - " << b << " = " << result << endl;
    }
    else if (user_choice == 3)
    {
      result = multiplication(a, b);
      cout << "Multiplication of " << a << " x " << b << " = " << result << endl;
    }
    else if (user_choice == 4)
    {
      if (b == 0)
      {
        cout << "Error! Division by zero is not allowed." << endl;
      }
      else
      {
        result = division(a, b);
        cout << "Division of " << a << " / " << b << " = " << result << endl;
      }
    }
    else if (user_choice == 5)
    {
      cout << "You have exited the calculator. Bye!" << endl;
      break;
    }
    else
    {
      cout << "Invalid input, please try again!" << endl;
    }
  }
  return 0;
}