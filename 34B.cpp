#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,m;
	cin>>n>>m;
	cout<<n*m;
/*	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+len);
	int sum=0;

	/*for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	for(int i=0;i<n;i++){
		if(arr[i]<0 && m!=0){
			sum += arr[i];
			m--;
		}
	}	
	cout<<abs(sum);
*/

	return 0;
}