// Check if a string is a Palindrome
#include <iostream>
#include <string>

using namespace std;

namespace RUtility
{
    class PalindromeChecker
    {
        public:

        bool checkPalindrome(int n)
        {
            int reverse = 0;

            int temp = n;
            while (temp != 0)
            {
                reverse = (reverse * 10) + (temp % 10);
                temp = temp / 10;
            }
            return (reverse == n);
        }

        bool checkPalindrome(string s)
        {
            int length = s.length();

            string reverse = "";
            string temp = s;

            for (int i = length - 1; i >= 0; i--)
            {
                reverse += temp[i];
            }

            return (reverse == s);
        }
    };
}

int main()
{
    int testNumber1 = 1234554321;
    int testNumber2 = 12345654321;
    int testNumber3 = 12345432;
    string testString1 = "abba";
    string testString2 = "deified";
    string testString3 = "Jumbo";

    RUtility::PalindromeChecker pc;

    cout << "Testing " << to_string(testNumber1) << ", Is Palindrome: " << pc.checkPalindrome(testNumber1) << endl;
    cout << "Testing " << to_string(testNumber2) << ", Is Palindrome: " << pc.checkPalindrome(testNumber2) << endl;
    cout << "Testing " << to_string(testNumber3) << ", Is Palindrome: " << pc.checkPalindrome(testNumber3) << endl;
    cout << "Testing " << testString1 << ", Is Palindrome: " << pc.checkPalindrome(testString1) << endl;
    cout << "Testing " << testString2 << ", Is Palindrome: " << pc.checkPalindrome(testString2) << endl;
    cout << "Testing " << testString3 << ", Is Palindrome: " << pc.checkPalindrome(testString3) << endl;
}

