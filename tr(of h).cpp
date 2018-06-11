//vertical pyramid of height h

#include<iostream>

using namespace std;

int main()
{
 int i,h,row;
 cout<<"Enter the height of triangle: "}
 for(i=1;i<=h;++i)
 {
  for(int j=1;j<=i;++j)
  {
   for(row=1;row<=(h-1);++row)
   {
    cout<<" "; }
   }
   cout<<"*";
 }
}
