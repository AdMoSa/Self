//Program to calculate the factorial of an integer

#include <iostream>
#include <stdlib.h>

int main()
{
 system ("cls");

 int i,num,fact = 1;

 cout<<"\nFactorial Calculator";
 cout<<"\nEnter integer : ";
 cin>>num;

 i=num;

 while(i)
 { fact *=i;
        --i;
 }

 cout<<"The factorial of "<<num<<"is"<<fact<<"\n";

 return 0;
}
