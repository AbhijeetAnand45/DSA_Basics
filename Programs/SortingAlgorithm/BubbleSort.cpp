
//Worst Case Time Complexity : O(n^2)  // space : O(1)

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void bubbleSort(int a[],int n){
   
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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
    bubbleSort(a,n);
    
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