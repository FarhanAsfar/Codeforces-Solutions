#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(0);

	int t,n,u,v;
	cin>>t;

	while(t--){
		cin>>n>>u>>v;
		
		vector<int> arr(n);

		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		int cost=INT_MAX;

		for(int i=1;i<=n-1;i++)
        {
            if(arr[i]-arr[i-1]==0)
            {
                cost=min(cost,v+min(u,v));
            }
            else if(abs(arr[i]-arr[i-1])==1)
            {
                cost=min(cost,min(u,v));
            }
            else if(abs(arr[i]-arr[i-1])>1)
            {
                cost=0;
            }
        }
		cout<<cost<<"\n";

	}

	
	return 0;
}
