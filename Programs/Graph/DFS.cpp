/* By ABHIJEET ANAND */

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
vector<int> adj[N];
bool visited[N];

void dfs(int node){
    //preorder
    visited[node] = true;
    cout<<node<<" ";


    // inorder
    vector<int> :: iterator it;
    for(it = adj[node].begin();it != adj[node].end();it++){
        if(visited[*it]);
        else{
            dfs(*it);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; //n--> no of nodes and m--> no of edges
    cin>>n>>m;
    for(int i=0;i<N;i++){
        visited[i] = false;
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);  // 1 is the vertex or node to start the traversing
    return 0;
}

/* 
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3
1 2 4 5 6 7 3 
*/


/*


// IMPLEMENTATION OF DFS USING ADJECENCY MATRIX.
#include<stdio.h>

void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]

void main()
{
    int i,j;
    printf("Enter number of vertices:");

	scanf("%d",&n);

    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);

    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
    printf("visited nodes are: ");
    DFS(0);
}

void DFS(int i)
{
    int j;
	printf("%d\t",i);
    visited[i]=1;

	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
} */
