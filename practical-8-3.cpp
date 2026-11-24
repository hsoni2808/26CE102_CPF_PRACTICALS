#include<iostream>
using namespace std;

int factorialiterative(int n)

{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int factorialRecursive(int n)
{

    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorialRecursive(n-1);
}
int main()
{
    int n,r,I;
    cin>>n;
    I=factorialiterative(n);
    r=factorialRecursive(n);
    cout<<"factorial Iterative : "<<I<<endl;
    cout<<"Factorial Recursive : "<<r;
    return 0;

}

