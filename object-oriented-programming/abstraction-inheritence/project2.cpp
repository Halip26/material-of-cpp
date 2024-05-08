#include <iostream>
using namespace std;

class Animal
{
public:
  int speedCalculator(unsigned int speedVar)
  {
    const int animalSpeed = (speedVar < 15) ? (speedVar * 10) : -1;
    return (animalSpeed);
  }

  int priceCalculator(unsigned int priceVar)
  {
    const int animalPrice = (priceVar < 100) ? (priceVar * 1000) : -1;
    return (animalPrice);
  }

  int dietCalculator(unsigned int dietVar)
  {
    const int animalDiet = (dietVar < 20) ? (dietVar * 1000) : -1;
    return (animalDiet);
  }
};

// Derived class Cow from Animal class
class Cow : public Animal
{
public:
  void milkQuality()
  {
    cout << "I produce milk which humans drink!" << endl;
  }
};

// Derived class Dog from Animal class
class Dog : public Animal
{
public:
  void bark()
  {
    cout << "I can bark!" << endl;
  }
};

// Derived class Cow from Animal class
class Cat : public Animal
{
public:
  void climbing()
  {
    cout << "I can climb tree, Can you?!" << endl;
  }
};

int main()
{

  Cow cow;
  // Calling members of the base class
  cout << "Cow speed is = " << cow.speedCalculator(1) << endl;
  // Calling member of the derived class
  cow.milkQuality();
  cout << endl;
  // Create object of the Dog class
  Dog dog;
  // Calling members of the base class
  cout << "Dog speed is = " << dog.speedCalculator(5) << endl;
  // Calling member of the derived class
  dog.bark();
  cout << endl;
  // Create object of the Cat class
  Cat cat;
  // Calling members of the base class
  cout << "Cat speed is = " << cat.speedCalculator(3) << endl;
  // Calling member of the derived class
  cat.climbing();
  cout << endl;
  return 0;
}