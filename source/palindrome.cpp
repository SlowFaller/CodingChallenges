// Check if a string or number is a palindrome
#include "palindrome.h"

namespace RUtility
{
    class PalindromeChecker
    {
        public:

        bool CheckPalindrome(long n)
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

        bool checkPalindrome(std::string s)
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
    };
}
