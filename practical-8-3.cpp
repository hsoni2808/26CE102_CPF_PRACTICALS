#include <iostream>
using namespace std;

// Counts the number of recursive function calls
int recursiveCalls = 0;

// Recursive Factorial
int factorialRecursive(int n)
{
    recursiveCalls++;

    if(n == 0 || n == 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

// Iterative Factorial
int factorialIterative(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

// Recursive Fibonacci
int fibonacciRecursive(int n)
{
    recursiveCalls++;

    if(n <= 1)
        return n;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative Fibonacci Series
void fibonacciIterative(int n)
{
    int a = 0, b = 1, c;

    for(int i = 0; i < n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // PART A: FACTORIAL

    cout << "\n----- FACTORIAL -----\n";

    cout << "Iterative Factorial = "
         << factorialIterative(n) << endl;

    recursiveCalls = 0;

    cout << "Recursive Factorial = "
         << factorialRecursive(n) << endl;

    cout << "Recursive Function Calls = "
         << recursiveCalls << endl;

    // PART B: FIBONACCI SERIES

    cout << "\n----- FIBONACCI SERIES -----\n";

    cout << "Iterative Series: ";
    fibonacciIterative(n);

    cout << endl;

    cout << "Recursive Series: ";

    recursiveCalls = 0;

    for(int i = 0; i < n; i++)
    {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << endl;

    cout << "Recursive Function Calls = "
         << recursiveCalls << endl;

    // PART C: COMPARISON

    cout << "\n----- COMPARISON -----\n";

    cout << "1. Function Calls:\n";
    cout << "   Iterative -> Few calls\n";
    cout << "   Recursive -> More calls\n\n";

    cout << "2. Readability:\n";
    cout << "   Recursive code is shorter and mathematical.\n";
    cout << "   Iterative code is straightforward.\n\n";

    cout << "3. Code Complexity:\n";
    cout << "   Iterative -> Simple loops.\n";
    cout << "   Recursive -> Base case + recursive call.\n\n";

    cout << "4. Execution Flow:\n";
    cout << "   Iterative -> Top to Bottom.\n";
    cout << "   Recursive -> Uses Call Stack.\n";

    return 0;
}
