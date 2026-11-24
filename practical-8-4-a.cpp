#include<iostream>
using namespace std;

// Function to display numbers in ascending order
void displayAscending(int n)
{
    if(n == 0)
    {
        return;
    }

    displayAscending(n - 1);
    cout << n << " ";
}

// Function to display numbers in descending order
void displayDescending(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";
    displayDescending(n - 1);
}

int main()
{
    int n;

    // Accept input from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Display numbers from 1 to n
    cout << "\nNumbers from 1 to " << n << " : ";
    displayAscending(n);

    // Display numbers from n to 1
    cout << "\nNumbers from " << n << " to 1 : ";
    displayDescending(n);

    return 0;
}
