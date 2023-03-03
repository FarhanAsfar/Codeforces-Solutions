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
	string s;

	while(t--){
		cin>>s;
		int l = s.size()-1;
		s[0] = s[l];
		cout<<s<<"\n";
	}	

	return 0;
}