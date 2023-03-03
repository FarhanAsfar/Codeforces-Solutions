#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	getline(cin, s);
	

	for(int i=0;i<s.length();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			i+=2;
			cout<<" ";
		}
		else{
			cout<<s[i];
		}
	}
//accepted.

	return 0;
}