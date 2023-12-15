#include <iostream>
#include <cstring>

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

	// Meminta pengguna untuk memasukkan kata
	cout << "Masukkan kata: ";
	cin >> kata;

	// Mengecek apakah kata adalah palindrom
	if (isPalindrome(kata))
	{
		cout << kata << " adalah palindrom." << endl;
	}
	else
	{
		cout << kata << " bukan palindrom." << endl;
	}

	return 0;
}
