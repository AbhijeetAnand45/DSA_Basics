// Problem Link : https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include<bits/stdc++.h>
using namespace std;

int minJump(int arr[],int n){
    if(n<=0){
        return 0;
    }
    if(arr[0] == 0){
        return -1;
    }
    int maxrange = arr[0], steps = arr[0];
    int jumps = 1;
    for(int i=1;i<n;i++){
        if(i == n-1){
            return jumps;
        }
        maxrange = max(maxrange,i+arr[i]);
        steps--;
        if(steps == 0){
            jumps++;
            if(i>= maxrange){
                return -1;
            }
            steps = maxrange - i;
        }
    }
    return jumps;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Minimum Jump Needed to reach end "<<minJump(arr,n);
    return 0;
}