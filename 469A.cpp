#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false),cin.tie(NULL);

	int n,p,q,x,y;
	set <int> s;
	cin>>n>>p;

	while(p--){
		cin>>x;
		s.insert(x);
	}	
	cin>>q;
	while(q--){
		cin>>y;
		s.insert(y);
	}
	if(s.size()<n){
		cout<<"Oh, my keyboard!";
	}else{
		cout<<"I become the guy.";
	}

	return 0;
}