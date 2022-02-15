// Time Complexity worst case(reversed array): O(n^2)  
// Auxiliary Space: O(1)

/* 
Algorithm 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. 
Move the greater elements one position up to make space for the swapped element.
*/
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

// 6 5 4 3 2 1

void insertionSort(int a[],int n){
   
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j;
        for(j = i-1; j >= 0 and a[j] > temp; j--){
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);  
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