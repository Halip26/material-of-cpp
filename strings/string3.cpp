#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str;
	int start, len;

	cout << "Enter any string (Sentence/Word): ";
	getline(cin, str);

	cout << "\nInput start position index: ";
	cin >> start;

	cout << "\nInput length <= " << (str.length() - start) << ": ";
	cin >> len;
	string subStr = str.substr(start, len);

	cout << "\nSubstring generated is: " << subStr;

	return 0;
}
