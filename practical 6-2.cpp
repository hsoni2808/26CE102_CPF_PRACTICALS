//practical 6-2
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
    short int i,n,j;

    // Two-dimensional character arrays to store participant ID and name
    char participant_id[20][10], participant_name[20][20];

    // Variables for searching and temporary swapping
    char search_id[10], tempN[20], tempID[10];

    // Array to store scores
    int score[20], tempS, found=0;

    // Display heading
    cout<<"************************************************"<<endl;
    cout<<"          Sports Event Score Analysis "<<endl;
    cout<<"************************************************"<<endl;

    // Accept number of participants
    cout<<"Enter number of participants : ";
    cin>>n;

    // Validate number of participants
    if(n>20 || n<=0)
    {
        cout<<"Invalid number of participants";
        return 0;
    }

    // Accept participant details
    for(i=0; i<n; i++)
    {
        cout<<"Enter participant ID : ";
        cin>>setw(10)>>participant_id[i];

        cout<<"Enter participant name : ";
        cin>>setw(20)>>participant_name[i];

        cout<<"Enter participant score : ";
        cin>>score[i];

        cout<<endl;
    }

    // Search participant using ID
    cout<<"Enter participant ID to search : ";
    cin>>setw(10)>>search_id;

    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"       Participant Details"<<endl;
    cout<<"----------------------------------"<<endl;

    // Search for matching participant ID
    for(i=0; i<n; i++)
    {
        if(strcmp(search_id,participant_id[i])==0)
        {
            cout<<"Participant ID : "<<participant_id[i]<<endl;
            cout<<"Participant Name : "<<participant_name[i]<<endl;
            cout<<"Participant Score : "<<score[i]<<endl;

            found=1;
            break;
        }
    }

    // Display message if participant is not found
    if(found==0)
    {
        cout<<"Participant not found";
    }

    cout<<endl;

    // Sort participants according to score in descending order
    cout<<"------------------------------------------------"<<endl;
    cout<<"                 Ranking List"<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<left<<setw(10)<<"ID";
    cout<<left<<setw(15)<<"Name";
    cout<<"Score"<<endl;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(score[i]<score[j])
            {
                // Swap scores
                tempS=score[i];
                score[i]=score[j];
                score[j]=tempS;

                // Swap participant names
                strcpy(tempN,participant_name[i]);
                strcpy(participant_name[i],participant_name[j]);
                strcpy(participant_name[j],tempN);

                // Swap participant IDs
                strcpy(tempID,participant_id[i]);
                strcpy(participant_id[i],participant_id[j]);
                strcpy(participant_id[j],tempID);
            }
        }
    }

    // Display complete ranking list
    cout<<"------------------------------------------------"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<left<<setw(10)<<participant_id[i];
        cout<<left<<setw(15)<<participant_name[i];
        cout<<score[i]<<endl;
    }

    cout<<"------------------------------------------------"<<endl;

    // Display top three performers
    cout<<"             Top Three Performers"<<endl;
    cout<<"------------------------------------------------"<<endl;

    for(i=0; i<n && i<3; i++)
    {
        cout<<i+1<<"."<<left<<setw(15)<<participant_name[i];
        cout<<"  "<<score[i]<<endl;
    }

    return 0;
}

