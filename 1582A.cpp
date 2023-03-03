#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	long long t,a,b,c;
	cin>>t;	

	while(t--){
		cin>>a>>b>>c;
		long long sum=0;
		sum = (a) + (b*2) + (c*3);

		cout<<sum%2<<"\n";
	}

	return 0;
}