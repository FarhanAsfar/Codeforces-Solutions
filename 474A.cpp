#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string s1;
	char c;
	cin>>c>>s1;

	if(c == 'R'){
		for(int i=0;i<s1.size();i++){
			if(s1[i]==s[i])
				cout<<s[s.find(s1[i]-1)];
		}
	}

	return 0;
}