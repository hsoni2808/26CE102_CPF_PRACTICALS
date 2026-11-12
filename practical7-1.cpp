
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main ()
{
    short int i,j;
    char enroll_no[8],stu_name[25],Branch [3],temp[33],firstname[25],lastname[25],keyword[25];
    cout<<"******************************************************\n";
    cout<<"Student record management system \n";
    cout<<"******************************************************\n";
    cout<<endl;

    cout<<"Enter Enrollment number  : ";
    cin>>enroll_no;
    cin.ignore();
    cout<<"Enter Student name : ";
    cin.getline(stu_name,25);
    cout<<"Enter Branch : ";
    cin>>Branch;
    cout<<endl;


    cout<<"------------------------------------------------------\n";
    cout<<"Student Refrence ";
    cout<<endl;
    for(i=0;stu_name[i]!='\0';i++)
    {
        temp[i]=stu_name[i];
    }
    temp[i]='- ';
    i++;

    for(j=0;enroll_no[j]!='\0';j++,i++)
    {
        temp[i]=enroll_no[j];
    }
    temp[i]='\0';
    cout<<temp;
    cout<<endl;
    cout<<"----------------------------------------------------\n";
    cout<<"First name ";
    cout<<endl;
    for(i=0;stu_name[i]!=' ' && stu_name[i]!='\0';i++)
    {
        firstname[i]=stu_name[i];
    }
    firstname[i]='\0';
    cout<<firstname<<endl;
    cout<<"Last Name ";
    cout<<endl;
    for(j=0; stu_name[i]!='\0';i++,j++)
    {
        lastname[j]=stu_name[i];
    }
    lastname[i]='\0';
    cout<<lastname<<endl;
    cout<<"Enter keyword : ";
    cin>>keyword;
     int  found =0;
    for(i=0;stu_name[i]!='\0';i++)
    {
        j=0;
        while(stu_name[i+j]!='\0' && keyword[j]!='\0' && stu_name[i+j]==keyword[j])
        {
            j++;
        }
        if(keyword[j]=='\0')
        {
            found = 1;
            break;
        }
    }
     if (found)
     {
         cout << "Keyword found\n";

     }
     else
     {
            cout << "Keyword not found\n";
     }
     cout<<"----------------------------------------------------\n";
     cout<<"Student Report "<<endl;
     cout<<"Enrollment Number : "<<enroll_no<<endl;
     cout<<"Student Name : "<<stu_name<<endl;
     cout<<"Enter Branch : "<<Branch<<endl;

    return 0;

}
