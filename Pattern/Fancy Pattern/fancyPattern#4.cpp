#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;
    int k=1;
    
    // upper half part
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<k;
            if(col!=row)
            {
                cout<<"*";
            }
            k++;
        }
        cout<<endl;
    }

    int start = k;  // for r=4, start=11
    // lower half part
    for(int row=0;row<r;row++)
    {
        start = start-(r-row); // for r=4 & row=0, start=11-(4-0)=7
        int c = start;  // c==7
        for(int col=0;col<r-row;col++)
        {
            cout<<c;
            if(col!=r-row-1)
            {
                cout<<"*";
            }

            c++;
        }

        cout<<endl;
    }
    return 0;
}
