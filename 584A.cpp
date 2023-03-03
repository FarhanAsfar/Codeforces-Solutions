#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int n,t;
	cin>>n>>t;

	//if t<10 then we can print 't' for 'n' times.
	if(t<10){
		for(int i=0;i<n;i++){
			cout<<t;
		}
	}
	else if(t==10 && n>=2){
		for(int i=0;i<n-1;i++){
			cout<<1;
		}
		cout<<0;
	}
	else{
		cout<<-1;
	}


	return 0;
}