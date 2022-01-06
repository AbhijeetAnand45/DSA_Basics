#include<bits/stdc++.h>
using namespace std;


// Exponential time complexity
int fibo(int n){
    if(n== 0 || n==1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

// Top-Down (Memoization)
const int N = 1e5+2;
int dpe[N] = {-1};
int fibonacci(int n){
     if(n==0|| n==1){
        return 0;
        }
        if(n<0){
            return 0;
        }
        if(dpe[n] != -1){
            return dpe[n];
        }
        dpe[n] = fibonacci(n-1) + fibonacci(n-2);
        return dpe[n];
   
}

// bottom - up (Tabulation Method) (Linear Time Complexity)
int dp[N] = {-1};
int computefibo(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}



int main(){
    int n;
    cin>>n;
    cout<<"nth fibonacci no is "<<fibonacci(n);
    return 0;
}