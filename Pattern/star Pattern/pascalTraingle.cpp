#include<iostream>
using namespace std;

// to calculate factorial
int fact(int n)
{
    if(n==1||n==0) return 1;
    int factorial = n*fact(n-1);
    return factorial;
}

// to calculate combination
int comb(int i,int j)
{
    int combination = fact(i)/(fact(i-j)*fact(j));
    return combination;
}


int main()
{
    int r;
    cout<<"Enter no.of rows:";
    cin>>r;

    for(int row=0;row<r;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            int ans = comb(row,col);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}