#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    // upper half part
    for(int row=0;row<r;row++)
    {
        int k;
        // starting half pyramid
        for(int col=0;col<row+1;col++)
        {
            if(col==0) cout<<"*";
            else 
            {
                cout<<col;
                k=col;
            }
        }

        // next part
        for(int col=row;col>0;col--)
        {
            if(col==1)
            {
                cout<<"*";
            } 
            
            else if(k>0)
            {
                cout<<k-1;
                k--;
            }
        }

        cout<<endl;
    }

    // next half part
    for(int row=0;row<r-1;row++)
    {
        int k;
        
        // starting inverted half pyramid
        for(int col=0;col<r-1-row;col++)
        {
            if(col==0) cout<<"*";
            else {
                cout<<col;
                k=col;
            }

        }

        // next part
        for(int col=r-2-row;col>0;col--)
        {
            if(col==1)
            {
                cout<<"*";
            }

            else if(k>0){
                cout<<k-1;
                k--;
            }
        }

        cout<<endl;
    }

    return 0;
}