#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int m = *max_element(arr, arr+n);
	int i = distance(arr, max_element(arr, arr+n));

	sort(arr, arr+n);
	int p = arr[n-2];

	cout<<i+1<<" "<<p;

	return 0;
}