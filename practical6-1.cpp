
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Variable declaration
    short int i,n;

    // Two-dimensional character arrays to store participant ID and name
    char participant_id[20][10], participant_name[20][20];

    // Array to store scores and variables for calculations
    int score[20], total=0, avg, highestS, lowestS;

    // Display program heading
    cout<<"********************************************"<<endl;
    cout<<" SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"********************************************"<<endl;

    // Accept number of participants
    cout<<"Enter number of participants : ";
    cin>>n;

    // Validate number of participants
    if (n>20 || n<=0)
    {
        cout<<"Invalid number of participants ";
        return 0;
    }

    // Accept participant details
    for(i=0; i<n; i++)
    {
        cout<<"Enter participant ID : ";
        cin>>participant_id[i];

        cout<<"Enter participant name : ";
        cin>>participant_name[i];

        cout<<"Enter participant score : ";
        cin>>score[i];

        cout<<endl;
    }

    // Display participant performance table
    cout<<"----------------------------------------------"<<endl;
    cout<<"Participant Performance"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"ID"<<"     "<<"Name"<<"     "<<"Score"<<"     "<<endl;
    cout<<"-----------------------------------------------"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<left<<setw(8)<<participant_id[i];
        cout<<left<<setw(8)<<participant_name[i];
        cout<<score[i];
        cout<<endl;
    }

    cout<<"----------------------------------------------"<<endl;

    // Calculate total score
    for(i=0; i<n; i++)
    {
        total+=score[i];
    }

    // Calculate average score
    avg = total/n;

    cout<<"Total score : "<<total<<endl;
    cout<<"Average score : "<<avg<<endl;

    // Initialize highest and lowest with the first score
    highestS=score[0];
    lowestS=score[0];

    // Find highest and lowest scores
    for(i=0; i<n; i++)
    {
        if(score[i]>highestS)
        {
            highestS=score[i];
        }

        if(score[i]<lowestS)
        {
            lowestS=score[i];
        }
    }

    // Display highest and lowest scores
    cout<<"Highest Score : "<<highestS<<endl;
    cout<<"Lowest score : "<<lowestS;

    return 0;
}
