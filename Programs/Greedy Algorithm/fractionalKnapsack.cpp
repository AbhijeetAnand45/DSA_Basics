#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
	problem statement :- you are given n items with {weight,value} of each item and capacity
	of knapsack(container). we need to put these items in the knapsack such that final value
	of items in the knapsack is maximum.

	Algorithm :- 
	1. calculate the value per weight.
	2. sort in decreasing order according value per weight.
	3. pick from starting till our knapsack has capacity to store.

	ex :  sorted allready 
		v = 40 24 30 21 12
		w = 5  4  6  7  6
	 v/w =  8  6  5  3  2
*/

struct items
{
	double value;
	double weight;
	double valperweight;
};
bool compare(items a,items b){
	return a.valperweight > b.valperweight;
}
signed main(){
	int n;
	cin>>n;
	vector<items> item;
	for(int i=0;i<n;i++){
		double v,w;
		cin>>v>>w;
		item.push_back({v,w,v/w});
	}
	double capacityOfKnapsack;
	cin>>capacityOfKnapsack;

	sort(item.begin(),item.end(),compare);
	
	int ans = 0;
	for(int i=0;i<n;i++){
		if(capacityOfKnapsack >= item[i].weight){
			ans = ans + item[i].value;
			capacityOfKnapsack -= item[i].weight;
		}
		else{
			ans = ans + capacityOfKnapsack * item[i].valperweight;
			capacityOfKnapsack = 0;
			break;
		}
	}
	cout<<"Maximum profit with maximum weight is "<<ans<<"\n";
	return 0;
}
/*
5
40 5
24 4
30 6
21 7
12 6
20
Maximum profit with maximum weight is 109

*/












/*
#include<stdio.h>
#include<time.h>
#include<conio.h>
void knapsack(float capacity, int n, float weight[], float profit[])
{
	float x[20], totalprofit,y;
	int i,j;
	y=capacity;
	totalprofit=0;
	for(i=0;i < n;i++)
		x[i]=0.0;
	for(i=0;i < n;i++)
	{
		if(weight[i] > y)
			break;
		else
		{
			x[i]=1.0;
			totalprofit=totalprofit+profit[i];
			y=y-weight[i];
		}
	}
	if(i < n)
		x[i]=y/weight[i];
	totalprofit=totalprofit+(x[i]*profit[i]);
	printf("The selected elements are:-\n ");
	for(i=0;i < n;i++)
		if(x[i]==1.0)
			printf("\nProfit is %.2f with weight %.2f ", profit[i], weight[i]);
		else if(x[i] > 0.0)
			printf("\n%f part of Profit %.2f with weight %.2f", x[i], profit[i], weight[i]);
	printf("\nTotal profit for %d objects with capacity %.2f = %.2f\n\n", n, capacity,totalprofit);
}
void main()
{
    int n;
	float weight[20],profit[20],ratio[20], t1,t2,t3;
	time_t start,stop;
	float capacity;
	int i,j;
	printf("Enter number of objects:  ");
	scanf("%d", &n);
	printf("\nEnter the capacity of knapsack: ");
	scanf("%f", &capacity);
	for(i=0;i < n;i++)
	{
		printf("\nEnter %d(th)  profit: ", (i+1));
		scanf("%f", &profit[i]);
		printf("Enter %d(th)  weight: ", (i+1));
		scanf("%f", &weight[i]);
		ratio[i]=profit[i]/weight[i];
	}
	start=time(NULL);
	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
		{
			if(ratio[i] > ratio[j])
			{
				t1=ratio[i];
				ratio[i]=ratio[j];
				ratio[j]=t1;
				t2=weight[i];
				weight[i]=weight[j];
				weight[j]=t2;
				t3=profit[i];
				profit[i]=profit[j];
				profit[j]=t3;
			}
		}
    printf("Weight is:\n");
    for(i=0;i<n;i++){
        printf("%f ",weight[i]);
    }
	knapsack(capacity,n,weight,profit);
	stop=time(NULL);
	printf("\nKnapsack = %f\n", difftime(stop,start));
	getch();
}
*/
