
/* MATRIX CHAIN MULTIPLICATION IMPLEMENTATION
   NAME : ABHIJEET ANAND
   ROLL : 19103001  */

#include <limits.h>
#include <stdio.h>
#include<stdlib.h>

// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
int MatrixChain(int a[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;   //To count the minimum cost/value of multiplication

	//To return the minimum count
	for (k = i; k < j; k++)
	{
		count = MatrixChain(a, i, k) + MatrixChain(a, k + 1, j) + a[i - 1] * a[k] * a[j];

		if (count < min)
			min = count;
	}

	return min;
}

// Driver code
int main()
{
    int n,i;
    printf("\n Here , I am creating and array and from that I will take matrix of dimension as \n Matrix Ai has dimension p[i-1] x p[i] for i = 1..n\n");

    printf("\nplease enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nplease enter the data of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	//int arr[] = { 1, 2, 3, 4};
	//int n = sizeof(arr) / sizeof(arr[0]);

	printf("\nMinimum number of multiplications of matrix of sequence is %d \n",MatrixChain(arr, 1, n - 1));

	getchar();
	return 0;
}

