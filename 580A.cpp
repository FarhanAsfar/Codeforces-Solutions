#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,c=0,m=0;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
	cin>>arr[i];
	if(arr[i]>=arr[i-1])
		c++;
	else c=1;
		m=max(m,c);
	}
	cout <<m;

	return 0;
} 