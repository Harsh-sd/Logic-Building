// Calculate the Sum of Digits of a Number: Write a function that takes an integer as input and returns the sum of its digits. For example, the sum of digits of 123 is 1 + 2 + 3 = 6.
#include <iostream>
using namespace std;
int sumDigits(int number)
{
    int ans = 0;
    // converting the number into string
    string numString = to_string(number);

    for (int i = 0; i < numString.length(); i++)
    {
        // converting the character digit to the integer equivalent
        ans += numString[i] - '0';
    }
    return ans;
}
int main()
{
    int number = 232;
    cout << sumDigits(number);
    return 0;
}
// result is :7