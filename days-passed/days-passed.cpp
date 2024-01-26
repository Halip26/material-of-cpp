#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct Date
{
  int day, month, year;
};

string getFormattedDate(Date dateObj)
{
  struct tm timeStruct = {0};
  timeStruct.tm_year = dateObj.year - 1900;
  timeStruct.tm_mon = dateObj.month - 1;
  timeStruct.tm_mday = dateObj.day;

  char buffer[80];
  strftime(buffer, sizeof(buffer), "%d %B %Y", &timeStruct);
  return buffer;
}

Date getBirthDate()
{
  Date birthDate;
  cout << "Enter the day of your birth: ";
  cin >> birthDate.day;
  cout << "Enter the month of your birth: ";
  cin >> birthDate.month;
  cout << "Enter the year of your birth: ";
  cin >> birthDate.year;
  return birthDate;
}

int calculateDays(Date birthDate)
{
  time_t now = time(0);
  tm *today = localtime(&now);
  tm birthTime = {0};
  birthTime.tm_year = birthDate.year - 1900;
  birthTime.tm_mon = birthDate.month - 1;
  birthTime.tm_mday = birthDate.day;

  double seconds = difftime(now, mktime(&birthTime));
  int daysPassed = static_cast<int>(seconds / (60 * 60 * 24));

  return daysPassed;
}

int main()
{
  string name;
  cout << "Enter your name: ";
  getline(cin, name);

  Date birthDate = getBirthDate();
  string formattedBirthDate = getFormattedDate(birthDate);
  int daysPassed = calculateDays(birthDate);

  cout << string(50, '-') << endl;
  cout << "Kamu lahir pada '" << formattedBirthDate << "' & telah hidup selama " << daysPassed << " hari, " << name << "!" << endl;

  return 0;
}