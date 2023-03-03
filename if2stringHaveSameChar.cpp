#include <bits/stdc++.h>
using namespace std;

bool checkString(string g, string h)
{
	map<char, int> s1;
	for(int i=0;i<g.length();i++){
		s1[g[i]]++;
	}

	map<char, int> s2;
	for(int i=0;i<h.length();i++){
		s2[h[i]]++;
	}
	if(s1 == s2)
		return true;
	else
		return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string guest,host,pile;
	cin>>guest>>host>>pile;

	string s = guest+host;

	if(checkString(s,pile))
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}