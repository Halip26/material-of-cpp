#include <iostream>

using namespace std;

class PostalService
{
public:
  virtual void calculatePostage(double weight)
  {
    cout << "Base class calculation." << endl;
  }
};

class RegularPost : public PostalService
{
public:
  void calculatePostage(double weight) override
  {
    double postage = weight * 0.5;
    cout << "Regular Postage: $" << postage << endl;
  }
};

class ExpressPost : public PostalService
{
public:
  void calculatePostage(double weight) override
  {
    double postage = weight * 1.0;
    cout << "Express Postage: $" << postage << endl;
  }
};

int main()
{
  int choice;
  double weight;

  cout << "Select a postal service:" << endl;
  cout << "1. Regular Post" << endl;
  cout << "2. Express Post" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  cout << "Enter the weight of the parcel: ";
  cin >> weight;

  PostalService *postalService;

  if (choice == 1)
  {
    postalService = new RegularPost;
  }
  else if (choice == 2)
  {
    postalService = new ExpressPost;
  }
  else
  {
    cout << "Invalid choice!" << endl;
    return 1;
  }

  postalService->calculatePostage(weight);

  delete postalService;

  return 0;
}