/*
This is a better way to storegraph as it takes 2*E space where E = no.of edges
*/

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter no. of nodes : " ;
    cin>>n ;

    int m ;
    cout<<"Enter no.of edges : " ;
    cin>>m ;

    vector<vector<int>> adj(n+1) ;

    for(int i=0;i<m;i++)
    {
        int u, v ;
        cout<<"Enter u & v : " ;
        cin>>u>>v ;

        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }

    cout<<"Adjacency Matrix : "<<endl ;
    for(int i=0;i<n+1;i++)
    {
        for(auto it: adj[i]) cout<<it<<" " ;
        cout<<endl ;
    }
    return 0 ;
}