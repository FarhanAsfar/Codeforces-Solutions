#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,count=0;
	cin>>n;
	int x[n], y[n];

	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	
	for(int i=0;i<n;i++){
		int right=0,left=0,upper=0,lower=0;

		for(int j=0;j<n;j++){
			if(x[j]>x[i] && y[j]==y[i])
				right++;
			if(x[j]<x[i] && y[j]==y[i])
				left++;
			if(x[j]==x[i] && y[j]<y[i])
				lower++;
			if(x[j]==x[i] && y[j]>y[i])
				upper++;
		}
		if(right>0 && left>0 && upper>0 && lower>0)
			count++;
	}
	cout<<count;


	return 0;
}