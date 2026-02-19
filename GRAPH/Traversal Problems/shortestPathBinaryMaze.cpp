/*
Given a 2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).
Note: You can only move left, right, up and down, and only through cells that contain 1.

Example:
Input:
N=3, M=4
A=[[1,0,0,0],
   [1,1,0,1],
   [0,1,1,1]]
X=2, Y=3
Output:
5
Explanation:
The shortest path is as follows:
(0,0)->(1,0)->(1,1)->(2,1)->(2,2)->(2,3).

*/

#include <bits/stdc++.h>
using namespace std;

// int shortestDistance(int N, int M, vector<vector<int>>& A, int X, int Y){
//     // vector<vector<int>> vis(N, vector<int>(M, 0)) ;  can directly change A[i][j] to 0 for marking visited
//     vector<int> delRow = {-1,0,1,0} ;
//     vector<int> delCol = {0,1,0,-1} ;
    
//     queue<pair<int,pair<int,int>>> q ;
//     q.push({0,{0,0}}) ;
//     // vis[0][0] = 1 ;
//     A[0][0] = 1 ;
//     while(!q.empty())
//     {
//         int r = q.front().first ;
//         int c = q.front().second.first ;
//         int step = q.front().second.second ;
//         q.pop() ;
        
//         if(r==X && c==Y) return step ;
        
//         for(int i=0;i<4;i++)
//         {
//             int nr = r + delRow[i] ;
//             int nc = c + delCol[i] ;
            
//             if(nr>=0 && nr<N && nc>=0 && nc<M && A[nr][nc]==1)
//             {
//                 A[nr][nc] = 0 ;
//                 q.push({nr,{nc,step+1}}) ;
//             }
//         }
//     }
//     return -1 ;
// }

// most optimized [remmoved visited and queue nested pair]
int shortestDistance(int N, int M, vector<vector<int>>& A, int X, int Y)
{
    if (A[0][0] == 0)
        return -1;
    if (X == 0 && Y == 0)
        return 0;

    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    q.push({0, 0});
    A[0][0] = 0 ;
    int step = 0 ;
    while (!q.empty())
    {
        int size = q.size() ;

        for(int i=0;i<size;i++)
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            if (r == X && c == Y)
                return step;

            for (int i = 0; i < 4; i++)
            {
                int nr = r + delRow[i];
                int nc = c + delCol[i];

                if (nr >= 0 && nr < N && nc >= 0 && nc < M && A[nr][nc] == 1)
                {
                    A[nr][nc] = 0 ;
                    q.push({nr, nc});
                }
            }
        }
        step++ ;
    }
    return -1;
}

int main()
{
    int N = 3;
    int M = 4;
    vector<vector<int>> A = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    int X = 2;
    int Y = 3;

    cout << shortestDistance(N, M, A, X, Y);
}