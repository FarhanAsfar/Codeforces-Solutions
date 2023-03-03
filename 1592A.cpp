#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	long long t,n,h;
	cin>>t;

	while(t--){
		cin>>n>>h;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr, arr+n, greater<int>());
		int max1 = arr[0];
		int max2 = arr[1];

		int count=0;
		while(h>0){
			if(max1>h){
				cout<<"1"<<"\n";
				break;
			}
			else{
				h -= max1+max2;
			}			
		}
		//cout<<count<<"\n";

		cout<<max1<<" "<<max2;
	}
	

	return 0;
}