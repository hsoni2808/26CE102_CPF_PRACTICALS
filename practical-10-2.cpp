//Practical 10.2
#include<iostream>
using namespace std;
//PART A-COMPOSITE DATA REPRESENTATION(STRUCTURE)
//PART B-PADDING AND ALIGNMENT
struct productA
{
char category;
double weight;
char status;
int productID;
}a;
struct productB
{
double weight;
int productID;
char status;
char category;
}b;

//PART C-UNION
struct dataStruct{
int a;
float b;
char c;
}s;

union dataUnion{
int a;
float b;
char c;
}u;


int main()
{
    cout<<"************************************************\n";
    cout<<"COMPOSITE DATA REPRESENTATION ANALYZER\n";
    cout<<"************************************************\n\n";

    //PART A
    cout<<"===========PART A=============\n";
    cout<<"For Product A:\n";
    //size of each element
    cout<<"Size of char category  :"<<sizeof(a.category)<<endl;
    cout<<"Size of double weight  :"<<sizeof(a.weight)<<endl;
    cout<<"Size of char status    :"<<sizeof(a.status)<<endl;
    cout<<"Size of int productID  :"<<sizeof(a.productID)<<endl;
    //total size of the structure
    cout<<"Total Size             :"<<sizeof(productA)<<endl<<endl<<endl;

    //PART B
    cout<<"===========PART B=============\n";
    cout<<"---------------------------------------\n";
    cout<<"Padding and Alignment Observed\n";
    cout<<"---------------------------------------\n\n";
    cout<<"Composite Data Type A\n";
    cout<<"Size  :"<<sizeof(productA)<<" bytes"<<endl;
    cout<<"---------------------------------------\n";
    cout<<"Composite Data Type B\n";
    cout<<"Size  :"<<sizeof(productB)<<" bytes"<<endl;
    cout<<"---------------------------------------\n\n";
    cout<<"Memory Utilization :"<<sizeof(productA)-sizeof(productB)<<" bytes"<<endl<<endl;
    cout<<"----------------------------"<<endl<<endl;

    //PART C
    cout<<"==========PART C===========\n";
    cout<<"Shared Memory Representation\n";
    //in struct
    s.a=120;
    s.b=120.01;
    s.c='A';
    cout<<"Integer Value  :"<<s.a<<endl;
    cout<<"Floating Value :"<<s.b<<endl;
    cout<<"Character Value:"<<s.c<<endl;
    //in union
    u.a=120;
    cout<<"After Update Integer Value  :"<<u.a<<endl;
    u.b=120.01;
    cout<<"After Update Floating Value :"<<u.b<<endl;
    u.c='A';
    cout<<"After Update Character Value:"<<s.c<<endl;
    cout<<"-----------------------------\n\n";

    //PART D
    cout<<"============PART D===============\n";
    cout<<"Trade-off Analysis\n";
    cout<<"Structure\n";
    cout<<"Separate Memory for Every Member\n";
    cout<<"Suitable for Storing Complete Records\n";
    cout<<"----------------------------------------\n\n";
    cout<<"Union\n";
    cout<<"Shared Memory for All Members\n";
    cout<<"Suitable for Memory-efficient Applications\n";
    cout<<"----------------------------------------\n\n";
    cout<<"Program Executed Successfully\n\n";
    cout<<"----------------------------------------\n";




return 0;
}

