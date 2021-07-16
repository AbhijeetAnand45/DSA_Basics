/* IMPLEMENTATION OF BFS
    ABHIJEET ANAND */
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
bool visited[N];
vector<int> adj[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; // n --> no. of vertex/node , m--> no. of edges
    cin>>n>>m;
    for(int i=0;i<N;i++){
        visited[i] = 0;
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);    // 1 is the node to start with , we can choose any node.
    visited[1] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it = adj[node].begin();it != adj[node].end();it++){
            if(!visited[*it]){
                visited[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}







// #include<stdio.h>
// #include<conio.h>
// int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
// void bfs(int v) {
// 	for (i=0;i<n;i++){
//         if(a[v][i] && !visited[i])
//             q[++r]=i;
// 	}

// 	if(f<=r) {
// 		visited[q[f]]=1;
// 		bfs(q[++f]);
// 	}
// }
// void main() {
// 	int v;

// 	printf("\n Enter the number of vertices:");
// 	scanf("%d",&n);
// 	for (i=0;i<n;i++) {
// 		q[i]=0;
// 		visited[i]=0;
// 	}
// 	printf("\n Enter graph data in matrix form:\n");
// 	for (i=0;i<n;i++)
// 	  for (j=0;j<n;j++)
// 	   scanf("%d",&a[i][j]);
// 	printf("\n Enter the starting vertex:");
// 	scanf("%d",&v);
// 	bfs(v);
// 	printf("\n The node which are reachable are:");
// 	for (i=0;i<n;i++){
//         if(visited[i])
//             printf("\n Node %d is reachable",i);
//         else{
//             printf("\n Node %d is not reachable from given vertex: ",i);
//         }
// 	}



// 	getch();
// }
