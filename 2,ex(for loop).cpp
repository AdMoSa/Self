//for loop

#include<iostream>

using namespace std;

int main()
{
 int x;
 float fx;
 for(x=-10;x<=10;x+=20)
 {
  fx=(x*x+1.5*x+5)/(x-3);
  cout<<"For x ="<<x<<"\t f(x) is "<<"\n";
 }
 return 0;
}
