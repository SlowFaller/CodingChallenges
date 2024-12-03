#pragma once
#include <string>

namespace RUtility
{
    class PalindromeChecker
    {
    public:
        PalindromeChecker();
        ~PalindromeChecker();
        bool IsPalindrome(int);
        bool IsPalindrome(long);
        bool IsPalindrome(std::string);
    };
    
    PalindromeChecker::PalindromeChecker()
    {
    }
    
    PalindromeChecker::~PalindromeChecker()
    {
    }
    
} // namespace RUtility
