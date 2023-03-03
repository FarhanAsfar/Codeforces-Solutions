#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[N];

int fib(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(dp[n] != -1)
		return dp[n];

	return dp[n] = fib(n-1)+fib(n-2);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;

	//cout<<fib(n);
	dp[0]=0;
	dp[1]=1;
	fib(n);

	cout<<"Fibonacci array: ";
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<"\n"<<n<<"th Fibonacci Number: "<<fib(n);

	return 0;
} 