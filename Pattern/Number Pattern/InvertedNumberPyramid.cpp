/* Pattern: (n = 5)

            5 5 5 5 5 5 5 5 5
              4 4 4 4 4 4 4
                3 3 3 3 3
                  2 2 2
                    1
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no.of rows:";
    cin>>rows;

    int temp = rows;

    for(int i=0;i<rows;i++)
    {
        // starting spaces
        for(int sp=0;sp<i;sp++)
        {
            cout<<" ";
        }
        
        for(int j=0;j<2*rows-1-2*i;j++)
        {
            cout<<temp;
        }
        
        temp--;
        cout<<endl;
    }
}