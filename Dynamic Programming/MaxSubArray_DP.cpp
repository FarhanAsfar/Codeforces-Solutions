#include <bits/stdc++.h>
using namespace std;

int dp[1000];

int solveUsingDp(int a[],int n){
    //memset(dp, -1, sizeof(dp));
    for(int i=0;i<1000;i++){
    	dp[i] = INT_MIN;
    }
    
    dp[0]=a[0];
    int big=dp[0];
    
    if(dp[n]!=INT_MIN)
    	return dp[n];
    
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
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << solveUsingDp(arr, n);
    return 0;
}