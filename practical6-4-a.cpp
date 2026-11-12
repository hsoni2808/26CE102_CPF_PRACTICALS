#include<iostream>
using namespace std;
int main()
{
    //Variable declaration
    int i, j,k;
    int A[3][3], B[3][3], C[3][3];
    //Taking input from the user for entering values in matrix 1
    cout<<"Enter elements of first matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
    }
    //Taking input from the user for entering values in matrix 2
    cout<<"Enter elements of second matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>B[i][j];
        }
    }
    //calculating resultant matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j]=0;
            for(k=0; k<3; k++)
            {
                C[i][j]= C[i][j]+ A[i][k] * B[k][j];
            }
        }
    }
    cout<<"**********************************"<<endl;
    cout<<"   MATRIX MULTIPLICATION"<<endl;
    cout<<"**********************************"<<endl;

    cout<<"First matrix"<<endl;
    //First matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //Second matrix
    cout<<"Second matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    // resultant matrix
    cout<<"Resultant matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<C[i][j]<<" ";

        }
        cout<<endl;

    }

}
