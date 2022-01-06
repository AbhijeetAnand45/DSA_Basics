#include<bits/stdc++.h>
using namespace std;
struct Activity
{
    int start;
    int finish;

    // adding
    // int number;
};

// Sorting by their finish time
bool compare(Activity a,Activity b){
    return a.finish < b.finish;
}
int main()
{
    int n;
    cin>>n;
    vector<Activity> time;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        //adding i+1
        time.push_back({x,y});
    }
    sort(time.begin(),time.end(), compare);
    int ans=1;

    // adding
    // cout<<time[0].number<<" ";


    int prevEndTime = time[0].finish;
    cout<<"selected activities are : ";
    cout<<"("<<time[0].start<<","<<time[0].finish<<"),";
    for(int i=1;i<n;i++){
        if(time[i].start > prevEndTime){
            ans++;
            cout<<"("<<time[i].start<<","<<time[i].finish<<") ";

            //adding
            // cout<<"\n"<<time[i].number<<"\n";


            prevEndTime = time[i].finish;
        }
        else{
            continue;
        }
    }
    cout<<"\nMaximum Activity that can be selected is "<<ans;
    return 0;
}