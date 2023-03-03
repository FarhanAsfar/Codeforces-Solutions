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
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				break;
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
} 