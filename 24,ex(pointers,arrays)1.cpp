//Program to create two arrays to store roll no and marks of some students, whose no would be known at runtime
//To illustrate the working of free store operators

#include<iostream>

using namespace std;

int *rollno;               //declare an int pointer for rollno array
float *marks;              //declare a float pointer for marks array

int main()
{
    int size;
    cout<<"How many elements are there in the array ?\n";
    cin>>size;
    rollno = new int[size];         //dynamically allocate rollno array
    marks = new float[size];        //dynamically allocate marks array

    //check whether memory is available or not
    if((!rollno)||(!marks))         //if rollno or marks is null pointer
    {
        cout<<"Out of Memory!Aborting!";
        return 1;
    }
    //Read values in the array elements
    for(int i = 0;i<size;i++)
    {
        cout<<"For student "<<(i+1)<<"\n";
        cout<<"Enter roll no : ";
        cin>>rollno[i];
        cout<<"Enter marks : ";
        cin>>marks[i];
    }
    //Display the array contents
    cout<<"\nDisplaying data : \n";
    cout<<"\tRoll no \tMarks\n";
    for(int i=0;i<size;i++)
        cout<<"\t"<<rollno[i]<<"\t"<<marks[i]<<"\n";

    delete[]rollno;           //Deallocating rollno array
    delete[]marks;            //Deallocating marks array
    return 0;
}
