// Problem link : https://www.hackerrank.com/challenges/chocolate-feast/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=7-day-campaign
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,c,m;
        cin>>n>>c>>m;
        int chocolate = n/c;
        int ans = chocolate;
        while(chocolate/m > 0){
            int chco = chocolate;
            chocolate = chocolate / m;
            ans = ans + chocolate;
            chocolate += chco % m;
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}