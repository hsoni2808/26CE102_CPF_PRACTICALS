
#include<iostream>
using namespace std;
int reverseNumber=0;
void reverse(int n){
    if(n==0)
    {
        return;
    }
    int digit = n%10;
    reverseNumber = reverseNumber*10+digit;
    n = n/10;
    reverse(n);
}
int sumOfDigits(int n){
    if(n==0)
    {
        return 0;
    }
    int digit = n%10;
    return digit + sumOfDigits(n/10);
}
int main(){
    int n;
    cout<<"Enter a Positive Number : ";
    cin>>n;
    reverse(n);
    cout<<"Reversed Number is : "<<reverseNumber<<endl;
    int sum = sumOfDigits(n);
    cout<<"Sum of Digits is : "<<sum<<endl;
}
