// Check if a string or number is a palindrome
#include "palindrome.h"

namespace RUtility
{
    bool PalindromeChecker::IsPalindrome(int n)
    {
        long reverse = 0;

        long temp = long(n);
        while (temp != 0)
        {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        return (reverse == long(n));
    }

    bool PalindromeChecker::IsPalindrome(long n)
    {
        long reverse = 0;

        long temp = n;
        while (temp != 0)
        {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        return (reverse == n);
    }

    bool PalindromeChecker::IsPalindrome(std::string s)
    {
        int length = s.length();

        std::string reverse = "";
        std::string temp = s;

        for (int i = length - 1; i >= 0; i--)
        {
            reverse += temp[i];
        }

        return (reverse == s);
    }
}
