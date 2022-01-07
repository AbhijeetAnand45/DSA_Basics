#include<bits/stdc++.h>
using namespace std;


// find the first and last occurance of a number in an array 
// {4,2,1,2,5,2,7} // number = 2
int firstOccur(int arr[],int i, int n, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    firstOccur(arr,i+1,n,key);
   
}

int lastOccur(int arr[],int i,int n,int key) {
    if(i == -1){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    lastOccur(arr,i-1,n,key);
}

int main() {
    int arr[] = {4,2,1,2,5,2,7};


    cout<<firstOccur(arr,0,7,2)<<"\n";
    cout<<lastOccur(arr,6,7,2)<<"\n";
}