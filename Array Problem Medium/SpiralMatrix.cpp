#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][1] = {7,9,6};
    int minRow=0,maxRow=2,minCol=0,maxCol=3;
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
    return 0;
}