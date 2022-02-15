#include <bits/stdc++.h>
  using namespace std;
//   int count = 0;
int total_ways(int arr[], int i, int size, int k) {
      /* If all elements are processed and 
   target is not reached, return 0 */
    if(i >= size and k != 0) {
      return 0;
    }
      // If target is reached, return 1 
    if(k == 0) {
      return 1;
    }
    /* Return total count of three cases 
     1. Don't consider current element 
     2. Consider current element and subtract it from target 
     3. Consider current element and add it to target */
    return total_ways(arr, i+1, size, k) + 
    total_ways(arr, i+1, size, k + arr[i]) + 
    total_ways(arr, i+1, size, k - arr[i]);
    
  }
int main() {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
     
      int arr[n];
      for(int i=0;i<n;i++)
      cin>>arr[i];

     int ans= total_ways(arr, 0, n, k);
     cout<<ans<<endl;
     
    }
    return 0;
  }