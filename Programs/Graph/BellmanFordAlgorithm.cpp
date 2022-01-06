
/* Helps to remove drawback of Dijkstra Algorithm of handle negative edge as well */
// Time Complexity : O(VE) >> Dijkstra
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;

    for(int i = 0; i < m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});

    }
    int src;
    cin>>src;

    vector<int> dist(n,INF);

    dist[src] = 0;

    for(int it = 0; it < n-1; it++){
        for(auto e : edges){
            int u = e[0], v = e[1], w = e[2];
            dist[v] = min(dist[v], w + dist[u]);
        }
    }
    for(int i = 0; i < n; i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}
