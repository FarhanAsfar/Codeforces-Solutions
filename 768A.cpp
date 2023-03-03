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
	long long arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+len);
	/*for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}*/
	//int x = *max_element(arr, arr+n)-arr;
	//cout<< *max_element(arr, arr+n);
	long long left=0, right=len-1;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[left] && arr[i]<arr[right] ){
			count++;
		}
	}
	cout<<count;

	//accpeted
	return 0;
}