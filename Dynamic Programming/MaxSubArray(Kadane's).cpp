#include <bits/stdc++.h>
using namespace std;

int Max_Sub_Array(int arr[], int n){
	int ans=0, sum=0;

	for(int i=0;i<n;i++){
		if(sum+arr[i] > 0){
			sum+=arr[i];
		}
		else{
			sum=0;
		}
		ans = max(ans,sum);
	}
	return ans;
}

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

	cout<<Max_Sub_Array(arr, n);

	return 0;
} 