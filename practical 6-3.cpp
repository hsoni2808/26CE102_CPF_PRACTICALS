
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
    // Variable declaration
    short int n,ch,pos,dpos;

    // Arrays to store student ID, grade and name
    char stu_id[10][7], grade[10][3], stu_name[10][20];

    // Array to store percentage
    float per[10];

    // Variables for searching and temporary storage
    char nid[7];
    int found;

    // Display heading
    cout<<"*************************************************\n";
    cout<<"       STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*************************************************\n";

    // Accept number of students
    cout<<"Enter Number of Students: ";
    cin>>n;

    // Validate number of students
    if(n<=0 || n>10)
    {
        cout<<"Invalid number of students";
        return 0;
    }

    // Accept student details
    cout<<"Students Details\n";

    for(int i=0; i<n; i++)
    {
        cout<<"Enter ID: ";
        cin>>setw(7)>>stu_id[i];

        cout<<"Enter Name: ";
        cin.ignore();
        cin.getline(stu_name[i],20);

        // Accept and validate percentage
        P:
        cout<<"Enter Percentage: ";
        cin>>per[i];

        if(per[i]<0 || per[i]>100)
        {
            cout<<"Invalid percentage\n";
            goto P;
        }

        // Assign grade according to percentage
        if(per[i]>90)
        {
            strcpy(grade[i],"O");
        }
        else if(per[i]>80)
        {
            strcpy(grade[i],"A+");
        }
        else if(per[i]>70)
        {
            strcpy(grade[i],"A");
        }
        else if(per[i]>60)
        {
            strcpy(grade[i],"B+");
        }
        else if(per[i]>50)
        {
            strcpy(grade[i],"B");
        }
        else if(per[i]>45)
        {
            strcpy(grade[i],"C");
        }
        else
        {
            strcpy(grade[i],"F");
        }
    }

    // Display student records
    cout<<"*************************************************\n";
    cout<<"             STUDENT DETAILS\n";
    cout<<"*************************************************\n";

    for(int i=0; i<n; i++)
    {
        cout<<stu_id[i]<<"\t"
            <<stu_name[i]<<"\t"
            <<per[i]<<"\t"
            <<grade[i]<<endl;
    }

    // Menu-driven operations
    do
    {
        cout<<"\n------------------------------------------\n";
        cout<<"1. Insert New Student\n";
        cout<<"2. Delete Student\n";
        cout<<"3. Update Student\n";
        cout<<"4. Exit\n";
        cout<<"Enter your Choice: ";
        cin>>ch;

        switch(ch)
        {

        // CASE 1: INSERT NEW STUDENT
        case 1:

            cout<<"------------------------------------------\n";
            cout<<"          Insert New Student\n";

            // Check whether array has space
            if(n>=10)
            {
                cout<<"Student record is full\n";
                break;
            }

            cout<<"Enter Position: ";
            cin>>pos;

            // Validate insertion position
            if(pos<1 || pos>n+1)
            {
                cout<<"INVALID POSITION\n";
                break;
            }

            // Convert position into array index
            pos--;

            // Shift existing records towards right
            for(int i=n; i>pos; i--)
            {
                strcpy(stu_id[i],stu_id[i-1]);
                strcpy(stu_name[i],stu_name[i-1]);
                per[i]=per[i-1];
                strcpy(grade[i],grade[i-1]);
            }

            // Accept new student details
            cout<<"Enter ID: ";
            cin>>setw(7)>>stu_id[pos];

            cout<<"Enter Name: ";
            cin.ignore();
            cin.getline(stu_name[pos],20);

            // Accept percentage
            Y:
            cout<<"Enter Percentage: ";
            cin>>per[pos];

            if(per[pos]<0 || per[pos]>100)
            {
                cout<<"Invalid percentage\n";
                goto Y;
            }

            // Assign grade
            if(per[pos]>90)
            {
                strcpy(grade[pos],"O");
            }
            else if(per[pos]>80)
            {
                strcpy(grade[pos],"A+");
            }
            else if(per[pos]>70)
            {
                strcpy(grade[pos],"A");
            }
            else if(per[pos]>60)
            {
                strcpy(grade[pos],"B+");
            }
            else if(per[pos]>50)
            {
                strcpy(grade[pos],"B");
            }
            else if(per[pos]>45)
            {
                strcpy(grade[pos],"C");
            }
            else
            {
                strcpy(grade[pos],"F");
            }

            // Increase number of students
            n++;

            cout<<"Record Inserted Successfully\n";

            // Display updated records
            cout<<"Updated Student Records\n";

            for(int i=0; i<n; i++)
            {
                cout<<stu_id[i]<<"\t"
                    <<stu_name[i]<<"\t"
                    <<per[i]<<"\t"
                    <<grade[i]<<endl;
            }

            break;


        // CASE 2: DELETE STUDENT
        case 2:

            cout<<"------------------------------------------\n";
            cout<<"          Delete Student Record\n";

            cout<<"Enter Position: ";
            cin>>dpos;

            // Validate deletion position
            if(dpos<1 || dpos>n)
            {
                cout<<"INVALID POSITION\n";
                break;
            }

            // Convert position into array index
            dpos--;

            // Shift records towards left
            for(int i=dpos; i<n-1; i++)
            {
                strcpy(stu_id[i],stu_id[i+1]);
                strcpy(stu_name[i],stu_name[i+1]);
                per[i]=per[i+1];
                strcpy(grade[i],grade[i+1]);
            }

            // Decrease number of students
            n--;

            cout<<"Record Deleted Successfully\n";

            // Display updated records
            cout<<"Updated Student Records\n";

            for(int i=0; i<n; i++)
            {
                cout<<left<<setw(8)<<stu_id[i]
                    <<left<<setw(20)<<stu_name[i]
                    <<left<<setw(8)<<per[i]
                    <<grade[i]<<endl;
            }

            break;


        // CASE 3: UPDATE STUDENT
        case 3:

            cout<<"------------------------------------------\n";
            cout<<"          Update Student Record\n";

            // Accept student ID for searching
            cout<<"Enter ID: ";
            cin>>setw(7)>>nid;

            found=0;

            // Search student using ID
            for(int i=0; i<n; i++)
            {
                if(strcmp(nid,stu_id[i])==0)
                {
                    found=1;

                    // Accept new percentage
                    X:
                    cout<<"Enter New Percentage: ";
                    cin>>per[i];

                    if(per[i]<0 || per[i]>100)
                    {
                        cout<<"Invalid percentage\n";
                        goto X;
                    }

                    // Update grade
                    if(per[i]>90)
                    {
                        strcpy(grade[i],"O");
                    }
                    else if(per[i]>80)
                    {
                        strcpy(grade[i],"A+");
                    }
                    else if(per[i]>70)
                    {
                        strcpy(grade[i],"A");
                    }
                    else if(per[i]>60)
                    {
                        strcpy(grade[i],"B+");
                    }
                    else if(per[i]>50)
                    {
                        strcpy(grade[i],"B");
                    }
                    else if(per[i]>45)
                    {
                        strcpy(grade[i],"C");
                    }
                    else
                    {
                        strcpy(grade[i],"F");
                    }

                    cout<<"Record Updated Successfully\n";

                    break;
                }
            }

            // Display message if ID is not found
            if(found==0)
            {
                cout<<"Student ID not found\n";
            }

            // Display updated records
            cout<<"Updated Student Records\n";

            for(int i=0; i<n; i++)
            {
                cout<<stu_id[i]<<"\t"
                    <<stu_name[i]<<"\t"
                    <<per[i]<<"\t"
                    <<grade[i]<<endl;
            }

            break;


        // CASE 4: EXIT
        case 4:

            cout<<"Thank you for using Student Record Management System\n";
            break;


        // DEFAULT: INVALID CHOICE
        default:

            cout<<"Invalid Choice\n";

        }

    }while(ch!=4);

    return 0;
}
