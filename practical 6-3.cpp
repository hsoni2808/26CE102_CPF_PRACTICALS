#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
     bool found = false ;
    int n,i,ch,pos,j;
    char name[10][25],ID[10][8],grade[10][3];
    char newgrade[10][3], searchID[10][8];
    float per[10],newper[10];
    cout<<"*************************************************************\n";
    cout<<"Student record management system\n";
    cout<<"*************************************************************\n";
    cout<<"Enter Number of Students : ";
    cin>>n;
    M:
        cout<<"1 : Insert Student Details "<<endl;
        cout<<"2 : update Student Details "<<endl;
        cout<<"3 : Delete Student Details "<<endl;
        cout<<"4 : Exit "<<endl;
        cout<<"Enter choice : ";
        cin>>ch;

    switch(ch)
    {
    case 1 :

    cout<<"Enter Student Details";
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Enter student ID : ";
        cin>>ID[i];
        cin.ignore();
        cout<<"Enter student name : ";
        cin.getline(name[i],25);
        cout<<"Enter percentage : ";
        cin>>per[i];
        if (per[i]>95)
        {
            strcpy(grade[i],"O");
        }
        else if (per[i]>90)
        {
            strcpy(grade[i],"A+");
        }
        else if (per[i]>85)
        {
            strcpy(grade[i],"A");
        }
        else if (per[i]>80)
        {
            strcpy(grade[i],"B+");
        }
        else if (per[i]>75)
        {
            strcpy(grade[i],"B");
        }
        else if (per[i]>60)
        {
            strcpy(grade[i],"C");
        }
        else if (per[i]>50)
        {
            strcpy(grade[i],"D");
        }
        else if (per[i]>40)
        {
            strcpy(grade[i],"Pass");
        }
        else
        {
        strcpy(grade[i],"Fail");
        }
        cout<<"Enter Grade : "<<grade[i]<<endl;

    }
    for(i=0; i<n; i++)
    {
        cout<<ID[i]<<left<<setw(15)<<name[i]<<left<<setw(15)<<per[i]<<left<<setw(15)<<grade[i]<<endl;
    }
    cout<<"------------------------------------------------------------\n";
    goto M;
    case 2:


    cout<<"Inser new student \n";
    cout<<"Enter Position : ";
    cin>>pos;
    for(i=n; i>=pos; i--)
    {
        strcpy(ID[i],ID[i-1]);
        strcpy(name[i],name[i-1]);
        per[i]=per[i-1];
        strcpy(grade[i],grade[i-1]);
    }
    cout<<"Enter student id : ";
    cin>>ID[pos-1];
    cin.ignore();
    cout<<"Enter Student name : ";
    cin.getline(name[pos-1],25);
    cout<<"Enter per : ";
    cin>>per[pos-1];
    if (per[pos-1]>95)
    {
        strcpy(grade[pos-1],"O");
    }
    else if (per[pos-1]>90)
    {
        strcpy(grade[pos-1],"A+");
    }
    else if (per[pos-1]>85)
    {
        strcpy(grade[pos-1],"A");
    }
    else if (per[pos-1]>80)
    {
        strcpy(grade[pos-1],"B+");
    }
    else if (per[pos-1]>75)
    {
        strcpy(grade[pos-1],"B");
    }
    else if (per[pos-1]>60)
    {
        strcpy(grade[pos-1],"C");
    }
    else if (per[pos-1]>50)
    {
        strcpy(grade[pos-1],"D");
    }
    else if (per[pos-1]>40)
    {
        strcpy(grade[pos-1],"Pass");
    }
    else
    {
    strcpy(grade[pos-1],"Fail");
    }
    n++;
    cout<<"Enter Grade : "<<grade[i]<<endl;
    cout<<"Record insereted succesfully\n";
    cout<<"------------------------------------------------------------\n";
    cout<<"Upated Student Records \n";
    for(i=0; i<n; i++)
    {
        cout<<ID[i]<<"   "<<name[i]<<"   "<<per[i]<<"   "<<endl;
    }
    cout<<"------------------------------------------------------------\n";
    goto M;
    case 3:

    cout<<"Update student Records\n";
    cout<<"Enter Search ID";
    cin>>searchID[i];
    for(i=0; i<n; i++)
    {
        if(strcmp(ID[i],searchID[i])==0)
        {
            cout<<"Enter New percentage : ";
            cin>>newper[i];
            if (newper[i]>95)
            {
                strcpy(newgrade[i],"O");
            }
            else if (newper[i]>90)
            {
                strcpy(newgrade[i],"A+");
            }
            else if (newper[i]>85)
            {
                strcpy(newgrade[i],"A");
            }
            else if (newper[i]>80)
            {
                strcpy(newgrade[i],"B+");
            }
            else if (newper[i]>75)
            {
                strcpy(newgrade[i],"B");
            }
            else if (newper[i]>60)
            {
                strcpy(newgrade[i],"C");
            }
            else if (newper[i]>50)
            {
                strcpy(newgrade[i],"D");
            }
            else if (newper[i]>40)
            {
                strcpy(newgrade[i],"Pass");
            }
            else
            {
            strcpy(newgrade[i],"Fail");
            }
            cout<<"enter newgrade : "<<newgrade[i]<<endl;
        }
    }
     cout<<"------------------------------------------------------------\n";
     cout<<"delete Student Record \n";
     bool found = false ;
     for(i=0;i<n;i++)
     {

         if (strcmp(ID[i],searchID[i+1])==0)
         {
             found = true;
             for(j=i;j<n-1;j++)
             {
                strcpy(ID[j],ID[j+1]);
                strcpy(name[j],name[j+1]);
                per[j]=per[j+1];
                strcpy(grade[j],grade[j+1]);
             }
         n--;
          cout<<"Record Deleted Succesfully\n";
          break;
         }
     }
     if (!found)
     {


         cout<<"Record not found ";
     }

         cout<<"------------------------------------------------------------\n";


         cout<<"Final Student Records \n";
         cout<<endl;

           for (i = 0; i < n; i++)
           {
                    cout << ID[i] << "   " << name[i] << "   " << per[i] << "   " << grade[i] << endl;
           }
        cout << "------------------------------------------------------------\n";
        goto M;

        cout<<"Exiting  The program";
        break;

    }
}
