#include <iostream>
#include <math.h>

using namespace std;

int addition(int num1, int num2)
{
  return num1 + num2;
}

int subtraction(int num1, int num2)
{
  return num1 - num2;
}

int multiplication(int num1, int num2)
{
  return num1 * num2;
}

float division(int num1, int num2)
{
  return static_cast<float>(num1) / num2;
}

int floor_division(int num1, int num2)
{
  return num1 / num2;
}

int exponent(int num1, int num2)
{
  return pow(num1, num2);
}

int main()
{
  cout << "\n-- Welcome to calculator --" << endl;
  while (true)
  {
    int a, b, user_choice;
    float result;

    cout << "----------------------------------------" << endl;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for subtraction" << endl;
    cout << "Press 3 for multiplication" << endl;
    cout << "Press 4 for division" << endl;
    cout << "Press 5 for floor division" << endl;
    cout << "Press 6 for modulus" << endl;
    cout << "Press 7 for exponent" << endl;
    cout << "Press 0 to quit" << endl;
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
      if (b == 0)
      {
        cout << "Error! Division by zero is not allowed." << endl;
      }
      else
      {
        result = floor_division(a, b);
        cout << "Floor Division of " << a << " // " << b << " = " << result << endl;
      }
    }
    else if (user_choice == 6)
    {
      result = a % b;
      cout << "Modulus of " << a << " % " << b << " = " << result << endl;
    }
    else if (user_choice == 7)
    {
      result = exponent(a, b);
      cout << "Exponent of " << a << " ** " << b << " = " << result << endl;
    }
    else if (user_choice == 0)
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
