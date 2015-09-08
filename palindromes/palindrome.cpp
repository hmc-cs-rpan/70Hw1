/**
 * \file palindrome.cpp
 * \authors
 *
 * \brief Contains `palindrome` program to identify palidromes.
 *
 * \remarks
 *   The palindrome test is handled by isPalindrome, while all
 *   interaction is handled in main.
 */

#include <iostream>
#include <string>

using namespace std;


/**
 * \brief Tests a string for being a palindrome.
 * \returns true iff `text` is a palindrome (same backwards and forwards).
 *
 * \remarks
 *   isPalindrome ignores capitalization and punctuation and spaces
 *
 */
 int START_OF_NUMERALS = 48;                // ASCII values for characters
 int END_OF_NUMERALS = 57;                  // we used these to classify characters
 int START_OF_CAPITALS = 65;                // as numerals, uppercase, and lowercase
 int END_OF_CAPITALS = 90;
 int START_OF_LOWERCASE = 97;
 int END_OF_LOWERCASE = 122;
 int LOWER_TO_UPPER_DIFF = 32;              // 32 is the difference in ASCII values between a lowercase character and 
                                            // its corresponding uppercase character
bool isPalindrome(string text /**< Canditate palindrome.*/)
{
    string noPunct = "";                    // string in which we will store a modified version of the input string without punctuation 
                                            // and with lowercase characters
    for(int i = 0; i < text.length(); i++)  
    {
        char charAtI = text[i];             // retreives the character at index i
        int asciiVal = charAtI;             // converts the character into its ASCII value
        if((asciiVal >= START_OF_NUMERALS && asciiVal <= END_OF_NUMERALS) ||    // checks if character is a number
            (asciiVal >= START_OF_LOWERCASE && asciiVal <= END_OF_LOWERCASE))   // checks if character is lowercase
        {
            noPunct += charAtI;             // if so, add the character to noPunct
        }
        else if(asciiVal >= START_OF_CAPITALS && asciiVal <= END_OF_CAPITALS)   // checks if character is uppercase
        {
            char lowercase = asciiVal + LOWER_TO_UPPER_DIFF;     // if so, use ASCII values to convert to lowercase  
            noPunct += lowercase;           // now add the character to noPunct
        }
    }
    int left  = 0;                      // Indexes of the leftmost and
    int right = noPunct.length() - 1;      // rightmost unchecked character.

    // Check palindrome by moving left and right boundaries progressively
    // closer until they finally meet or pass each other.  Bail early if
    // we find a mismatch.
    while (left < right) {
        if (noPunct[left] != noPunct[right])
            return false;

        ++left;
        --right;
    }

    // All the characters checked out.
    return true;
}


/**
 * \brief
 *   Reads a potential palindrome and then indicates if it is or not.
 *
 * \pre
 *   We ignore the command line arguments, and thus don't provide
 *   names for them.
 *
 * \returns 0
 *   when it exits with no errors, just like any regular main
 *   function.
 */
int main (int, const char*[])
{
    cout << "Enter possible palindrome: ";
    string line;

    getline(cin, line);

    if (isPalindrome(line))
        cout << "Yay, that's a palindrome!" << endl;
    else
        cout << "No, that's not a palindrome." << endl;

    return 0;
}


/* (Junk to make emacs use Stroustrup-style indentation)
 * Local Variables:
 * c-file-style: "stroustrup"
 * End:
 */
