#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int t,a,b,team,tm;
	cin>>t;

	while(t--){
		cin>>a>>b;

		int mini = min(a,b);
		int count=0;

		team = a+b;

		if(a==b){
			cout<<team/4<<"\n";
		}
		else{
			tm = (a+b)/4;
			cout<<min(tm,mini)<<"\n";
		}
	}	

	return 0;
}