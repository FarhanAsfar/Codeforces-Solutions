#include <bits/stdc++.h>
using namespace std;
const int N=1e5;

int dp[200][200];

bool coinChange(int arr[], int n, int k){
	if(n==0 && k!=0)
		return false;
	if(k==0)
		return true;

	if(dp[n][k]!=-1)
		return dp[n][k];

	if(k>=arr[n]){
		return dp[n][k] = coinChange(arr, n-1, k-arr[n]) || coinChange(arr, n-1, k);
	}else{
		return dp[n][k] = coinChange(arr, n-1, k);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	memset(dp, -1, sizeof(dp));
	int n,k;
	cin>>n>>k;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//cout<<coinChange(arr,n,k);
	if(coinChange(arr, n, k)==true)
		cout<<"Possible";
	else
		cout<<"Not Possible";

	return 0;
} 