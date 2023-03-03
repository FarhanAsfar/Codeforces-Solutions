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

		int count=0,hold;

		for(int i=0;i<n;i++){
			if(arr[i]>(i+1)){
				hold = arr[i]-(i+1);
				count = max(count,hold);
			}
		}
		cout<<count<<"\n";
	}	

	return 0;
}