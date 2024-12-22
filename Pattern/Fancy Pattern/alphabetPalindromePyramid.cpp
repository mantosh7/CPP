#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    // 1st method

    for(int row=0;row<r;row++)
    {
        
        // number in ascending order
        for(int col=0;col<row+1;col++)
        {
            char ch=65+col;
            cout<<ch;
        }

        // number in descending order
        char ch=65+(row-1);
        for(int col=row;col>0;col--)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }

    // 2nd method
    
    // for(int row=0;row<r;row++)
    // {
    //     char ch=64;
    //     int ascii=64+row;
    //     bool flag=true;
    //     for(int col=0;col<2*row+1;col++)
    //     {
    //         if(flag==true&&(ch<ascii||ch==ascii) )
    //         {
    //             ch++;
    //             cout<<ch;
                
    //         }
            
    //         else
    //         {
    //             ch--;
    //             cout<<ch;
    //             flag=false;
    //         }
    //     }
    //     cout<<endl;
    // }

    
    return 0;
}