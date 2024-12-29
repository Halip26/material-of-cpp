#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
   // initialize variables with value
   string userName = "halip26";
   string password = "belajarC++";

   // multiple initialization
   string inputUserName, inputPassword, inputConfirmPassword;

   cout << "Welcome to the login page" << endl;
   while (true)
   {
      // create lines using looping for
      for (int i = 0; i <= 30; i++)
      {
         cout << "-";
      }
      cout << endl;

      // ask user to input the username
      cout << "Enter your username: ";
      cin >> inputUserName;
      cout << "Enter your password: ";
      cin >> inputPassword;
      cout << "Confirm your password: ";
      cin >> inputConfirmPassword;

      // check if the input is correct
      Sleep(500);
      cout << "Checking your input..." << endl;
      Sleep(500);
      cout << "Please wait..." << endl;
      Sleep(500);
      cout << "Checking credentials..." << endl;

      // check if the input is correct
      if (inputUserName == userName && inputPassword == password && inputConfirmPassword == password)
      {
         Sleep(500);
         cout << "\nYou have successfully logged in" << endl;
         cout << "Hii, " << "Welcome to your account " << userName << endl;
         break;
      }
      // if username is incorrect but password & confirm password correct
      else if (inputUserName != userName && inputPassword == password && inputConfirmPassword == password)
      {
         Sleep(500);
         cout << "\nYou have entered the wrong username" << endl;
         cout << "Please, try again!" << endl;
      }
      // if password is incorrect but username & confirm password correct
      else if (inputUserName == userName && inputPassword != password && inputConfirmPassword == password)
      {
         Sleep(500);
         cout << "\nYou have entered the wrong password" << endl;
         cout << "Please, try again!" << endl;
      }
      // if confirm password is incorrect but username & password correct
      else if (inputUserName == userName && inputPassword == password && inputConfirmPassword != password)
      {
         Sleep(500);
         cout << "\nYou have entered the wrong confirm password" << endl;
         cout << "Please, try again!" << endl;
      }
      else
      {
         Sleep(500);
         cout << "\nYou have entered the wrong credentials" << endl;
         cout << "Please, try again!" << endl;
      }
   }
   return 0;
}