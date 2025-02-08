#include <iostream>

using namespace std;

int main()
{
    int veggi;
    float bill = 0;
    int choice;
    char size;
    string pizza = "";
    int qty;

    cout << "Welcome to Pizza-Bay Restaurant ! " << endl;
    cout << "        Pizza Offer today !         " << endl;
    cout << "-------Get 1 Small Pizza free  on 2 Small Pizzas-------" << endl;
    cout << "-------Get 1 Medium Pizza free on 2 Medium Pizzas-------" << endl;
    cout << "-------Get 1 Large Pizza free on 2 Large Pizzas-------" << endl;
    cout << "Place your order by selecting below options... " << endl;
    cout << "Are you vegetarian? yes(1) / No(0)  " << endl;
    cin >> veggi;

    if (veggi == 0)
    {
        cout << "Select your pizza..." << endl;
        cout << "1.  Chicken Mexican Pizza-----(S: $350 , M: $400 , L: $450)" << endl;
        cout << "2.  Schezwan Bite Pizza-----(S: $300 , M: $350 , L: $400)" << endl;
        cout << "3.  Mazedar Chicken Makhni Pizza-----(S: $320 , M: $370 , L: $420)   " << endl;
        cout << "4.  Chicken Tandoori Pizza-----(S: $380 , M: $410 , L: $480)   " << endl;
        cout << "5.  Chicken Supreme Pizza-----(S: $400 , M: $450 , L: $500)   " << endl;
        cin >> choice;

        if (choice == 1)
        {
            bill += 350;
            pizza = "Chicken Mexican Pizza";
        }
        else if (choice == 2)
        {
            bill += 300;
            pizza = "Schezwan Bite Pizza";
        }
        else if (choice == 3)
        {
            bill += 320;
            pizza = "Mazedar Chicken Makhni Pizza";
        }
        else if (choice == 4)
        {
            bill += 380;
            pizza = "Chicken Tandoori Pizza";
        }
        else if (choice == 5)
        {
            bill += 400;
            pizza = "Chicken Supreme Pizza";
        }
        else
        {
            cout << "Invalid choice!" << endl;
            exit(0);
        }
    }
    else if (veggi == 1)
    {
        cout << "Select your pizza..." << endl;
        cout << "1.  Margherita Pizza-----(S: $250 , M: $300 , L: $350)" << endl;
        cout << "2.  Vegetarian Bite Pizza-----(S: $200 , M: $250 , L: $300)   " << endl;
        cout << "3.  Mexican Delight Pizza-----(S: $220 , M: $270 , L: $320)   " << endl;
        cout << "4.  Spicy Treat Pizza-----(S: $280 , M: $310 , L: $380)   " << endl;
        cout << "5.  Hawaiian Fantasy Pizza-----(S: $300 , M: $350 , L: $400)   " << endl;
        cin >> choice;
        cout << "\n Enter the size\n Press S--> Small\n Press M--> Medium\n Press L--> Large" << endl;
        cin >> size;
        if (choice == 1)
        {
            bill += 250;
            pizza = "Margherita Pizza";
        }
        else if (choice == 2)
        {
            bill += 200;
            pizza = "Vegetarian Bite Pizza";
        }
        else if (choice == 3)
        {
            bill += 220;
            pizza = "Mexican Delight Pizza";
        }
        else if (choice == 4)
        {
            bill += 280;
            pizza = "Spicy Treat Pizza";
        }
        else if (choice == 5)
        {
            bill += 300;
            pizza = "Hawaiian Fantasy Pizza";
        }
        else
        {
            cout << "Invalid choice!" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "Invalid value entered!" << endl;
        exit(0);
    }
    cout << "Enter the size\n Press S--> Small\n Press M--> Medium\n Press L--> Large ";
    cin >> size;

    if (size == 'M')
    {
        bill += 50;
    }
    else if (size == 'L')
    {
        bill += 100;
    }
    else
    {
        cout << "Invalid size entered!" << endl;
        exit(0);
    }
    cout << "\nEnter number of pizza:  " << endl;
    cin >> qty;
    if (qty > 1)
    {
        cout << "you will get 1 " << size << " " << pizza << " free!" << endl;
    }
    cout << "Your " << pizza << " will be ready in 20 mins." << endl;
    cout << "Total bill = " << bill * qty << endl;
    cout << "Thank you! ";
    return 0;
}