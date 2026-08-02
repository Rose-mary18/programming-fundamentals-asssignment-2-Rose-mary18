// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 6
// =============================================================================
//
// TASK: Multiplication Table Generator
//
// Write a C++ program that generates multiplication tables using loops
// and functions.
//
// -----------------------------------------------------------------------------
// PART A — Single Table
// -----------------------------------------------------------------------------
// - Ask the user to enter a number.
// - Print the multiplication table for that number from 1 to 12.
//
#include <iostream>
using namespace std;

// Part A - Print the multiplication table for a single number
void printTable(int number)
{
    cout << "\nMultiplication Table for " << number << ":\n";

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Part B - Print multiplication tables from 1 to N
void printTables(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printTable(i);

        if (i < n)
        {
            cout << "---------------------------" << endl;
        }
    }
}

int main()
{
    int number, n;

    // Part A
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Number must be a positive integer." << endl;
        return 0;
    }

    printTable(number);

    // Part B
    cout << "\nEnter N to print tables from 1 to N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    cout << endl;
    printTables(n);

    return 0;
}

