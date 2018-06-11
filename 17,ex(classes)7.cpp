//A class TESTMATCH HOTS Problem

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class TESTMATCH
{
    int TestCode, NoOfCandidates, CenterReqd;
    string Description;
public:
    void GETDATA();
    int CALCULATECNTR();
    void PUTDATA();
};

void TESTMATCH::GETDATA()
{
    cout<<"Test Match code : ";
    cin>>TestCode;
    cin.ignore(32767,'\n');
    cout<<"Enter Test Description : ";
    getline(cin,Description);
    cout<<"Enter No Of Candidates : ";
    cin>>NoOfCandidates;
    CenterReqd = CALCULATECNTR();
}

int TESTMATCH::CALCULATECNTR()
{
    float a, x;
    int b,c;
    x = NoOfCandidates;
    a = x/100;
    b = NoOfCandidates/100;

    //cout<<"a = "<<a<<"\nb = "<<b;

    if ((a-b)>0)
        c = (NoOfCandidates/100) + 1;
    else
        c = NoOfCandidates/100 ;
    return c;
}

void TESTMATCH::PUTDATA()
{
    cout<<"TEST MATCH INFORMATION______________________\n";
    cout<<"Test Match Code     : "<<TestCode;
    cout<<"\nDescription       : "<<Description;
    cout<<"\nTotal Candidates  : "<<NoOfCandidates;
    cout<<"\n Centers Required : "<<CenterReqd;
}

int main()
{
    TESTMATCH d;
    cout<<"TEST CENTER CALCULATOR\n";
    d.GETDATA();
    cout<<"\n";
    cout<<"To Calculate and show result press Y : ";
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    d.PUTDATA();
    else
    {
        cout<<"For real.";
        exit(0);
    }
    return 0;
}
