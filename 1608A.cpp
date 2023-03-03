#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;

		for(int i=n;i<n*2;i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}	

	return 0;
}