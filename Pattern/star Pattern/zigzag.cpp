#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    // 1st pyramid [ half part]
    for(int row=0;row<r;row++)
    {
        // spaces
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";

        cout<<endl;
    }

    // 1st pyramid[lower part]
    for(int row=0;row<r-1;row++)
    {
        // spaces
        for(int col=0;col<r-2-row;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";
        cout<<endl;
    }

    // 2nd pyramid[half part]
    for(int row=0;row<r-1;row++)
    {
        //spaces
        for(int col=0;col<row+1;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";
        cout<<endl;
    }

    // 2nd pyramid [lower part]
    for(int row=0;row<r-1;row++)
    {
        // spaces
        for(int col=0;col<r-2-row;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";

        cout<<endl;
    }

    // 3rd pyramid[half part]
    for(int row=0;row<r-1;row++)
    {
        //spaces
        for(int col=0;col<row+1;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";
        cout<<endl;
    }

    // 3rd pyramid [lower part]
    for(int row=0;row<r-1;row++)
    {
        // spaces
        for(int col=0;col<r-2-row;col++)
        {
            cout<<" ";
        }

        // stars
        cout<<"*";
        
        cout<<endl;
    }

    return 0;
}