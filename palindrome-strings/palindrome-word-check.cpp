#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengecek apakah kata adalah palindrom
bool isPalindrome(const string &word)
{
	// Menghitung panjang kata
	int length = word.length();

	// Menginisialisasi indeks untuk karakter pertama dan terakhir
	int i, j;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		// Membandingkan karakter dari kedua ujung
		if (word[i] != word[j])
		{
			return false; // Bukan palindrom
		}
	}
	return true; // Palindrom
}

int main()
{
	string kata;

	while (true)
	{

		// meminta pengguna untuk memasukkan kata
		cout << "Masukkan kata (q for exit): ";
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
