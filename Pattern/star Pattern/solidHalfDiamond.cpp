#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter no.of rows:";
    cin >> r;

    // first half part
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // next half part
    for(int row=0;row<r-1;row++)
    {
        for(int col=0;col<r-1-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}