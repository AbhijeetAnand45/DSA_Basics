#include<bits/stdc++.h>
using namespace std;

// backtracking: print  n to 1
void print(int i, int n) {
    if(i > n) {
        return;
    }
    
    print(i+1, n);
    cout<<i<<" ";
}

void printrec(int i, int n) {
    if(i < 1) {
        return;
    }
    cout<<i<<" ";
    printrec(i-1, n);
}

int main() {

    int n;
    cin>>n;

    print(1, n);
    cout<<"\n";
    printrec(n, n);

    return 0;
}