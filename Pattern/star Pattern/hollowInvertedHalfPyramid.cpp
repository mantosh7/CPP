#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int row=0;row<r;row++)
    {
        for(int col=0;col<r-row;col++)
        {
            //stars
            if(col==0||col==r-row-1||row==0)
            {
                cout<<"*";
            }
            //spaces
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}