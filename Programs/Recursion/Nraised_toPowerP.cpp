#include<bits/stdc++.h>
using namespace std;

int raisedPower(int n, int p){
    if(p == 0) {
        return 1;
    }

    return n * raisedPower(n, p-1);
}

int main() {
    int n, p;
    cin>>n>>p;

    cout<<raisedPower(n,p);
}