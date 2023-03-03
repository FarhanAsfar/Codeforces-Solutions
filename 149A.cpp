#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int k,n=12;
	int arr[n];
	cin>>k;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(k == 0){
		cout<<"0";
	}
	else{
		int len = sizeof(arr)/sizeof(arr[0]);
		sort(arr, arr+len);
		int count=0,sum=0;

		/*for(int i=n-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";*/
		for(int i=n-1;i>=0;i--){
			sum += arr[i];
			//cout<<sum<<" ";
			count++;
			if(sum>=k){
				break;
			}
		}
		//cout<<"\n";
		if(sum>=k)
			cout<<count;
		else
			cout<<"-1";
	}

	//accepted

	return 0;
}