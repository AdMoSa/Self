//Program to compute cosine series

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 factorial(int);
 int a,f;
 cout<<"Enter:";
 cin>>a;
 f=fact(a);
 cout<<"Fact is "<<f;

 fact(int b)
 {
  int c=1;
  for(i=1,i<b,++i)
  {
   c*=i;
  }
  return c;
}
