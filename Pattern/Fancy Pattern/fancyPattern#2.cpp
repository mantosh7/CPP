#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    // 1st method

    // upper part
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<row+1;

            if(col!=row)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // lower part
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<r-row;col++)
        {
            cout<<r-row;

            if(col!=r-row-1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    

    // 2nd method

    // upper part
    // for(int row=0;row<r;row++)
    // {
    //     for(int col=0;col<2*row+1;col++)
    //     {
    //         if(col%2==0)
    //         {
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // // lower part
    // for(int row=0;row<r;row++)
    // {
    //     for(int col=0;col<2*r-1-2*row;col++)
    //     {
    //         if(col%2==0)
    //         {
    //             cout<<r-row;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    return 0;
}