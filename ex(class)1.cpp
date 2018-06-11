//Program using a class to store price list of 5 items and to print the largest as well as sum of all prices.

#include<iostream>
#include<stdlib.h>

using namespace std;

class ITEM
{
    int itemcode[5];
    float it_price[5];
public:
    void initialise (void);
    float largest (void);
    float sum (void);
    void display_items (void);
};

//..........Member Function Definitions Follow........
void ITEM::initialise(void)
{
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<"Item No: "<<(i+1);
        cout<<"\n"<<"Enter item code:";
        cin>>itemcode[i];
        cout<<"\n"<<"Enter item price:";
        cin>>it_price[i];
        cout<<"\n";
    }
}

float ITEM::largest (void)
{
    float large=it_price[0];
    for(int i=1;i<5;i++)
    {
        if(large<it_price[i])
            large=it_price[i];
    }
    return large;
}

float ITEM::sum(void)
{
    float sum=0;
    for(int i=0;i<5;i++)
        sum +=it_price[i];
    return sum;
}

void ITEM::display_items(void)
{
    cout<<"\nCode Price\n";
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<" "<<it_price[i];
    }
    cout<<"\n";
}

int main()
{
    ITEM order;
    order.initialise();  //initialise arrays;
    float total, biggest;
    int ch=0;
    system ("cls");
    do
    {
        cout<<"\nMain Menu.\n";
        cout<<"\n1.Display largest price.";
        cout<<"\n2.Display sum of prices.";
        cout<<"\n3.Display item list.";
        cout<<"\n4.Exit.";
        cout<<"\nEnter your choice(1-4):";
        cin>>ch;
        switch(ch)
        {
            case 1:biggest=order.largest();
                   cout<<"The largest price is "<<biggest<<"\n";
                   break;
            case 2:total=order.sum();
                   cout<<"The sum of prices is "<<total<<"\n";
                   break;
            case 3:order.display_items();
                   break;
            case 4 : cout<<"Breaking";
                   exit(0);
            default:cout<<"\nWrong choice!\n";
                   break;
        } //end of switch
    } while(ch>=1&&ch<=3);
    return 0;
}
