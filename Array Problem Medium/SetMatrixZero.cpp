/*
PROBLEM STATEMENT: Given an m x n integer matrix matrix, 
if an element is 0, set its entire row and column to 0's.

Example:   0 1 2 0          0 0 0 0
           3 4 5 2   -->    0 4 5 0
           1 3 1 5          0 3 1 0
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int m = matrix.size();
    int n = matrix[0].size();

    // // OPTIMAL SOLUTION
    bool colSet = false; // for maintaining 1st column (1st element of every row)
    // for checking and making row or col to zero    
    for(int i=0;i<m;i++)
    {
        if(matrix[i][0]==0) colSet=true;
        for(int j=1;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;  // for making top column 0 (of that row)
                matrix[0][j]=0;  // for making first row 0 (of that column)
            }
        }
    }
    // for assigning elements to 0
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
        if(colSet)
        {
            matrix[i][0]=0;  // for making 1st column of that row 0 if any element in that column is 0
        }
    } 

//-----------------------------------------------------------------------------------------------------------------       

    // BETTER APPROACH
    // vector<int>row(m,0);  //initialise additional row elements with 0
    // vector<int>col(n,0);  //initialise additional col elements with 0

    // // for storing row and col index of every 0 element 
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(matrix[i][j]==0)
    //         {
    //             row[i]=1;  
    //             col[j]=1;
    //         }
    //     }
    // }
    // // for replacing every element of additional row=1 or col=1 with 0
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(row[i]||col[j])
    //         {
    //             matrix[i][j]=0;
    //         }
    //     }
    // }

// ------------------------------------------------------------------------------------

    // BRUTE FORCE
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(matrix[i][j]==0)
    //         {
    //             for(int k=0;k<n;k++)
    //             {
    //                 if(matrix[i][k]!=0)
    //                 {
    //                     matrix[i][k]=-1; // making non-zero element of that row=0
    //                 }
    //             }
    //             for(int k=0;k<m;k++)
    //             {
    //                 if(matrix[k][j]!=0)
    //                 {
    //                     matrix[k][j]=-1; // making non-zero element of that col=0
    //                 }
    //             }
    //         }
    //     }
    // }
    
    
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(matrix[i][j]==-1) matrix[i][j]=0;
    //     }
    // }
    
    cout<<"New Array:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}