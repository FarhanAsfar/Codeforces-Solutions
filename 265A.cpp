#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s,t;
	cin>>s>>t;
	int position=0;

	for(int i=0;i<t.length();i++){
		if(t[i] == s[position]){
			position++;
		}
	}
	cout<<position+1;

	return 0;
}