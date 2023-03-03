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
	int x;

	for(int i=1;i<=n;i++){
		cin>>x;
		arr[x] = i;
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
	//accepted.

	return 0;
}