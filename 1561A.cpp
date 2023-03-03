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
			//brr[i] = arr[i];
		}
		//sort(brr, brr+n);
		int count=0;
		while(!is_sorted(arr, arr+n)){
			for(int i=count%2;i<n-1;i+=2){
				if(arr[i]>arr[i+1]){
					swap(arr[i],arr[i+1]);
				}
			}
			count++;
		}
		cout<<count<<"\n";
		
	}
	//accepted. 
	//scope problem is maybe for cpp version.

	return 0;
}