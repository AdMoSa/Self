//Program to illustrate order of constructor invocation

#include<iostream>
#include<stdlib.h>

using namespace std;

class Subject
{
    int days;
    int subjectno;
public:
    Subject(int d = 123, int sn = 101); //prototype
    void printsub(void)
    {
        cout<<"Subject No : "<<subjectno;
        cout<<"\nDays : "<<days<<"\n";
    }
};

Subject::Subject(int d,int sn)
{
    cout<<"Constructing Subject\n ";
    days = d;
    subjectno = sn;
}
class Student
{
    int rollno;
    float marks;
public:
    Student()
    {
        cout<<"Constructing Student\n";
        rollno = 0;
        marks = 0.0;
    }
    void gerval(void)
    {
        cout<<"Enter roll number and marks : ";
        cin>>rollno>>marks;
        cout<<"\n";
    }
    void print(void)
    {
        cout<<"Roll no : "<<rollno;
        cout<<"\nMarks : "<<marks<<"\n";
    }
};

class Admission
{
    Subject sub;
    Student stud;
    float fees;
public:
    Admission() //constructor
    {
        cout<<"Constructing Admission\n";
        fees = 0.0;
    }
    void prin(void)
    {
        stud.print();
        sub.printsub();
        cout<<"Fees : "<<fees<<"\n";
    }
};

int main()
{
    system("cls");
    Admission adm;
    cout<<"\nBack in main()\n";
    return 0;
}
