// Find the Second Largest Element in an Array: Write a function that takes an array of integers as input and returns the second largest element in the array.
#include <iostream>

using namespace std;

int secondLargestElement(int arr[], int n)
{
    int largest = arr[0];
    int secondlargest = arr[1];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    int arr[] = {4, 6, 10, 9, 2};
    cout << "the  second largest element is " << secondLargestElement(arr, 5);
    return 0;
}