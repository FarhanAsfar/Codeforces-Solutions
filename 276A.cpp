#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, time, f, t;
	cin>>n>>time;
	int ans = INT_MIN;

	for(int i=0;i<n;i++){
		cin>>f>>t;
		int maax = f;

		if(t>time){
			maax -= (t-time);
		}
		ans = max(ans, maax);
	}
	cout<<ans<<endl;

	//accepted.

	return 0;
} 