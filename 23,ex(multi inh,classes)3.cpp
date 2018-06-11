//Program to illustrate multilevel inheritance

#include<iostream>
#include<stdio.h>

using namespace std;

const int LEN = 25;

class Person
{
    char name[LEN];
    int age;
public:
    void readperson(void);
    void displayperson(void)
    {
        cout<<"Name : ";
        cout.write(name,LEN);
        cout<<"\tAge : "<<age<<"\n";
    }
};

void Person::readperson(void)
{
    for(int i = 0;i<LEN;i++)
        name[i] = ' ';
    cout<<"Enter Name of the person : ";
    gets(name);                             //gets() reads white spaces also
    cout<<"Enter Age : ";
    cin>>age;
}

class Student:public Person
{
    int rollno;
    float average;
public:
    void readstudent(void)
    {
        readperson();
        cout<<"Enter Roll number : ";
        cin>>rollno;
        cout<<"Enter Average Marks : ";
        cin>>average;
    }
    void disp_rollno(void)
    {
        cout<<"Roll Number : "<<rollno<<"\n";
    }
    float getaverage(void)          //accessor
    {
        return average;
    }
};

class GradStudent:public Student
{
    char subject[LEN];
    char working;
public:
    void readit(void);
    void displaysubject(void)
    {
        cout<<"Subject : ";
        cout.write(subject,LEN);
    }
    char workstatus(void)
    {
        return working;
    }
};

void GradStudent::readit(void)
{
    readstudent();
    for(int i = 0; i<LEN;i++)
        subject[i] = ' ';
    gets(subject);
    cout<<"Enter Main Subject : ";
    gets(subject);
    cout<<"Working ?(Y/N) : ";
    cin>>working;
}

int main()
{
    const int size = 5;      //size stores no. of graduates
    GradStudent grad[size];  //list to store information of graduates
    int n,year, num_working = 0, non_working = 0, div1 = 0, total = 0;
    float topscore = 0, score, number, wperc, nwperc;

    /*****************************************************************************

    num_working -------- stores the number of working graduates
    non_working -------- stores the number of non-working graduates
    div1        -------- stores the number of first divisioners
    total       -------- stores the total number of graduates
    topscore    -------- stores the highest average
    score       -------- stores the average of the Graduate student
    number      -------- stores the ith number of the Graduate in the list
    ******************************************************************************/

    cout<<"Enter Year : ";
    cin>>year;

    //Loop for processing graduates information
    for(int i = 0;i<size;i++)       //to read information for the ith graduate
    {
        cout<<"Enter Details for Graduate"<<(i+1)<<"\n";
        grad[i].readit();
        total++;                    //add to total

        //Loop to count number of working and non-working  students
        if(grad[i].workstatus()=='y'||grad[i].workstatus()=='Y')
            num_working++;
        else
            non_working++;

        //Determine the top scorer
        score = grad[i].getaverage();
        if(score>topscore)
        {
            topscore = score;
            number =i;
        }

        //count the number of first divisioners
        if(score>=60.0)
            div1++;
}
//end for loop

//Now print the report
n = number;
cout<<"\n\t\tReport for the Year "<<year<<"\n";
cout<<"\t\t--------------------\n";
cout<<"Working Graduates : "<<num_working;
cout<<"\tNon-working Graduates : "<<non_working<<"\n";
cout<<"\tDetails of the Top Scorer \n";
grad[n].displayperson();
grad[n].displaysubject();
nwperc = ((float)non_working/(float)total)*100;
wperc = ((float)div1/(float)total)*100;
cout<<"\tAverage Marks : "<<grad[n].getaverage()<<"\n";
cout<<"\t"<<nwperc<<" % of the graduates this year are non-working and \n"<<wperc<<" % are first divisioners\n";

return 0;

}
