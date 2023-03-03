#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+10;
vector<int> arr(100);
int dp[100];

int lis(int i){
	if(dp[i]!=-1)
		return dp[i];

	int ans = 1;
	for(int j=0;j<i;j++){
		if(arr[i]>arr[j]){
			ans = max(ans, lis(j)+1);
		}
	}
	return dp[i] = ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	memset(dp, -1, sizeof(dp));
 	int n;
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 	}
 	int ans=0;
 	for(int i=n;i>0;i--){
 		//ans = max(ans, lis(i));
 		ans = lis(i);
 	}
 	cout<<ans;

	return 0;
} 