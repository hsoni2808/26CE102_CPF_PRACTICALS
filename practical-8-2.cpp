#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
cout<<"-----------------------------------------------"<<endl;
cout<<"Function Design and Parameter Passing Analyzer"<<endl;
cout<<"-----------------------------------------------"<<endl;

// Function without Parameters and without Return Value.
void addsum()
{
    int a=100,b=200,sum;
    sum=a+b;
    cout<<sum;
}

// Function without Parameters and with Return Value.
int addsum_with_return_value()
{
    int a=100,b=200,sum;
    sum=a+b;
    return sum;   // FIXED: return the value instead of printing it
}

// Function with Parameters and without Return Value.
void addsum_with_parameters(int a,int b)
{
    int sum=a+b;
    cout<<sum;
}

// Function with Parameters and with Return Value.
int addsum_with_Both(int a, int b)
{
    int sum=a+b;
    return sum;
}

// Pass by value
void call_by_value(int x)
{
    x=100;
    cout<<"Inside Function : "<<x<<endl;
}

// Pass by reference
void call_by_reference(int &y)
{
    y=200;
    cout<<"Inside Function : "<<y<<endl;
}

// Scope and visibility
int z;   // global variable

void function_1()
{
    z=500;   // changes the global variable
    cout<<"Inside Function 1 : "<<z<<endl;
}

void function_2()
{
    int z=600;   // local variable (hides the global z here)
    function_1();
    cout<<"Inside Function 2 : "<<z<<endl;
}

int main()
{
    // Part A
    cout<<"Function without Parameters and without Return Value : ";
    addsum();
    cout<<endl;

    cout<<"Function without Parameters and with Return Value : "<<addsum_with_return_value();
    cout<<endl;

    cout<<"Function with Parameters and without Return Value : ";
    addsum_with_parameters(100,200);
    cout<<endl;

    cout<<"Function with Parameters and with Return Value : "<<addsum_with_Both(100,200)
        <<endl;

    // Part B
    // Call by value
    cout<<"-----------------Call by value-------------------"<<endl;
    int x=50;
    cout<<"Before : "<<x<<endl;   // FIXED: Before/After labels were swapped
    call_by_value(x);
    cout<<"After : "<<x<<endl;

    // Call by reference
    cout<<"-----------------Call by reference-------------------"<<endl;
    int y=30;
    cout<<"Before : "<<y<<endl;
    call_by_reference(y);
    cout<<"After : "<<y<<endl;

    // Part C
    // Global and local variable
    cout<<"-----------------Scope and Visibility-------------------"<<endl;
    z=1000;   // FIXED comment: this is the global variable
    cout<<"Before : "<<z<<endl;
    function_2();
    cout<<"After : "<<z<<endl;

    return 0;
}
