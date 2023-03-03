#include <bits/stdc++.h>
using namespace std;

int maxSub(int arr[], int left, int right){
	if (right <= left) {
        return arr[left];
    }
	int mid = (left+right)/2;
	int L_max = INT_MIN;
	int R_max = INT_MIN;
	int sum = 0;

	for(int i=mid;i>=left;i--){
		sum+=arr[i];
		if(sum>L_max){
			L_max = sum;
		}
	}
	sum = 0;
	for(int i=mid+1;i<=right;i++){
		sum+=arr[i];
		if(sum>R_max){
			R_max = sum;
		}
	}

	int maximum = max(maxSub(arr, left, mid), maxSub(arr,mid+1,right));

	return max(maximum, L_max+R_max);


}

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<endl<<"Maximum Sum: "<<maxSub(arr,0,n-1)<<endl;


	return 0;
}
