#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;


    // 1st Method  ( sir method )
    for(int i=0;i<r;i++)
    {
        int k=0;
        for(int j=0;j<2*r-1;j++)
        {
            
            // 1st condition (printing starting spaces)
            if(j<r-1-i)
            {
                cout<<" ";
            }

            // 2nd condition (printing star)
            else if(k<2*i+1)
            {
                cout<<"*";
                k++;
            }

            // 3rd condition (printing end spaces)
            else {
                 cout<<" ";
            }
        }

        cout<<endl;
    }
//---------------------------------------------------------------------------------
    // 2nd Method
    // for(int i=0;i<r;i++)
    // {
        
    //     // grid formation (to understand)
    //     // for(int j=0;j<2*r-1;j++)
    //     // {
    //     //     cout<<"*";
    //     // }

    //     // 1st condition(starting space)
    //     for(int k=0;k<r-1-i;k++)
    //     {
    //         cout<<" ";
    //     }

    //     // 2nd condition(printing star)
    //     for(int l=0;l<2*i+1;l++)
    //     {
    //         cout<<"*";
    //     } 

    //     // 3rd condition(end space (optional))
    //     // cout<<" ";

    //     cout<<endl;
    // }
//--------------------------------------------------------------------

//  3rd method
    //for(int i=0;i<r;i++)
    // {
    //     // space
    //     for(int j=0;j<r-1-i;j++)
    //     {
    //         cout<<" ";
    //     }

    //     // star
    //     for(int k=0;k<2*i+1;k++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    return 0;
}