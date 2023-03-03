#include <bits/stdc++.h>
using namespace std;

int dp[100][100];
int trace[100][100];

void traceback(int arr[], int n, int k){
	if(n==0 && k!= 0)
		return ;
	if(k==0)
		return ;
	if(trace[n][k]==1){
		cout<<n<<" ";
		traceback(arr, n-1, k-arr[n]);
	}
	else{
		traceback(arr, n-1, k);
	}
}

bool coinchange(int arr[], int n, int k){
	if(n==0 && k!=0)
		return false;
	if(k==0)
		return true;

	if(dp[n][k]!=-1)
		return dp[n][k];

	if(k>=arr[n]){
		int l1 = coinchange(arr, n-1, k-arr[n]);
		int l2 = coinchange(arr, n-1, k);
		if(l1>l2){
			trace[n][k] = 1;
			return dp[n][k] = l1;
		}
		else{
			trace[n][k] = 0;
			return dp[n][k] = l2;
		}
	}
	else if(k<arr[n]){
		trace[n][k] = 0;
		return dp[n][k] = coinchange(arr, n-1, k);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	memset(dp, -1, sizeof(dp));
	int n, k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(coinchange(arr, n, k)==true)
		cout<<"possible\n";
	else
		cout<<"not\n";

	traceback(arr,n,k);

	return 0;
} 