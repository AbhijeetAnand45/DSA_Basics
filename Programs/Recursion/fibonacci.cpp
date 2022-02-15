#include<bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 ...  

    //               fibo(4)
    //             /         \
    //        fibo(3)   +     fibo(2)
    //         /   \           /     \
    //     fibo(2)+ fibo(1)  fibo(1)+ fibo(0)
    //     /   \
    // fibo(1)+ fibo(0)
int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cin>>n;

    cout<<fibo(n);
}