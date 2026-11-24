#include<iostream>
using namespace std;
void binary(int n){
    if(n>1)
    {
        cout<<"Before recursive call value of n= "<<n<<endl;
        binary(n/2);
    }
    cout<<n%2;
}
int main(){
    int n;
    cout<<"Enter a Decimal Number : ";
    cin>>n;
    if(n<0)
    {
        cout<<"Please enter a positive number."<<endl;
        return 0;
    }
    else{
        cout<<"Binary Representation: "<<endl;
        if(n==0)
        cout<<"0";
    else
    binary(n);
    }
    cout<<endl;
    return 0;
}
