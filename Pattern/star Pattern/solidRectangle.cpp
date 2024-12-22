#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;
    int c;
    cout<<"\nEnter no.of columnss:";
    cin>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}