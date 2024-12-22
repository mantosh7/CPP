#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int row=0;row<r;row++)
    {
        int k=row;

        // spaces
        for(int col=0;col<r-1-row;col++)
        {
            cout<<"  ";
        }

        // 1st part [half pyramid]
        for(int col=row+1;col>0;col--)
        {
            cout<<k+1<<" ";
            k++;
        }

        // 3rd part [next half pyramid]
        k--;
        for(int col=row;col>0;col--)
        {
            cout<<k<<" ";
            k--;
        }

        cout<<endl;
    }
    return 0;
}