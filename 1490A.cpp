#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t,n,ma,mi;
	cin>>t;

	while(t--){

		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int count=0;

		//int len = sizeof(arr)/sizeof(arr[0]);
		//ma = *max_element(arr, arr+len);
		//mi = *min_element(arr, arr+len);
		//cout<<ma<<" "<<mi<<"\n";
		for(int i=0;i<n-1;i++){
			ma = max(arr[i],arr[i+1]);
			mi = min(arr[i],arr[i+1]);
			while(ma>mi*2){
				mi=mi*2;
				count++;
			}
		}
		
		cout<<count<<"\n";
	}


	return 0;
}