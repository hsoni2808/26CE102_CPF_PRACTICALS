#include<iostream>
using namespace std;
int main()
{
    int a[5], b[5], c[10], i, n1, n2, j, temp;
    //No of elements in array 1
    cout<<"How many elements in first array ";
    cin>>n1;
    //No of elements in array 1
    cout<<"How many elements in second array ";
    cin>>n2;
//Taking elements as input
    cout<<"Enter elements of first array ";
    for(i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter elements of second array ";
    for(i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    //created a new array and kept values of array1 and array 2 in the new array
    for(i=0; i<n1; i++)
    {
        c[i]=a[i];
    }
    for(i=0; i<n2; i++)
    {
        c[i+n1]=b[i];
    }
    // sorting the new array
    for(i=0; i<(n1+n2); i++)
    {
        for(j=i+1; j<(n1+n2); j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    cout<<"Sorted array is ";
    for(i=0; i<(n1+n2); i++)
    {
        cout<<c[i]<<" ";

}
}
