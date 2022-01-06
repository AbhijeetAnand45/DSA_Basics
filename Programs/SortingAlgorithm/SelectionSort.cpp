//Worst Case Time Complexity : O(n^2)  // space : O(1)
// best case : O(n)
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int minimum(int a[],int idx,int n){
    int mini = a[idx];
    int loc = idx;
    for(int j = idx+1;j<n;j++){
        if(mini >= a[j]){
            mini = a[j];
            loc = j;
        }
    }
    return loc;
}

void selectionSort(int a[],int n){
   
    for(int i=0;i<n;i++){
        int loc = minimum(a,i,n);
        int temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
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
    selectionSort(a,n);
    
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