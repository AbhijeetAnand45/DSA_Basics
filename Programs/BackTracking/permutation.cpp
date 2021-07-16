/*Given an array nums of distinct integers,
 return all the possible permutations. You can return the answer in any order.*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
// void permute(vector<int> a,idx)
// {
//     if(a.size()==idx){
//         ans.push_back(nums);
//         return;
//     }
//     for(int i=idx,i<a.size();i++){
//         swap(a[i],a[idx]);
//         permute(a,idx+1);
//         swap(a[i],a[idx]);
//     }
//     return;
// }
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    // permute(a,0);
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}