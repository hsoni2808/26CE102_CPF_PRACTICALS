//practical 8.3
#include<iostream>
using namespace std;

//Part A-----------Factorial iteractive----------------
int factorialIteractive(int n)
{
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=i*fact;
        i++;
    }
    return fact;
}
//-----------recursive-----------------
int factorialRecursive(int n)
{

    if(n==0)
    {
        return 1;
    }

    return n*factorialRecursive(n-1);

}


//Part B---------------Fibonacci Series recursive------------
int fibonacciRecursive(int num)
{
    if(num<=1)
    {
        return num;
    }
    return fibonacciRecursive(num-1)+fibonacciRecursive(num-2);
}
void displayFibonaccirecursive(int num)
{
    for(int i=0; i<num; i++)
    {
        cout<<fibonacciRecursive(i)<<"  ";
    }
}

//-----------iteractive---------------
void fibonacci(int num)
{
    long int term1=0,term2=1,nextterm;
    if(num<=0)
    {
        return ;

    }
    for(int i=0; i<num; i++)
    {
        if(i==0)
        {
            cout<<term1<<"  ";
        }
        else if(i==1)
        {
            cout<<term2<<"  ";
        }
        else
        {
            nextterm=term1+term2;
            cout<<nextterm<<"  ";
            term1=term2;
            term2=nextterm;

        }
    }
}



int main()
{

    //Part A-Factorial
    int n;
    cout<<"Enter Num for Factorial:";
    cin>>n;
    cout<<"Factorial of "<< n<<" in interactive case"<<": "<<factorialIteractive(n)<<endl;
    cout<<"Factorial of "<< n<<" in recursive case"<<": "<<factorialRecursive(n)<<endl<<endl;
    cout<<"------------------------------------------------------------\n\n";

    //Part B-Fibonacci Series
    int num;
    cout<<"Enter Num of Fibonacci Series:";
    cin>>num;
    //recursive............
    cout<<"Recursive case of fibonacci series:";
    displayFibonaccirecursive(num);
    cout<<endl;
    //iterctive............
    cout<<"Iterective case of fibonacci serirs:";
    fibonacci(num);
    cout<<endl<<endl<<endl;

    //Part C-Comparison
    cout<<"--------Comparison---------\n\n";
    cout<<"->> For Factorial:\n";
    cout<<"    1. In Iterative approach and Recursive approach both have one function.\n";
    cout<<"    2. Iterative approach is BEST because Time complexity less than Recursive approach\n\n";

    cout<<"->> For Fibonacci Series:\n";
    cout<<"    1. In Iterative approach have one function and Recursive approach have two function because one for count Fibonacci Series and second display fibonacci series.\n";
    cout<<"    2. Iterative approach is BEST because Time complexity less than Recursive approach\n";







    return 0;
}
