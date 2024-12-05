#include "linkedlist.h"
#include "palindrome.h"
#include <iostream>
#include <string>

using namespace std;
using namespace RUtility;

int main()
{
    long testNumber1 = 1234554321;
    long testNumber2 = 12345654321;
    long testNumber3 = 12345432;
    string testString1 = "abba";
    string testString2 = "deified";
    string testString3 = "Jumbo";

    RUtility::PalindromeChecker pc;

    cout << "Testing " << to_string(testNumber1) << ", Is Palindrome: " << pc.IsPalindrome(testNumber1) << endl;
    cout << "Testing " << to_string(testNumber2) << ", Is Palindrome: " << pc.IsPalindrome(testNumber2) << endl;
    cout << "Testing " << to_string(testNumber3) << ", Is Palindrome: " << pc.IsPalindrome(testNumber3) << endl;
    cout << "Testing " << testString1 << ", Is Palindrome: " << pc.IsPalindrome(testString1) << endl;
    cout << "Testing " << testString2 << ", Is Palindrome: " << pc.IsPalindrome(testString2) << endl;
    cout << "Testing " << testString3 << ", Is Palindrome: " << pc.IsPalindrome(testString3) << endl;
    
    return 0;
}
