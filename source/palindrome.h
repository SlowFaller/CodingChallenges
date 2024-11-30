#pragma once
#include <string>

namespace RUtility
{
    class PalindromeChecker
    {
    public:
        PalindromeChecker();
        ~PalindromeChecker();
        void CheckPalindrome(int);
        void CheckPalindrome(long);
        void CheckPalindrome(std::string);
    };
    
    PalindromeChecker::PalindromeChecker()
    {
    }
    
    PalindromeChecker::~PalindromeChecker()
    {
    }
    
} // namespace RUtility
