#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    // upper part
    for(int row=0;row<r;row++)
    {
        // 1st part [half pyramid]
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

        // 2nd part [inverted full pyramid]
        for(int col=0;col<2*(r-1)-2*row;col++)
        {
            cout<<" ";
        }

        // 3rd part [half pyramid]
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    // lower part
    for(int row=0;row<r;row++)
    {
        // 1st part [inverted half pyramid]
        for(int col=0;col<r-row;col++)
        {
            cout<<"*";
        }

        // 2nd part [full pyramid]
        for(int col=0;col<2*row;col++)
        {
            cout<<" ";
        }

        // 3rd part [inverted half pyramid]
        for(int col=0;col<r-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}