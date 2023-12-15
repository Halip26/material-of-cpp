#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string sentence = "";
    cout << "Enter a sentence to check for palindrome: ";
    getline(cin, sentence);

    // Remove spaces from the string
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    string reverseSentence = sentence;
    reverse(reverseSentence.begin(), reverseSentence.end());

    // If sentence is equal to reverseSentence
    if (sentence == reverseSentence)
    {
        cout << "Yes, inputted sentence is a palindrome!";
    }
    else
    {
        cout << "No, inputted sentence is not a palindrome!";
    }

    return 0;
}