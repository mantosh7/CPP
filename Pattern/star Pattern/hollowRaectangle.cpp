#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;
    int c;
    cout<<"\nEnter no.of columns:";
    cin>>c;

    //Method 1
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    // method 2
    // for(int i=0;i<r;i++)
    // {
    //     if(i==0 || i==r-1)
    //     {
    //         for(int j=0;j<c;j++)
    //         {
    //             cout<<"* ";
    //         }
    //     }

    //     else{
            
    //         // first term "* "
    //         cout<<"* " ; 

    //         // then spaces
    //         for(int j=0;j<c-2;j++)
    //         {
    //             cout<<"  ";
    //         }

    //         // last term "* "
    //         cout<<"* ";
    //     }

    //     cout<<endl;
        
    // }

    return 0;
}


