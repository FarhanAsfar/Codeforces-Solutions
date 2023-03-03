#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,h;
	cin>>n>>h;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s=0,f=0;
	for(int i=0;i<n;i++){
		if(arr[i]>h){
			f++;
		}else{
			s++;
		}
	}
	cout<<s+(f*2);



	return 0;
}