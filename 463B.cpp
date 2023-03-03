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
	int arr[n];
	int h=0, sum=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sum=arr[0];

	for(int i=0;i<n-1;i++){
		h+=arr[i]-arr[i+1];
		if(h<0){
			sum += abs(h);
			h=0;
		}
	}
	cout<<sum<<endl;

	//accepted.

	return 0;
} 