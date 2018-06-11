//CGPA Grade Calculator

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
 std::string b101,b141,c101,c141,m101,cs141,p101,p141,h101,h109;
 int B101,B141,C101,C141,M101,CS141,P101,P141,H101,H109;
 float total,gpa;
 cout<<"CGPA Grade Calculator"<<endl;
 cout<<"Enter Grades for the following subjects"<<endl;
 cout<<"B101[3] : ";
 cin>>b101;
 cout<<"B141[2] : ";
 cin>>b141;
 cout<<"C101[3] : ";
 cin>>c101;
 cout<<"C141[2] : ";
 cin>>c141;
 cout<<"M101[3] : ";
 cin>>m101;
 cout<<"CS141[2] : ";
 cin>>cs141;
 cout<<"P101[3] : ";
 cin>>p101;
 cout<<"P141[2] : ";
 cin>>p141;
 cout<<"H101[2] : ";
 cin>>h101;
 cout<<"H109[2] : ";
 cin>>h109;

 int convert(string);

 B101=convert(b101);
 B141=convert(b141);
 C101=convert(c101);
 C141=convert(c141);
 M101=convert(m101);
 CS141=convert(cs141);
 P101=convert(p101);
 P141=convert(p141);
 H101=convert(h101);
 H109=convert(h109);

 total = B101*3+B141*2+C101*3+C141*2+M101*3+CS141*2+P101*3+P141*2+H101*2+H109*2;
 gpa= total/24;

 cout<<"Total points : "<<total<<endl;
 cout<<"GPA : "<<gpa<<endl;

 sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
              break;
    }
}

int convert(string str)
{
 int point;
 if (str=="AA")
    point=10;
 else if (str=="AB")
    point=9;
 else if (str=="BB")
    point=8;
 else if (str=="BC")
    point=7;
 else if (str=="CC")
    point=6;
 else if (str=="CD")
    point=5;
 else if (str=="DD")
    point=4;
 else if (str=="FR")
  {
      cout<<"The candidate has failed"<<endl<<"A Moment of Silence for the Fallen"<<endl;
      point=0;
  }
 else if (str=="II")
  {
      cout<<"The candidate has not attended the exam"<<endl<<"Grade pending till future exam, you lucky bastard."<<endl;
      point=0;
  }
 else
    cout<<"INVALID ENTRY"<<endl;

 return point;
}
