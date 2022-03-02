#include<bits/stdc++.h>
using namespace std;

#define int long long

/* 
     problem : given n files with their computation times in an array.
     you can perform operations as :
     take two files, add their computation times and append it to the list of computation
     times. do it until only 1 file remaining. and "find the minimum cost to do this."

     algorithm :- using minheaps
     1. push all the elements to a min heap.
     2. take the top 2 elements one by one and add the cost to ans and push their sum to minHeap.
     3. when a single element remains, output the cost.

     eg :- 
     arr = 5,2,4,7         2, 4, 5, 7
            |                |
            7  4             6   5
             |                 |
             11  7             11   7
               |                  |
               18                 18
      cost = 7+11+18 = 36     cost = 6+11+18 = 35(minimum)

*/

signed main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }

    int ans = 0;
    while(minHeap.size() > 1) {
        int x = minHeap.top();
        minHeap.pop();
        int y = minHeap.top();
        minHeap.pop();

        ans += x + y;
        minHeap.push(x+y);
    }
    cout<<ans<<"\n";
    return 0;
}