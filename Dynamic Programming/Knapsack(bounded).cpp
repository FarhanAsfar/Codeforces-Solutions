#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[200][200];

int knapsack(int value[], int weight[], int n, int capacity){
	if(n==0 || capacity==0)
		return 0;

	if(dp[n][capacity] != -1)
		return dp[n][capacity];

	if(capacity >= weight[n]){
		return dp[n][capacity] = max(value[n] + knapsack(value,weight,n-1,capacity-weight[n]), knapsack(value,weight,n-1,capacity));
	}
	else{
		return dp[n][capacity] = knapsack(value,weight,n-1,capacity);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	memset(dp, -1, sizeof(dp));

	int value[100], weight[100];
	int n, capacity;
	cin>>n>>capacity;

	for(int i=0;i<n;i++){
		cin>>value[i];
	}
	for(int i=0;i<n;i++){
		cin>>weight[i];
	}
	
	cout<<knapsack(value,weight,n,capacity);

	return 0;
} 