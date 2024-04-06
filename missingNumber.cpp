#include <iostream>

using namespace std;
// sum function to total the elements of the array
int sum(int arr[], int n)
{
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
    }
    return arr_sum;
}

int find_missing_number(int arr[], int n)
{
    // to total the elements from 1 to n by increasing n to n+1.
    int total = (n + 1) * (n + 2) / 2; // Use n + 1 for the total sum calculation
    int array_sum = sum(arr, n);       // Pass n as it is
    int number = total - array_sum;
    return number;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find_missing_number(arr, n);

    return 0;
}
// result is:4