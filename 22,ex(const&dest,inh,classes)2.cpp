//Program to check working of constructors and destructors in multiple inheritance

#include<iostream>
#include<stdlib.h>

using namespace std;

class Base1
{
protected:
    int a;
public:
    Base1(int x)
    {
        a = x;
        cout<<"Constructing Base1 \n";
    }
    ~Base1()
    {
        cout<<"Destructing Base1 \n";
    }
};
class Base2
{
protected:
    int b;
public:
    Base2(int y)
    {
        b = y;
        cout<<"Constructing Base2 \n";
    }
    ~Base2()
    {
        cout<<"Destructing Base2 \n";
    }
};

class Derived:public Base1,public Base2
{
    int c;
public:
    Derived(int i,int j,int k): Base2(i), Base1(j)
    {
        c = k;
        cout<<"Constructing Derived. \n";
    }
    ~Derived()
    {
        cout<<"Destructing Derived. \n";
    }
    void show()
    {
        cout<<"1. "<<a<<"\t 2. "<<b<<"\t 3. "<<c<<"\n";
    }
};

int main()
{
    system("cls");
    Derived ob(14,15,16);
    ob.show();
    return 0;
}
