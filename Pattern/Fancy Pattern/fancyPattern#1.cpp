#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int row=0;row<r;row++)
    {
        // starting stars
        for(int col=0;col<2*r-2-row;col++)
        {
            cout<<"*";
        }

        // numbers and mid stars
        for(int col=0;col<row+1;col++)
        {
            cout<<row+1;
            if(col!=row)
            {
                cout<<"*";
            }
        }

        // ending stars
        for(int col=0;col<2*r-2-row;col++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}