\\switch case

#include<iostream>

using namespace std;

int main()
{
 float op1,op2,res;
 char ch;

 cout <<"Enter two numbers: ";
 cin >> op1 >> op2;
 cout <<"\n"<<"Enter an operator(+,-,*,/,%): ";
 cin >> ch;
 cout << "\n";

 switch(ch)
  {
   case'+': res=op1+op2;
            break;
   case'=': res=op1-op2;
            break;
   case'*': res=op1*op2;
            break;
   case'/': if(op2==0)
               cout<<"Divide by zero error!!!";
            else
               res=op1/op2;
            break;
   case'%': if(op2==0)
               cout<<"Divide by zero error!!!";
            else
            {  int a,b;
               a=op1/op2;
               res=op1-(a*op2);
            }
            break;
   default:cout<<"\n"<<"Wrong operator!!!";
  }
 cout<<"The calculated result is:"<<res<<"\n";
}
