// Check for Palindrome: Write a function that checks if a given string is a palindrome. A palindrome is a word that reads the same backward as forward. For example, "radar" is a palindrome
#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string s)
{

    int n = s.length();
    // if not any element in the string
    if (n == 0)
    {
        return false;
    }
    // only till mid because we have to compare after that
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "radar";
    if (checkPalindrome(s))
    {
        cout << "it is palindrome";
    }
    else
    {
        cout << "it is not palindrome";
    }
    return 0;
}