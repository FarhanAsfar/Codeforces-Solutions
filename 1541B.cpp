#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int arr[n];
		int count=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		} 

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]*arr[j]==i+j){
					count++;
				}
			}
		}
		cout<<count;
	}


	return 0;
}