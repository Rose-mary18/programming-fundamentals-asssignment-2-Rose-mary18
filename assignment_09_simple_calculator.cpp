// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function for addition
double add(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function for division
double divide(double a, double b)
{
    return a / b;
}

// Function for modulus
int modulus(int a, int b)
{
    return a % b;
}

// Function for exponentiation
double power(double a, double b)
{
    return pow(a, b);
}

int main()
{
    int choice;
    double num1, num2;
    int int1, int2;

    do
    {
        cout << "\n============================" << endl;
        cout << "     SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " + " << num2
                 << " = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " - " << num2
                 << " = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " * " << num2
                 << " = " << multiply(num1, num2) << endl;
            break;

        case 4:
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            if (num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " / " << num2
                     << " = " << divide(num1, num2) << endl;
            }
            break;

        case 5:
            cout << "Enter first integer : ";
            cin >> int1;
            cout << "Enter second integer: ";
            cin >> int2;

            if (int2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << "Result: " << int1 << " % " << int2
                     << " = " << modulus(int1, int2) << endl;
            }
            break;

        case 6:
            cout << "Enter base : ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;

            cout << fixed << setprecision(2);
            cout << "Result: " << num1 << " ^ " << num2
                 << " = " << power(num1, num2) << endl;
            break;

        case 7:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Error: Invalid menu choice." << endl;
        }

    } while (choice != 7);

    return 0;
}

