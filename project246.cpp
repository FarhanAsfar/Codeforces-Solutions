// using dynamic programming

#include <bits/stdc++.h>
using namespace std;

int dp[1000];

int solveUsingDp(int a[],int n){
    memset(dp, INT_MAX, sizeof(dp));
    dp[0]=a[0];
    int big=dp[0];
    for (int i = 1; i < n; i++) {
        dp[i]=max(dp[i-1]+a[i],a[i]);
        if (dp[i]>big) big=dp[i];
    }
    return big;
}

int main()
{
    int n, arr[1000];
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << solveUsingDp(arr, n);
    return 0;
}

// using divide and conquer

/*#include <bits/stdc++.h>
using namespace std;

int maxSub(int arr[], int left, int right){
	if (right <= left) {
        return arr[left];
    }
	int mid = (left+right)/2;
	int L_max = -99999;
	int R_max = -99999;
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

	cout<<maxSub(arr,0,n-1);

	return 0;
} */
