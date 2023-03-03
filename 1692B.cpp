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

		set<int> s(arr,arr+n);
		int count=0;
		for(int i:s){
			count++;
		}

		if((n-count)%2==0){
			cout<<count<<endl;
		}
		else{
			cout<<count-1<<endl;
		}
	}	
	//accepted
	
	return 0;
} 