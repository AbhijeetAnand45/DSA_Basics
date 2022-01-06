// Time Complexity worst case(reversed array): O(n^2)  
// Auxiliary Space: O(1)
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

// 6 5 4 3 2 1

void insertionSort(int a[],int n){
   
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j;
        for(j=i-1;j>=0 and temp < a[j]; j--){
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