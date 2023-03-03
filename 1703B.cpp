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
		int n;
		string s;
		cin>>n>>s;

		set <char> str;

		for(auto i: s){
			str.insert(i);
		}
		int l=str.size();
		int m = s.length()-l;

		cout<<l*2+m<<endl;
	}

	return 0;
} 