#include <iostream>
#include <string>

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

// Fungsi untuk mengecek apakah kata adalah palindrom
bool isPalindrome(const string &word)
{
    string cleanStr = cleanString(word);
    string reversedStr = cleanStr;

    // Menghitung panjang kata
    int length = reversedStr.length();

    // Menginisialisasi indeks untuk karakter pertama dan terakhir
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        // Membandingkan karakter dari kedua ujung
        if (reversedStr[i] != reversedStr[j])
        {
            return false; // Bukan palindrome
        }
    }
    return true; // Palindrome
}

int main()
{
    string kata;

    while (true)
    {

        // meminta pengguna untuk memasukkan kata
        cout << "Masukkan kata/kalimat (q for exit): ";
        getline(cin, kata);

        if (kata == "q")
        {
            cout << "You exited the program" << endl;
            break;
        }
        // mengecek apakah kata adalah palindrome
        if (isPalindrome(kata))
        {
            cout << kata << " adalah palindrome" << endl;
        }
        else
        {
            cout << kata << " adalah bukan palindrome" << endl;
        }
    }

    return 0;
}
