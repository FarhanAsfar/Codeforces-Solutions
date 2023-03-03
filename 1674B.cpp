#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int f = s[0]-'a'+1;
		int g = s[1]-'a'+1;
		cout<<f<<" "<<g;
	}

	return 0;
} 