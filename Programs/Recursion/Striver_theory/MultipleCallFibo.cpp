#include<bits/stdc++.h>
using namespace std;

// Time Complexity is exponential in nature i.e. for each n in recursion tree we are calling 2 recursive function
//  which is for n -> 2 call, n-1 -> 2 call and so on...
// => TC = 2^n


int fibo(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cin>>n;

    cout<<fibo(n);
    return 0;
}