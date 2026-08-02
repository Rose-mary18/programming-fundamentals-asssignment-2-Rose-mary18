// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to input a matrix
void inputMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Part A - Transpose a Matrix
void transposeMatrix(int matrix[10][10], int rows, int cols)
{
    int transpose[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:\n";
    displayMatrix(transpose, cols, rows);
}

// Part B - Add Two Matrices
void addMatrices(int A[10][10], int B[10][10], int rows, int cols)
{
    int sum[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nSum of Matrices:\n";
    displayMatrix(sum, rows, cols);
}

// Part C - Multiply Two Matrices
void multiplyMatrices(int A[10][10], int B[10][10], int M, int N, int P)
{
    int product[10][10];

    // Initialize result matrix
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            for (int k = 0; k < N; k++)
            {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nProduct of Matrices:\n";
    displayMatrix(product, M, P);
}

int main()
{
    int choice;

    cout << "Matrix Operations\n";
    cout << "1. Transpose Matrix\n";
    cout << "2. Add Two Matrices\n";
    cout << "3. Multiply Two Matrices\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int rows, cols;
        int matrix[10][10];

        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        inputMatrix(matrix, rows, cols);

        cout << "\nOriginal Matrix:\n";
        displayMatrix(matrix, rows, cols);

        transposeMatrix(matrix, rows, cols);
    }
    else if (choice == 2)
    {
        int rows, cols;
        int A[10][10], B[10][10];

        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        cout << "\nEnter Matrix A:\n";
        inputMatrix(A, rows, cols);

        cout << "\nEnter Matrix B:\n";
        inputMatrix(B, rows, cols);

        addMatrices(A, B, rows, cols);
    }
    else if (choice == 3)
    {
        int M, N, P;
        int A[10][10], B[10][10];

        cout << "Enter rows of Matrix A: ";
        cin >> M;
        cout << "Enter columns of Matrix A: ";
        cin >> N;

        cout << "\nEnter Matrix A:\n";
        inputMatrix(A, M, N);

        cout << "\nEnter columns of Matrix B: ";
        cin >> P;

        cout << "\nMatrix B will have " << N << " rows and " << P << " columns.\n";

        inputMatrix(B, N, P);

        multiplyMatrices(A, B, M, N, P);
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

