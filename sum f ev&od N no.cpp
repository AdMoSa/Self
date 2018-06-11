//Program to calculate and print the sums of even and odd integers of the first n natural numbers

#include <iostream>

using namespace std;

int main()
{
 int n, sum_even = 0, sum_odd = 0, ctr = 1;

 cout<<"Program to calculate and print the sums of even and odd integers of the first n natural numbers";
 cout<<"Upto which number : ";
 cin>>n;

 while(ctr <= n)
 {
  if (ctr % 2 == 0)   //number is even
      sum_even += ctr;
  else
      sum_odd += ctr;
  ctr++ ;             //increment the counter
 }    //end of while

 cout<<"\n"<<"The sum of even integers is "<<sum_even;
 cout<<"\n"<<"The sum of odd integers is "<<sum_odds;

 return 0;
}
