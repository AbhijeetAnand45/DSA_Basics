/* It is not unique and only DAG has topological sorting */

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

        vector<int> topo(int N, vector<int> adj[]) {
        queue<int> q; 
	    vector<int> indegree(N, 0); 
	    for(int i = 0;i<N;i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++; 
	        }
	    }
	    
	    for(int i = 0;i<N;i++) {
	        if(indegree[i] == 0) {
	            q.push(i); 
	        }
	    }
	    vector<int> topo;
	    while(!q.empty()) {
	        int node = q.front(); 
	        q.pop(); 
	        topo.push_back(node);
	        for(auto it : adj[node]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	                q.push(it); 
	            }
	        }
	    }
	    return topo;
	}
};
int main(){
    // int n,m;
    // cin>>n>>m;
    int n;
    cin>>n;
    int cnt = 0;
    vector<int> adj[n];
    // vector<int> indegre(n,0);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        // indegre[v]++;
    }

    Solution obj;
    vector<int> res = obj.topo(n, adj);
    // queue<int> q;
    // for(int i=0;i<n;i++){
    //     if(indegre[i] == 0){
    //         q.push(i);
    //     }

    // }
    // while(!q.empty()){
    //     cnt++;
    //     int x = q.front();
    //     q.pop();
    //     cout<<x<<" ";
    //     for(auto it: adj[x]){
    //         indegre[it]--;
    //         if(indegre[it] == 0){
    //             q.push(it);
    //         }
    //     }
    // }
    return 0;
}
