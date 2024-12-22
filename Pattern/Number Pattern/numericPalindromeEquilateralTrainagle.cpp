#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int row=0;row<r;row++)
    {
        // spaces
        for(int col=0;col<r-1-row;col++)
        {
            cout<<" ";
        }
        
        // half number pyramid
        for(int col=0;col<row+1;col++)
        {
            cout<<col+1;
        }

        // next half number pyramid
        for(int col=row;col>0;col--)
        {
            cout<<col;
        }

         cout<<endl;
    }
    return 0;
}