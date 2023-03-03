#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,n,x;
	cin>>t;

	while(t--){
		cin>>n>>x;
		int arr[n],brr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			brr[i] = arr[i];
		}
		sort(brr, brr+n);
		int flag=0;

		for(int i=n-x;i<x;i++){
			if(arr[i]!=brr[i])
				flag=1;
		}
		if(flag==1){
			cout<<"no";
		}else{
			cout<<"yes";
		}
		cout<<"\n";
		
	}	

	return 0;
}