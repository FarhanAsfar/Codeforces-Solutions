#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a = arr[1]-arr[0]; //minimum index for the 1st index
	int b = arr[n-1]-arr[0];//maximum index for the 1st index
	cout<<a<<" "<<b<<"\n"; 

	for(int i=1;i<n-1;i++){
		if(arr[i]-arr[i-1]<=abs(arr[i]-arr[i+1])){
			cout<<arr[i]-arr[i-1]<<" ";
		}else{
			cout<<abs(arr[i]-arr[i+1])<<"\n";
		}

		if(arr[i]-arr[0]>=abs(arr[i]-arr[n-1])){
			cout<<arr[i]-arr[0]<<" ";
		}else{
			cout<<abs(arr[i]-arr[n-1])<<"\n";
		}
	}
	cout<<"\n";
	int y = arr[n-1]-arr[n-2];//min index for the last index
	int z = arr[n-1]-arr[0];//max index for the last index.
	cout<<y<<" "<<z;

	return 0;
}