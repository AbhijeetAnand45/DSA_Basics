#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

class Solution {
public:
    // Problem link : https://leetcode.com/problems/coin-change-2/
    // Recursive Approach 
   
    int recursive(vector<int>& wt, int w, int n) {
        if (n == 0 || w == 0)
            return (w == 0) ? 1 : 0;
        

        if (wt[n - 1] > w) 
            return  recursive(wt, w - 0, n - 1);
        else 
            return  recursive(wt, w - 0, n - 1) + recursive(wt, w - wt[n - 1], n));
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        int minCoins = recursive(coins, amount, coins.size());
        return minCoins;    
    }
    
    
    
    
    // TopDown (Memoization : remembering val of recursion)
   /* 
    int dp[10000 + 1][12 + 1];
    int memoization(vector<int>& wt, int w, int n) {
        if (n == 0 || w == 0)
            return (w == 0) ? 0 : INT_MAX - 1;
        
        if (dp[w][n] != -1)
            return dp[w][n];
			
        if (wt[n - 1] > w) 
            return dp[w][n] = 0 + memoization(wt, w - 0, n - 1);
        else 
            return dp[w][n] = min(0 + memoization(wt, w - 0, n - 1), 1 + memoization(wt, w - wt[n - 1], n));
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int minCoins = memoization(coins, amount, coins.size());
        return minCoins == INT_MAX - 1 ? -1 : minCoins;    
    } */
};

int main(){
    fast 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--){
       int n;
       cin>>n;
       vector<int> coins(n);
       for(int i = 0; i < n; i++) {
           cin>>coins[i];
       }
       int amount;
       cin>>amount;

       Solution obj;
       int ans = obj.coinChange(coins,amount);
       cout<<"minimum no. of coin is "<<ans<<"\n";

    }
    return 0;
}