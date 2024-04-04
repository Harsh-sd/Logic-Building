// Calculate Factorial: Write a function to calculate the factorial of a non-negative integer. The factorial of a number n is the product of all positive integers less than or equal to n. For example, the factorial of 5 (written as 5!) is 5 × 4 × 3 × 2 × 1 = 120.
#include <iostream>

using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    cout << factorial(5);
    return 0;
}