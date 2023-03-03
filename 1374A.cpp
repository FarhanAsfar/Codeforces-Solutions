#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,x,y,n;
	cin>>t;

	while(t--){
		cin>>x>>y>>n;
		int z = (n-(n%x)+y);
		int m = (n-(n%x)-(x-y));
		
		if(z<=n){
			cout<<z<<"\n";
		}else{
			cout<<m<<"\n";
		}
	}	

	return 0;
}