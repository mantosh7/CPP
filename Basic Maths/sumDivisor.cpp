#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;


    int eachSum=0,divSum=0;
        for(int i=1;i<=n;i++)
        {
            eachSum=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    eachSum+=j;
                }
            }
            divSum+=eachSum;
        }
        cout<<divSum;
        return 0;
}