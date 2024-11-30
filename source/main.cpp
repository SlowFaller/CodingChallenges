#include "linkedList.h"
#include "palindrome.h"
#include <iostream>
#include <string>

using namespace RUtility;

int main()
{
    std::cout << "shit";
    long testNumber1 = 1234554321;
    long testNumber2 = 12345654321;
    long testNumber3 = 12345432;
    std::string testString1 = "abba";
    std::string testString2 = "deified";
    std::string testString3 = "Jumbo";

    RUtility::PalindromeChecker pc;

    std::cout << "Testing " << std::to_string(testNumber1) << ", Is Palindrome: " << pc.CheckPalindrome(testNumber1) << endl;
    std::cout << "Testing " << std::to_string(testNumber2) << ", Is Palindrome: " << pc.CheckPalindrome(testNumber2) << endl;
    std::cout << "Testing " << std::to_string(testNumber3) << ", Is Palindrome: " << pc.CheckPalindrome(testNumber3) << endl;
    std::cout << "Testing " << testString1 << ", Is Palindrome: " << pc.CheckPalindrome(testString1) << endl;
    std::cout << "Testing " << testString2 << ", Is Palindrome: " << pc.CheckPalindrome(testString2) << endl;
    std::cout << "Testing " << testString3 << ", Is Palindrome: " << pc.CheckPalindrome(testString3) << endl;
    
    return 0;
}
