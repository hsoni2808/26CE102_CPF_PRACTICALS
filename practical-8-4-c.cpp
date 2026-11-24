#include<iostream>
using namespace std;

// Recursive function to convert decimal number into binary
void binary(int n)
{
    // Recursive case: Divide the number by 2 until n becomes 1 or 0
    if(n > 1)
    {
        // Display the value of n before making the recursive call
        cout << "Before recursive call value of n= " << n << endl;

        binary(n / 2);
    }

    // Print the remainder to form the binary representation
    cout << n % 2;
}

int main()
{
    int n;

    // Accept a decimal number from the user
    cout << "Enter a Decimal Number : ";
    cin >> n;

    // Check whether the entered number is negative
    if(n < 0)
    {
        cout << "Please enter a positive number." << endl;
        return 0;
    }
    else
    {
        // Display the binary representation
        cout << "Binary Representation: " << endl;

        // Handle zero as a special case
        if(n == 0)
            cout << "0";
        else
            binary(n);
    }

    cout << endl;
    return 0;
}
