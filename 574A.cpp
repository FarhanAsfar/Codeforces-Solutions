#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n,count=0;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int limak = arr[0];
	int m = *max_element(arr, arr+n);

	sort(arr+1, arr+n);

	if(limak>m){
		cout<<"0";
	}
	else{
		while(limak<=arr[n-1]){
			limak++;
			//arr[0]++;
			arr[n-1]--;
			count++;
			sort(arr+1, arr+n);
		}
		cout<<count;
	}

	return 0;
}