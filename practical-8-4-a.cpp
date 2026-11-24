
#include<iostream>
using namespace std;
void displayAscending(int n){
    if(n==0)
    {
        return;
    }
    displayAscending(n-1);
    cout<<n<<" ";

}
void displayDescending(int n){
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    displayDescending(n-1);
}

int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    cout<<"\nNumbers from 1 to "<<n<<" : ";
    displayAscending(n);
    cout<<"\nNumbers from "<<n<<" to 1"<<" : ";
    displayDescending(n);
}

