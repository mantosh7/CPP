#include<bits/stdc++.h>
using namespace std;
int main()
{
    // taking inputs rows & columns
    int n,m;
    cout<<"Enter no.of rows:";
    cin>>n;
    cout<<"Enter no.of columns:";
    cin>>m;
    
    int arr[n][m];
    // input elements
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    // printing array
    cout<<"Original Matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Spiral matrix:"<<endl;
    int minRow=0,maxRow=n-1,minCol=0,maxCol=m-1;
    while(minRow<=maxRow && minCol<=maxCol)
    {
        if(minRow<=maxRow && minCol<=maxCol)
        {
            for(int i=minCol;i<=maxCol;i++)
            {
                cout<<arr[minRow][i]<<" ";
            }
            minRow++;
        }
        
        if(minRow<=maxRow && minCol<=maxCol)
        {
            for(int i=minRow;i<=maxRow;i++)
            {
                cout<<arr[i][maxCol]<<" ";
            }
            maxCol--;
        }
        
        if(minRow<=maxRow && minCol<=maxCol)
        {
            for(int i=maxCol;i>=minCol;i--)
            {
                cout<<arr[maxRow][i]<<" ";
            }
            maxRow--;
        }

        if(minRow<=maxRow && minCol<=maxCol)
        {
            for(int i=maxRow;i>=minRow;i--)
            {
                cout<<arr[i][minCol]<<" ";
            }
            minCol++;
        }    
    }

    // // printing spiral matrix
    // cout<<"Spiral matrix:"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}