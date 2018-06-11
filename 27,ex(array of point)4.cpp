//Program to illustrate the positions of strings stored in array using array of pointers

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char *names[] = {"Sachin","Kapil","Ajay","Sunil","Anil"};
    int len = 0;
    len = strlen(names[1]);    //length of string no.2
    cout<<"\nOriginally string 2 is ";
    cout.write(names[1],len).put('\n');
    cout<<"and string 4 is ";
    cout.write(names[3],len).put('\n');

    //exchange the positions of string 2 and 4
    char *t;
    t=names[1];
    names[1]=names[3];
    names[3]=t;

    //print exchanged strings
    len = strlen(names[1]);
    cout<<"Exchanged string 2 is ";
    cout.write(names[1],len).put('\n');
    cout<<"and string 4 is ";
    cout.write(names[3],len).put('\n');

    return 0;
}
