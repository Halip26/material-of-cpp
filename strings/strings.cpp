#include <bits/stdc++.h>
using namespace std;

int main()
{
	string word;
	cout<<"Enter a word to check for palindrome(Either in uppercase or lowercase): ";
	cin>>word;
	
	string revWord = word;

	// Reverse the string P
	reverse(revWord.begin(), revWord.end());

	// If S is equal to P
	if (word == revWord) {
		// Return "Yes"
		cout<< "Yes, entered word is a palindrome!";
	}
	// Otherwise
	if (word !=revWord) {
		// return "No"
		cout<< "No, entered word is not a palindrome!";
	}

	return 0;
}
