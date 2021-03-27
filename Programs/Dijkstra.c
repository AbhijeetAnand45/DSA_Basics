// IMPLEMENTATION OF DIJKSTRA ALGORITHM  IN C PROGRAMMING.
// ABHIJEET ANAND
#include<stdio.h>
#include<conio.h>
int d[100];
void dijkstra(int n,int cost[10][10], int source, int p[])
{
    int i,j,u,v,min,visited[10];
    for(i=0;i<n;i++)
    {
        d[i]=cost[source][i];
        visited[i]=0;
        p[i]=source;
    }
    visited[source]=1;
    for(i=0;i<n;i++)
    {   min=9999;
        for(j=0;j<n;j++)
        { if(visited[j]==0)
            {
                if (d[j]< min)
                    { min=d[j];
                        u=j;
                    }
            }
        }
    visited[u]=1;
    for(v=0;v<n;v++)
    {
        if(visited[v]==0)
        {
            if( (d[u] + cost[u][v]) < d[v])
            {
                d[v]=d[u] + cost[u][v];
                p[v]=u;
            }
        }
    }
    }
}
void print_path(int source,int dest, int d[], int p[])
{
    int i;
    i=dest;
    while(i!=source)
    {
        printf("%d <--",i);
        i=p[i];
    }
    printf("%d=%d\n",i,d[dest]);
}

int main()
{
    int cost[10][10],n,p[10],i,j,s;
    printf("Enter the number of nodes in the graph:\n");
    scanf("%d",&n);

    printf("\nEnter the cost adjacency matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);
    }
    printf("\nEnter the source vertex:");
    scanf("%d",&s);
    //s=s-1;
    printf("\nThe shortest paths from the source vertex and corresponding distances are:\n");
    dijkstra(n,cost,s,p);
    for(j=0;j<n;j++)
    {
        if(d[j]==9999)
            printf("%d is not reachable from %d\n",j,s);
        if(s!=j)
            print_path(s,j,d,p);
    }
    getch();
    return 1;
}
