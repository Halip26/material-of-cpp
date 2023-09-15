#include <bits/stdc++.h>
using namespace std;

int main() {

	string word = "";
	cout<<"Enter a word to check for palindrome: ";
	cin>>word;
	
	string revWord = word;

	// Reverse the string Palindrome
	reverse(revWord.begin(), revWord.end());

	// If word is equal to revWord
	if (word == revWord) {
		// Return "Yes"
		cout<< "Yes, inputted word is a palindrome!";
	} else {
		// return "No"
		cout<< "No, inputted word is not a palindrome!";
	}

	return 0;
}
