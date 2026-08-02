// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
#include <iostream>
using namespace std;

// Function to calculate the sum
int getSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to calculate the average
double getAverage(int arr[], int size)
{
    return (double)getSum(arr, size) / size;
}

// Function to find the maximum value
int getMaximum(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the minimum value
int getMinimum(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of elements must be positive." << endl;
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum:     " << getSum(numbers, n) << endl;
    cout << "Average: " << getAverage(numbers, n) << endl;
    cout << "Maximum: " << getMaximum(numbers, n) << endl;
    cout << "Minimum: " << getMinimum(numbers, n) << endl;

    return 0;
}

