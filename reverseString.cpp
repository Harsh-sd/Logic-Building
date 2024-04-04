// Reverse a String: Write a function that takes a string as input and returns the string reversed. For example, if the input is "hello", the output should be "olleh".
#include <iostream>
#include <string>
using namespace std;
void reverseString(string s)
{

    int n = s.length();
    if (n == 0)
    {
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}
int main()
{
    string s = "hello";
    reverseString(s);
    return 0;
}
//olleh