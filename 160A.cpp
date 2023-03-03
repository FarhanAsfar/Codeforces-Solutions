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
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+len);
	//int right = n-1;
	
	/*for(int i=n-1;i>0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";*/

	int count=0,dum=0;
	for(int i=n-1;i>=0;i--){
		if(dum>sum)
			break;
		dum += arr[i];
		sum -= arr[i];
		count++;
		//cout<<sum<<"\n";
		//cout<<dum<<"\n";
		/*if(dum>sum)
			break;*/
	}
	cout<<count;


	return 0;
}