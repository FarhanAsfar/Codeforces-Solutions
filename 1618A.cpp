#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int arr[7];
		for(int i=0;i<7;i++){
			cin>>arr[i];
		}
		cout<<arr[6]-arr[5]<<" ";
		cout<<arr[6]-arr[4]<<" ";
		cout<<arr[6]-(arr[0]+arr[1])<<" ";
		cout<<"\n";
	}	

	return 0;
	//accepted.
}