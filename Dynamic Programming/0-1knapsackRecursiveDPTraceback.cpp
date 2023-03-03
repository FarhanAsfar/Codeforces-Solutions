#include<bits/stdc++.h>
using namespace std;

int dp[1001][2001] ;
int trace[1001][2001] ;

/*int max(int a, int b){
    if(a>b) return a ;
    return b ;
}*/

void traceback(int weight[], int val[], int cap, int n){
    if(n==0 || cap==0)
        return ;
        
    if(trace[n][cap]==1){
        cout<<n<<" ";
        traceback(weight, val, cap-weight[n], n-1);
    }
    else{
        traceback(weight, val, cap, n-1);
    }
}

int knapsack(int weight[], int val[] , int cap, int n)
{
    if(n == 0 || cap == 0) return 0 ;

    if(dp[n][cap] != -1) return dp[n][cap] ;

    if(weight[n] <= cap){
        int l1 = val[n]+knapsack(weight, val, cap-weight[n], n-1) ;
        int l2 = knapsack(weight, val, cap, n-1) ;
        if(l1>l2){
            trace[n][cap] = 1 ;
            return dp[n][cap] = l1 ;
        }
        else{
            trace[n][cap] = 0 ;
            return dp[n][cap] = l2 ;
        }

        //return dp[n][cap] = max(val[n]+knapsack(weight, val, cap-weight[n], n-1) , knapsack(weight, val, cap, n-1)) ;
    }
    else if(weight[n] > cap){
        trace[n][cap] = 0 ;
        return dp[n][cap] = knapsack(weight, val, cap, n-1) ;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int weight[100], val[100], cap, n ;
    memset(dp, -1, sizeof(dp)) ;

    scanf("%d", &n) ;
    for(int i = 1 ; i <= n ; i++){
        scanf("%d %d", &weight[i], &val[i]) ;
    }
    scanf("%d", &cap) ;
    int profit = knapsack(weight, val, cap, n) ;
    printf("Max Profit: %d\n", profit) ;
    
    traceback(weight, val, cap, n);
}

/*
5
2 10
7 15
1 4
10 18
4 12

10

*/

