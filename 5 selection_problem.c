#include<stdio.h>
#include<stdlib.h>

/* C program for the selection problem to find the
    kth smallest Element in a array.*/

int kthSmallest(int A[], int left, int right, int K)
{
    if (left == right)
         return A[left];
    int pos=partition(A,left,right);
    int count = pos - left + 1;
    if ( count == K )
         return A[pos];
    else if ( count > K )
         return kthSmallest(A, left, pos-1, K);
    else
         return kthSmallest(A, pos+1, right, K-1);
}
int partition(int A[], int l, int r)
{
    int temp,j;
    int x = A[r];
    int i = l-1;
    for ( j = l; j<=r-1;j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i]= A[j];
            A[j]= temp;
        }
    }
    temp = A[i+1];
    A[i+1]= A[r];
    A[r]= temp;
    return i+1;
}
int main(){
    int a[50],k,r,n,i;
    printf("\nPlease enter Number of element you want to enter: ");
    scanf("%d",&n);
    printf("\nplease Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p = 0;
    int q = n-1;
    printf("\nplease enter the Kth smallest element you want to find: ");
    scanf("%d",&k);
    r=kthSmallest(a,p,q,k);
    printf("\n%d th smallest value is = %d\n",k,r);

    return 0;
}
