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
        for(int col=0;col<r-row;col++)
        {
            // numbers
            if(col==0||col==r-row-1||row==0)
            {
                cout<<k+1;
            }
            //spaces
            else{
                cout<<" ";
            }
            k++;
        }
        cout<<endl;
    }
    return 0;
}