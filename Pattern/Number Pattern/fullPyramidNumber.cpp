#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int i=0;i<r;i++)
    {
        // for spaces
        for(int j=0;j<r-1-i;j++)
        {
            cout<<"  ";
        }

        // for increasing order
        int m = i;
        for(int k=0;k<i+1;k++)
        {
            m++;     // increasing m by 1 after every loop
            cout<<m;
            cout<<" ";  // mid spaces between every number
        }

        // for decreasing order
        for(int s=0;s<i;s++)
        {
            cout<<m-1;
            cout<<" ";  // mid spaces between every number
            m--;   // decreasing m by 1 after every loop
        }

        cout<<endl;
    }

    return 0;
}