#include <bits/stdc++.h> 
using namespace std;

int main() {

	string sentence = "";
	cout<<"Enter a sentence to check for palindrome: ";
	getline(cin, sentence);
	
	string reverseSentence = sentence;

	// Remove spaces from the string
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
	reverse(reverseSentence.begin(), reverseSentence.end());

	// If sentence is equal to reverseSentence
	if (sentence == reverseSentence) {
			// Return "Yes"
			cout<< "Yes, inputted sentence is a palindrome!";
	} else {
			// return "No"
			cout<< "No, inputted sentence is not a palindrome!";
	}

	return 0;
	
}