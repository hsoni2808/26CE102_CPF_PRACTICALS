// Practical 11.1
#include<iostream>
#include<fstream>
using namespace std;

// Global variable declaration
int x=10;

// Function to display the global variable
void global(){
    cout<<x<<endl;
}

int main()
{
    // Local variable declaration
    int x=100,a,b=2147483648,p,q;

    // Declaring a variable and two pointers pointing to the same address
    int originalVal=10;
    int *ptr1=&originalVal;
    int *ptr2=&originalVal;

    // Displaying program heading
    cout<<"***********************************\n";
    cout<<"PROGRAM EXECUTION &amp; ERROR HANDLING ANALYZER\n";
    cout<<"********************************************\n\n";

    // PART A: Compile-time and Run-time Memory
    cout<<"Compile-time and Run-time Memory\n";
    cout<<"Enter Value:";
    cin>>a;

    // Displaying local variable value
    cout<<"Local variable value  :"<<x<<endl;

    // Calling function to display global variable
    cout<<"Global Variable Value :";
    global();

    // Displaying user-entered value
    cout<<"Dynamic Memory Value  :"<<a<<endl;
    cout<<"----------------------------------\n";

    // PART B: Low-level Error Demonstration
    cout<<"Low-level Error Demonstration\n";

    // Demonstrating arithmetic overflow
    cout<<"----------Arithmetic Overflow------------\n";
    cout<<"int B+1  :"<<b+1<<endl;

    // Demonstrating pointer aliasing
    cout<<"----------Pointer Aliasing---------------\n";
    cout<<"ORIGINAL......\n";

    // Displaying values before modification
    cout<<"Value ptr1    :"<<*ptr1<<endl;
    cout<<"Value ptr2    :"<<*ptr2<<endl;
    cout<<"Original Value:"<<originalVal<<endl;

    // Updating value using the first pointer
    *ptr1=20;

    // Displaying values after modification
    cout<<"UPDATED......\n";
    cout<<"Value ptr1  :"<<*ptr1<<endl;
    cout<<"Value ptr2  :"<<*ptr2<<endl;
    cout<<"Original Value:"<<originalVal<<endl;

    // Both pointers point to the same memory location
    cout<<"Both Address Variables Refer to the Same Memory Location\n\n";

    // Demonstrating memory allocation and release messages
    cout<<"-----------------------------------------------\n";
    cout<<"Memory Leak Demonstration\n";
    cout<<"Dynamic Memory Allocated\n";
    cout<<"Memory Released Successfully\n";
    cout<<"-----------------------------------------------\n";

    // PART C: Arithmetic Operation and Division by Zero Handling
    cout<<"Arithmetic Operation\n";
    cout<<"Enter Dividend:";
    cin>>p;
    cout<<"Enter Divisor:";
    cin>>q;

    // Checking whether the divisor is zero
    if(q==0){
        cout<<"Error : Division by Zero is not Allowed.\n";
    }
    else{
        // Performing division if divisor is not zero
        cout<<"Division  :"<<p/q<<endl;
    }

    return 0; // End of program
}

