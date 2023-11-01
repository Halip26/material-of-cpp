#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a integer between 1 to 7: ";
    // cin is a statement that reads input the value entered
    cin >> day;
       switch (day) {
      case 1:
        cout << "Need some motivation because its Monday";
        break;
      case 2:
        cout << "Its taco day because its Tuesday";
        break;
      case 3:
        cout << "Just few days its going to weekend because its Wednesday";
        break;
      case 4:
        cout << "Lets post a old photo on instagram and call it #throwbackthrusday because its Thursday";
        break;
      case 5:
        cout << "Just a day to weekend, thank god its Friday!";
        break;
      case 6:
        cout << "Yay, the weekend starts because its Saturday";
        break;
      case 7:
        cout << "Today is fun day because today is Sunday";
        break;
      default:
        cout<< "Wrong Input!";
        break;
    }
}