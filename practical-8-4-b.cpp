#include<iostream>
using namespace std;

// Global variable to store the reversed number
int reverseNumber = 0;

// Recursive function to reverse a number
void reverse(int n)
{
    // Base case: Stop when the number becomes 0
    if(n == 0)
    {
        return;
    }

    // Extract the last digit and add it to the reversed number
    int digit = n % 10;
    reverseNumber = reverseNumber * 10 + digit;

    // Remove the last digit and call the function recursively
    n = n / 10;
    reverse(n);
}

// Recursive function to calculate the sum of digits
int sumOfDigits(int n)
{
    // Base case: Return 0 when the number becomes 0
    if(n == 0)
    {
        return 0;
    }

    // Extract the last digit and add the sum of remaining digits
    int digit = n % 10;
    return digit + sumOfDigits(n / 10);
}

int main()
{
    int n;

    // Accept a positive number from the user
    cout << "Enter a Positive Number : ";
    cin >> n;

    // Display the reversed number
    reverse(n);
    cout << "Reversed Number is : " << reverseNumber << endl;

    // Calculate and display the sum of digits
    int sum = sumOfDigits(n);
    cout << "Sum of Digits is : " << sum << endl;
}
