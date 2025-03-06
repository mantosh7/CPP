/*
PROBLEM STATEMENT: Given a 2D array matrix where each row is sorted in ascending order 
from left to right and each column is sorted in ascending order from top to bottom, 
write an efficient algorithm to search for a specific integer target in the matrix.

Example: Input: matrix = [ [1, 4, 7, 11, 15], [2, 5, 8, 12, 19], [3, 6, 9, 16, 22], 
                        [10, 13, 14, 17, 24], [18, 21, 23, 26, 30] ], target = 5
Output: True
Explanation: The target 5 exists in the matrix in the index (1,1)
*/

#include<bits/stdc++.h>
using namespace std;
bool searchElement(vector<vector<int>>& matrix, int target)
{
    int m = matrix.size() ;
    int n = matrix[0].size() ;

    int row = 0, col = n-1 ;
    while(row < m && col >= 0)
    {
        if(matrix[row][col]==target) return true ;
        else if(matrix[row][col] > target) col-- ;
        else row++ ;
    }
    return false ;
}

int main()
{
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}} ;
    int target = 5 ;
    int ans =  searchElement(matrix, target) ;
    if(ans == 1) cout << "True" ;
    else cout << "False" ;
}