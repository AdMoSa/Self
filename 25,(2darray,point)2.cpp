/* To read a 2-D array using pointers(i.e., Dynamic Array),
   calculate its row-sum and column-sum and display this array along with row-sum and column-sum */

#include<iostream>

using namespace std;

int main()
{
    int *Val,*Rsum,*Csum;
    int MaxR, MaxC, i, j;

    cout<<"Enter dimensions : \nRow : "; cin>>MaxR; cout<<"Column : "; cin>>MaxC;

    Val = new int[MaxR * MaxC];        //actual 2-D array
    Rsum = new int[MaxR];              //array to hold row-sums
    Csum = new int[MaxC];              //array to hold column-sums

    for(i=0;i<MaxR;i++)
    {
        cout<<"\n Enter elements of row "<<i+1<<" : ";
        Rsum[i]=0;
        for(j=0;j<MaxC;j++)
        {
            cin>>Val[i * MaxC+j];

            Rsum[i] += Val[i * MaxC+j];
        }
    }

    for(j=0;j<MaxC;j++)
    {
        Csum[j]=0;
        for(i=0;i<MaxR;i++)
            Csum[j] += Val[i*MaxC+j];
    }

    cout<<"\n\nThe given array along with row-sum and col-sum is : \n\n";
    for(i=0;i<MaxR;i++)
    {
        for(j=0;j<MaxC;j++)
            cout<<Val[i * MaxC+j]<<'\t';
        cout<<Rsum[i]<<endl;
    }
    for(j=0;j<MaxR;j++)
        cout<<Csum[j]<<'\t';
    cout<<endl;

    delete[]Val;
    delete[]Rsum;
    delete[]Csum;
    return 0;
}
