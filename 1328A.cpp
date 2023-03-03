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
	int a,b;
	cin>>t;

	while(t--){
		cin>>a>>b;
		if(a%b==0){
			cout<<"0"<<"\n";
		}
		else{
			cout<<b-(a%b)<<"\n";
		}
	}



	return 0;
}