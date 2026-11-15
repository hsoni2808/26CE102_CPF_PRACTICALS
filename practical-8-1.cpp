#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void DisplayHeader()
{
    cout << "****************************************************" << endl;
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "****************************************************" << endl;
}



void acceptStudentDetails(string &enrollment_no, string &stu_name, string &Branch, int &sem, int Marks[])
{
    cout << "Enter enrollment no : ";
    getline(cin, enrollment_no);
    cout << endl;

    cout << "Enter Student name : ";
    getline(cin, stu_name);
    cout << endl;

    cout << "Enter Branch : ";
    getline(cin, Branch);
    cout << endl;

    cout << "Enter Semester : ";
    cin >> sem;
    cout << endl;


    for (int i = 0; i < 5; i++)
    {
        cout << "Marks " << i + 1 << " : ";
        cin >> Marks[i];
    }
    cout << endl;
}


void calculateAcademicResult(int Marks[], int &Total_Marks, float &percentage,
                             string &grade, string &result)
{
    bool passed = true;
    Total_Marks=0;


    for (int i = 0; i < 5; i++)
    {
        if (Marks[i] < 35)
        {
            passed = false;
        }
        Total_Marks += Marks[i];
    }


    percentage = Total_Marks / 5.0;


    if (percentage >= 90)
    {
        grade = "A+";
    }
    else if (percentage >= 80)
    {
        grade = "A";
    }
    else if (percentage >= 70)
    {
        grade = "B";
    }
    else if (percentage >= 60)
    {
        grade = "C";
    }
    else if (percentage >= 50)
    {
        grade = "D";
    }
    else if (percentage >= 40)
    {
        grade = "E";
    }
    else
    {
        grade = "F";
    }

    if (passed)
    {
        result = "Pass";
    }
    else
    {
        result = "Fail";
    }
}


void displayStudentReport(string &enrollment_no, string &stu_name, string &Branch, int &sem,
                          int &Total_Marks, float &percentage, string &grade, string &result)
{
    cout << "\n------------ Student Record ------------" << endl;
    cout << "Enrollment No : " << enrollment_no << endl;
    cout << "Name          : " << stu_name << endl;
    cout << "Branch        : " << Branch << endl;
    cout << "Semester      : " << sem << endl;
    cout << "Total Marks   : " << Total_Marks << "/500" << endl;
    cout << "Percentage    : " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "Grade         : " << grade << endl;
    cout << "Result        : " << result << endl;
    cout << "----------------------------------------" << endl;
    cout << "Program Executed Successfully Using User-defined Functions." << endl;
    cout << "----------------------------------------" << endl;
}

int main()
{

    string enrollment_no, stu_name, Branch, grade, result;
    int sem, Total_Marks = 0;
    int Marks[5];
    float percentage = 0;

    DisplayHeader();
    cout << endl;


    acceptStudentDetails(enrollment_no, stu_name, Branch, sem, Marks);


    calculateAcademicResult(Marks, Total_Marks, percentage, grade, result);


    displayStudentReport(enrollment_no, stu_name, Branch, sem, Total_Marks, percentage, grade, result);

    return 0;
}

