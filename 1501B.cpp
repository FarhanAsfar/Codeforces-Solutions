#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int brr[n]={0}, c=0;

		for(int i=n-1;i>=0;i--){
			c = max(c,arr[i]);
			if(c>0){
				brr[i]=1;
				c--;
			}
		}
		for(int i=0;i<n;i++){
			cout<<brr[i]<<" ";
		}
		cout<<"\n";
	}	

	return 0;
}