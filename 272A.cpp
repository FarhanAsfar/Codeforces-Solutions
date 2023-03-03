#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int arr[n],sum=0,count=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=1;i<=5;i++){
		if((sum+i)%(n+1) != 1){
			count++;
		}
	}
	cout<<count;

	return 0;
}