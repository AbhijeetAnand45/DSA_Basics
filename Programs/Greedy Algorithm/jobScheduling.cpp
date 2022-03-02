#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

/*  Algorithm :-
    Sort all jobs in decreasing order of profit.
    Iterate on jobs in decreasing order of profit. for each job , find a time 
    slot from the deadline to 0. if found empty slot put the job in the slot 
    and mark this slot as filled.
*/

struct Job {
    char id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobSchedule(Job arr[], int n) {
    sort(arr, arr+n, compare);
    int ans[n];
    bool slot[n];
    for(int i = 0; i < n; i++) {
        slot[i] = false;  
    }
    for(int i = 0; i < n; i++) {
        for(int j = min(n, arr[i].deadline) - 1; j >= 0; j--) {
            if(slot[j] == false) {
                ans[j] = i;   // adding to ans
                slot[j] = true; // slot occupied
                break;
            }
        }
    }
    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
        if(slot[i]) {
            maxProfit += arr[ans[i]].profit;
            cout<<arr[ans[i]].id<<" ";
        }
    }
    cout<<maxProfit;
}

void solve(){
    Job arr[] = {
        {'a', 2, 100},
        {'b', 1, 19},
        {'c', 2, 27},
        {'d', 1, 25},
        {'e', 3, 15}
    };
    int n = sizeof(arr)/sizeof(arr[0]);
    jobSchedule(arr, n);
  
}



int main(){
    fast 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    solve();
    // int testcase;
    // cin>>testcase;
    // while(testcase--){
    //    solve();
    // }
    return 0;
}