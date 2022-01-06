#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n],fre[MAX]={0};
      for(int i=0;i<n;i++)
      {
        cin>>arr[i] ;
        fre[arr[i]]++;
      }
      //sort(arr,arr+n);
      
      long long int sum=0;
      for(int i=1;i<=n;i++)
      {
      	if(fre[i]==0)
      	{
              for(int j=0;j<n;j++){
                  if(arr[j] > n){
                      arr[j] = i;
                      sum = sum + arr[j] - i;
                      fre[i]++;
                  }
              }
      		// for(int j=1;j<MAX;j++)
      		// {
      		// 	if(fre[j]>1)
      		// 	{
      		// 		sum=sum+abs(j-i);
      		// 		fre[j]--;
      		// 		break;
			// 	  }
			// 	  else if(j>n && fre[j]>=1)
			// 	  {
			// 	  	sum=sum+abs(j-i);
			// 	  	fre[j]--;
			// 	  	break;
			// 	  }
			// }
	    }
      }
      cout<<sum<<endl;
    }
    return 0;
} 