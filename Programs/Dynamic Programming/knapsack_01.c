
/* A c program to implement the 0-1 knapsack problem
     NAME : ABHIJEET ANAND
     ROLL : 19103001 */

#include <stdio.h>
#include<stdlib.h>

// function to returns maximum of two integers

int max(int a, int b)
{
    return (a > b) ? a : b;
}

   // FUNCTION TO RETURN THE MAXIMUM VALUE TO BE STORED IN THE KNAPSACK
int knapSack(int W, int wt[], int val[], int n)
{
	// KNAPSACK PROBLEM
	if (n == 0 || W == 0)
		return 0;

	/* If weight of the nth item is more than Knapsack capacity W, then this item cannot
	 be included in the optimal solution */
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	// Return the maximum of two cases:
	else
		return max(val[n - 1]+ knapSack(W - wt[n - 1],wt, val, n - 1),  //nth item included
			                       knapSack(W, wt, val, n - 1));   // not included
}

 //MAIN FUNCTION TO CALL KNAPSACK
int main()
{
    int w,n,i;
    printf("\nplease enter the size of value and weight array: ");
    scanf("%d",&n);
    int val[n],wt[n];
    printf("\nplease enter the capacity of knapsack: ");
    scanf("%d",&w);
    printf("\nplease enter %d values: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    printf("\nplease enter %d weight: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
    printf("\nMaximum value is %d\n",knapSack(w,wt,val,n));

    return 0;
}

