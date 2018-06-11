//Program to illustrate the access control in public derivation of a class

#include<iostream>
#include<stdlib.h>
#include<stdio.h>    //for gets()

using namespace std;

const int LEN = 25;

class Employee
{
private:
    char name[LEN];
    unsigned long enumb;
protected:
    float basic;
    void getbasic()
    {
        cout<<"Enter Basic : ";
        cin>>basic;
    }
public:
    void getdata()
    {
        cout<<"Enter Name : ";
        gets(name);
        cout<<"Enter Employee Number : ";
        cin>>enumb;
    }
    void putdata()
    {
        cout<<"Name : "<<name<<"\t";
        cout<<"Emp. Number : "<<enumb<<"\t";
        cout<<"Basic Salary : "<<basic;
    }
};

class Manager : public Employee
{
private:
    char title[LEN];
public:
    void getdata()
    {
        Employee::getdata(); //To resolve identity as Manager also has a getdata()
        getbasic();
        cin.ignore(32767,'\n');
        cout<<"Enter Title : ";
        gets(title);
        cout<<"\n";
    }
    void putdata()
    {
        Employee::putdata();
        cout<<"\tTitle : "<<title<<"\n";
    }
};

int main()

{
    system("cls");
    Manager m1,m2;
    cout<<"Manager1\n";
    m1.getdata();
    cout<<"Manager2\n";
    m2.getdata();
    cout<<"\t\tManager 1 Details\n";
    m1.putdata();
    cout<<"\t\tManager 2 Details\n";
    m2.putdata();
    return 0;
}
