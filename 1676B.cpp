#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int mini = arr[0];
		int sum = 0;

		for(int i=1;i<n;i++){
			sum+=arr[i]-mini;
			//cout<<sum<<endl;
		}
		cout<<sum<<endl;
	}

	return 0;
} 