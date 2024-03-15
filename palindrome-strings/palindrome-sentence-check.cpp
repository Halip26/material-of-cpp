#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk menghapus spasi dan mengubah huruf menjadi huruf kecil
string cleanString(const string &str)
{
    string result;
    for (char ch : str)
    {
        if (isalpha(ch))
            result += tolower(ch);
    }
    return result;
}

// Fungsi untuk mengecek apakah string merupakan palindrom atau bukan
bool isPalindrome(const string &str)
{
    string cleanStr = cleanString(str);
    string reversedStr = cleanStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return cleanStr == reversedStr;
}

int main()
{
    string input;
    while (true)
    {
        cout << "Masukkan kata atau kalimat (q untuk keluar): ";
        getline(cin, input);

        if (input == "q")
        {
            cout << "Anda keluar dari program" << endl;
            break;
        }
        else if (isPalindrome(input))
        {
            cout << input << " adalah palindrom" << endl;
        }
        else
        {
            cout << input << " adalah bukan palindrom" << endl;
        }
    }
    return 0;
}
