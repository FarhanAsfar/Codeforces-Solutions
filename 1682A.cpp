#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,t;
	cin>>t;
	string s,c,p;

	while(t--){
		cin>>s;

		s.erase(remove(s.begin(), s.end(), 'a'), s.end());

		cout<<s;
	}



	return 0;
} 