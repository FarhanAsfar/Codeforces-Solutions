#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,count=0;
	cin>>n;
	int arr[]={100,20,10,5,1};

	for(int i=0;i<5;i++){
		count += n/arr[i];
		n = n%arr[i];
	}
	cout<<count;
	

	return 0;
}