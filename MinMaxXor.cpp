#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	int arr[n], xorr[6];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			xorr[x] = (arr[i] ^ arr[j]);
			x++;
		}
	}

	for(int i=0;i<x;i++){
		cout<<xorr[i]<<" ";
	}

	return 0;
} 