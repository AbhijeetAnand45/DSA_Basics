// IMPLEMENTATION OF BFS USING ADJACENCY MATRIX
// ABHIJEET ANAND
#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v) {
	for (i=0;i<n;i++){
        if(a[v][i] && !visited[i])
            q[++r]=i;
	}

	if(f<=r) {
		visited[q[f]]=1;
		bfs(q[++f]);
	}
}
void main() {
	int v;

	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		q[i]=0;
		visited[i]=0;
	}
	printf("\n Enter graph data in matrix form:\n");
	for (i=0;i<n;i++)
	  for (j=0;j<n;j++)
	   scanf("%d",&a[i][j]);
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("\n The node which are reachable are:");
	for (i=0;i<n;i++){
        if(visited[i])
            printf("\n Node %d is reachable",i);
        else{
            printf("\n Node %d is not reachable from given vertex: ",i);
        }
	}



	getch();
}
