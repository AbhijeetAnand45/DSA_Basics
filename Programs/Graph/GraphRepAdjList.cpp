
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    // vector<int> adj[n];    undirected graph
    vector<pair<int,int>> adj[n];  // undirected weighted graph

    for(int i = 0; i < m; i++) {
        /* undirected graph
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        */
       // undirected weighted graph
        int u, v, wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
       
    }

    for(int i = 0; i < n; i++) {
        cout<<"\n Adjacency list of vertex " << i;
        for(auto v: adj[i]){
            cout<<"-> ("<<v.first<<", "<<v.second<<") ";
        }
        cout<<"\n";
    }

    return 0;
}