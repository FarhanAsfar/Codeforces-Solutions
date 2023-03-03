#include <bits/stdc++.h>
using namespace std;

int min_sub(int arr[], int left, int right){
	int mid = (left+right)/2;
	int l_min = INT_MIN;
	int r_min = INT_MIN;
	int sum = 0;

	for(int i=mid;i>=left;i--){
		sum+=arr[i];
		if(sum>l_min){
			l_min=sum;
		}
	}
	sum = 0;
	for(int i=mid+1;i<=right;i++){
		sum+=arr[i];
		if(sum>r_min){
			r_min=sum;
		}
	}
	int mini = max(min_sub(arr, left, mid), min_sub(arr,mid+1,right));
	
	return max(mini, l_min+r_min);	
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,k;
	cin>>n>>k;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<min_sub(arr, 0, n-1);

	return 0;
} 