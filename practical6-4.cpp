#include<iostream>
using namespace std;
int main()
{
    int nums[20],newnums[20];
    int k=0,i,j,n,f;
    cout<<"Enter the input numbers : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>nums[i];
    }
    cout<<endl;
    for (i=0;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(nums[i]==newnums[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            k++;
            newnums[i]=nums[i];
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<newnums[i];
    }
}
