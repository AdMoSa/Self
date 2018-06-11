//Program to swap values of two variables using pass by reference method

#include<iostream>

using namespace std;

int main()
{
    void swap(int &,int &);         //Prototype for call by reference
    int a = 7, b = 4;
    cout<<"Original values \n";
    cout<<"a="<<a<<"b="<<b<<"\n";
    swap(a,b);                      //IN call by reference, the function call statement remains same as in call by value
    cout<<"Swapped values \n";
    cout<<"a="<<a<<"b="<<b<<"\n";
    return 0;
}

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
