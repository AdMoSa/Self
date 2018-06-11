//Snippet of code for initialization of object during runtime(dynamic initialization)

#include<iostream>

using namespace std;

class sample
{
    int rollno;
    float marks;
public:
    sample(int a, float b)
    {
        rollno = a; marks = b;
    }
    sample(sample &s)            //copy constructor
    {
        rollno = s.rollno;
        marks = s.marks;
        cout<<"\nCopy constructor at work\n";
    }
    .
    .
    .
    .   //other members
};

int main()
{
    int x;
    float y;
    cout<<"Enter roll no of the student: ";
    cin>>x;
    cout<<"Enter marks achieved by the student: ";
    cin>>y;
    cout<<"\n";
    sample s1(x,y);  //dynamic initialization with values x and y
    .
    .
    .
}
