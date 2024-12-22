#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;
    
    for(int i=0;i<r;i++)
    {

        // for starting space
        for(int j=0;j<r-1-i;j++)
        {
            cout<<" ";
        }

        

        if(i!=r-1)
        {

            // printing 1
            cout<<1;

            // for mid spaces
            for(int k=0;k<2*i-1;k++)
            {
                cout<<" ";
            }

            // printing last term
            if(i>0)
            {
                cout<<i+1;
            }

        }
        
        else{
            for(int k=0;k<r;k++)
            {
                cout<<k+1<<" ";
            }
        }

        // line changing
        cout<<endl;
    }

    return 0;
}