//Cipher 1

#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
 char ch,next,line[500];
 cout <<"Enter the line: "<<endl;
 gets(line);

 for(int i = 0;line[i]!='\0';i++)
 {
  ch = line[i];

  if((ch>=68 && ch<=90)||(ch>=100 && ch<=122))
  { next=ch-3;
    line[i]=next;
  }
  else if((ch>=65 && ch<=67)||(ch>=97 && ch<=99))
  { next=ch+23;
    line[i]=next;
  }
  else if((ch==' ')||(ch==',')||(ch=='-')||(ch=='.'))
  {
    line[i]=ch;
  }
  else
   cout<<"Character is not alphabet";
 }
cout<<"\nDeciphered text is: "<<endl;
puts(line);

return 0;
}
