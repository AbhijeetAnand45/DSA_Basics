
/* 
    Worst Case Time Complexity : O(n^2)  // space : O(1)
    Best case : O(n)
<-- QuickSort -->
QuickSort is a Divide and Conquer algorithm.  It picks an element as pivot and partitions 
the given array around the picked pivot. 
There are many different versions of quickSort that pick pivot in different ways. 
 - Always pick first element as pivot.
 - Always pick last element as pivot (implemented below)
 - Pick a random element as pivot.
 - Pick median as pivot.
 
 <-- Partition -->
 The key process in quickSort is partition(). 
 Target of partitions is, given an array and an element x of array as pivot, 
 put x at its correct position in sorted array and 
 put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) 
 after x. All this should be done in linear time.
*/
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int a[], int low, int high) 
{ 
    int pivot = a[high]; // selecting pivot
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        
        if (a[j] < pivot) 
        { 
            i++; 
            swap(&a[i], &a[j]); 
        } 
    } 
    swap(&a[i + 1], &a[high]); 
    return (i + 1); 
} 

void quickSort(int a[], int low, int high) {
    if (low < high) 
    { 
        /* pi is partitioning index */
        int pi = partition(a, low, high); 
  
        quickSort(a, low, pi - 1); 
        quickSort(a, pi + 1, high); 
    } 
   

}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    fast
    int t;
    cin>>t;
    while(t--){
        solve();       
    }
    return 0;

}