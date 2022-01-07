#include<bits/stdc++.h>
using namespace std;


// check if a given array is sorted or not using recursion
// {1,2,3,4,5,6,7}
int isSorted(int arr[],int n) {

    if(n == 1){
        return true;
    }
    
    bool restArray = isSorted(arr+1,n-1);
    return (arr[0]<arr[1] and restArray);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    cout<<isSorted(arr,7);

    return 0;
}