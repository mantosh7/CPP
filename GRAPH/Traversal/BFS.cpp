/*
Q. BFS of graph

Problem Statement:
Given a connected undirected graph containing V vertices, represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Search (BFS) traversal starting from vertex 0, visiting vertices from left to right according to the given adjacency list, and return a list containing the BFS traversal of the graph.

Note: Do traverse in the same order as they are in the given adjacency list.

Example :
Input: adj[][] = [[2, 3, 1], [0], [0, 4], [0], [2]]
Output: [0, 2, 3, 1, 4]
Explanation: Starting from 0, the BFS traversal will follow these steps: 
Visit 0 → Output: 0 
Visit 2 (first neighbor of 0) → Output: 0, 2 
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    // vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<vector<int>> adj = {{1,2}, {0,2}, {0,1,3,4}, {2}, {2}};
    
    // counting number of nodes
    int v = adj.size() ;

    vector<int> visited(v, 0);
    queue<int> q;
    vector<int> level;
    q.push(0); // assuming 0 as root node
    visited[0] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        level.push_back(node);
        
        for(auto it: adj[node])
        {
            if (visited[it] != 1)
            {
                visited[it] = 1;
                q.push(it);
            }

        }
    }

    // level order traversal
    cout << "Level Order Traversal : " << endl;
    for (auto it : level)
        cout << it << " ";

    return 0;
}