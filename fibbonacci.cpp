// Fibonacci Sequence: Write a function to generate the Fibonacci sequence up to a specified number of terms. The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, starting with 0 and 1. So, the sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on
#include <iostream>

using namespace std;
int fibb(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    cout << "The output will be" << fibb(8);
    return 0;
}