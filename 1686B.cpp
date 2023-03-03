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
		int count=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				count++;
				i+=1;
			}
		}
		if(count==0)
			cout<<0<<endl;
		else
			cout<<count<<endl;
	}
	//accepted.
	
	return 0;
} 