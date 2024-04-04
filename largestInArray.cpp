// Find the Largest Element in an Array: Write a function that takes an array of integers as input and returns the largest element in the array.#include <iostream>
#include <iostream>
#include <climits>
using namespace std;

int largestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {4, 6, 10, 9, 2};
    cout << "the largest element is" << largestElement(arr, 5);
    return 0;
}
