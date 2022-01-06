#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int> A,int n,int item) {
    
    int flag = 1;
    for(int i = 0; i < n; i++) {
        if(A[i] == item) {
            printf("Search successful");
            flag=0;
            return;
        }
    }
    if(flag) {
        printf("Search unsuccessful");
    }

}
int main()
{
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
    linearSearch(arr,n,data);

    return 0;
}
