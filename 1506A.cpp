#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	int n,m,x;
	while(t--){
		cin>>n>>m>>x;

		for(int i=m+1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<j<<" ";
			}
			
		}
	}



	return 0;
}