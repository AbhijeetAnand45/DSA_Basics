#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> A,int n,int item) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = low + (high - low)/2;
        if(item==A[mid])
        {
            printf("\nSEARCH SUCCESSFUL AT INDEX %d\n",mid);
            return;
        }
        else if(item>A[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("\nSEARCH UNSUCCESSFUL");
}
int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int data;
    cin>>data;
    binarySearch(arr,n,data);

    return 0;
}


