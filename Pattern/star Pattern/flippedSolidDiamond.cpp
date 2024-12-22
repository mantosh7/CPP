#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"enter no.of rows:";
    cin>>r;

    // method 1

    // upper half
    for(int row=0;row<r;row++)
    {
        // first part[inverted half pyramid]
        for(int col=0;col<r-row;col++)
        {
            cout<<"*";
        }

        //2nd part[full pyramid]
        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }

        //3rd part[inverted full pyramid]
        for(int col=0;col<r-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // lower part
    for(int row=0;row<r;row++)
    {
        // first part[half pyramid]
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

        // 2nd part[inverted full pyramid]
        for(int col=0;col<2*r-1-2*row;col++)
        {
            cout<<" ";
        }

        // 3rd part[half pyramid]
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

        cout<<endl;
    }


    // method 2

    //upper part
    // for(int row=0;row<r;row++)
    // {
    //     // starting stars
    //     for(int col=0;col<r-row;col++)
    //     {
    //         cout<<"*";
    //     }

    //     // spaces
    //     for(int col=0;col<2*row+1;col++)
    //     {
    //         cout<<" ";
    //     }

    //     // end stars
    //     for(int col=0;col<r-row;col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // // lower part
    // for(int row=0;row<r;row++)
    // {
    //     // starting stars
    //     for(int col=0;col<row+1;col++)
    //     {
    //         cout<<"*";
    //     }

    //     // spaces
    //     for(int col=0;col<2*r-1-2*row;col++)
    //     {
    //         cout<<" ";
    //     }

    //     // end stars
    //     for(int col=0;col<row+1;col++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    return 0;
}