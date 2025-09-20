/*
This is not an optimal way to store graph as it takes a 2D array of size n*n
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter no. of nodes : ";
    cin >> n;
    cout << "Enter no,of edges : ";
    cin >> m;

    vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter u & v : ";
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout << endl
         << "Adjacency Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}