#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		long long n;
		cin>>n;

		if(n%2==1){
			n+=1;
		}
		if(n<=6){
			cout<<"15"<<"\n";
			continue;
		}
		cout<<n/2*5<<"\n";
	}	

	return 0;
}