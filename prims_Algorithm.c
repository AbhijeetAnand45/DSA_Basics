/* NAME : ABHIJEET ANAND
   ROLL : 19103001
   SEMESTER : IV
   A C PROGRAM TO IMPLEMENT PRIM'S MINIMUM SPANNING TREE ALGORITHM.
   I HAVE USED ADJACENCY MATRIX REPRESENTATION OF THE GRAPH. */

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

// REPRESENTS No. OF VERTEX IN THE GRAPH.
int V; // GLOBAL VARIABLE

/* A FUNCTION TO FIND MINIMUM KEY VALUE FROM SET OF VERTICES WHICH IS NOT YET INCLUDED IN MST. */
int minKey(int key[], bool mstSet[])
{
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}

    /* FUNCTION TO PRINT MST STORED IN PARENT ARRAY. */
int printMST(int parent[], int graph[V][V])
{
    int cost = 0;
    printf("\nSelected Edge and their weight are: \n");
	printf("Edge \tWeight\n");
	for (int i = 1; i < V; i++){
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
		cost = cost + graph[i][parent[i]];
	}
    printf("\nMinimum cost of spanning tree is : %d\n",cost);
}

        /* FUNCTION TO PRINT MST. */
void primMST(int graph[V][V])
{
	int parent[V];  // ARRAY TO STORE CONSTRUCTED MST.
	int key[V];  // KEY VALUES USED TO PICK MINIMUM WIEGHT EDGE IN CUT.
	bool mstSet[V];  // FOR THE SET OF VERTICES INCLUDED IN MST ,EITHER TRUE OR FALSE.

	for (int i = 0; i < V; i++)
		key[i] = INT_MAX, mstSet[i] = false; //INITIALISED TO AVOID ANY GARBAGE ERROR.

	key[0] = 0;
	parent[0] = -1;
	for (int count = 0; count < V - 1; count++) {

		int u = minKey(key, mstSet);// FINDING MINIMUM KEY VERTEX THAT NOT YET INCLUDED IN MST.
        mstSet[u] = true;// ADDING PICKED VERTEX TO MST SET

		// NOW UPDATING KEY VALUE AND PARENT INDEX OF ADJACENT VERTCIES OF PICKED VERTEX
		// TAKE ONLY THOSE WHICH ARE NOT YET INCLUDED IN MST.
		for (int v = 0; v < V; v++)
			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
	}

	// PRINT THE CONSTRUCTED MST.
	printMST(parent, graph);
}

// MAIN PROGRAM
int main()
{
	int i,j;
	printf("Please enter the Number of vertex in the Graph: ");
	scanf("%d",&V);
	int graph[V][V];
	printf("Please Enter the cost of edge of graph row wise, Each row contains %d values: \n",V);
	for(i=0;i<V;i++)
        for(j=0;j<V;j++){
            scanf("%d",&graph[i][j]);

    }
	// PRINT THE SOLUTION
	primMST(graph);

	return 0;
}
